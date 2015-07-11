
local UIButton = import(".UIButton")
local UIPushButton = class("UIPushButton", UIButton)

UIPushButton.NORMAL   = "normal"
UIPushButton.PRESSED  = "pressed"
UIPushButton.DISABLED = "disabled"

function UIPushButton:ctor(images, options)
    UIPushButton.super.ctor(self, {
        {name = "disable", from = {"normal", "pressed"}, to = "disabled"},
        {name = "enable",  from = {"disabled"}, to = "normal"},
        {name = "press",   from = "normal",  to = "pressed"},
        {name = "release", from = "pressed", to = "normal"},
    }, "normal", options)
    
    if type(images) ~= "table" then images = {normal = images} end
    self:setButtonImage(UIPushButton.NORMAL, images["normal"], true)
    self:setButtonImage(UIPushButton.PRESSED, images["pressed"], true)
    self:setButtonImage(UIPushButton.DISABLED, images["disabled"], true)
end

function UIPushButton:setButtonImage(state, image, ignoreEmpty)
    assert(state == UIPushButton.NORMAL
        or state == UIPushButton.PRESSED
        or state == UIPushButton.DISABLED,
        string.format("UIPushButton:setButtonImage() - invalid state %s", tostring(state)))
    UIPushButton.super.setButtonImage(self, state, image, ignoreEmpty)

    if state == UIPushButton.NORMAL then
        if not self.images_[UIPushButton.PRESSED] then
            self.images_[UIPushButton.PRESSED] = image
        end
        if not self.images_[UIPushButton.DISABLED] then
            self.images_[UIPushButton.DISABLED] = image
        end
    end

    return self
end

function UIPushButton:onTouch_(event)

    local name, x, y = event.name, event.x, event.y
    print("UIPushButton:onTouch_"..name)
    if name == "began" then
        if not self:checkTouchInSprite_(x, y) then return false end
        self.fsm_:doEvent("press")
        self:dispatchEvent({name = UIButton.PRESSED_EVENT, x = x, y = y, touchInTarget = true})
        -- if self.doNotTakeEvent == true then
        --     print("self.doNotTakeEvent ==============   ===== 222")
        --     return kCCTouchBeganNoSwallows
        -- end
        return true
    end

    local touchInTarget = self:checkTouchInSprite_(x, y)

    if name == "moved" then
        if touchInTarget and self.fsm_:canDoEvent("press") then
            self.fsm_:doEvent("press")
            self:dispatchEvent({name = UIButton.PRESSED_EVENT, x = x, y = y, touchInTarget = true})
        elseif not touchInTarget and self.fsm_:canDoEvent("release") then
            self.fsm_:doEvent("release")
            self:dispatchEvent({name = UIButton.RELEASE_EVENT, x = x, y = y, touchInTarget = false})
        end
    else
        if self.fsm_:canDoEvent("release") then
            self.fsm_:doEvent("release")
            print("self.mReleaseSound is "..self.mReleaseSound)
            if self.mReleaseSound then
                audio.playSound(self.mReleaseSound)
            end
            self:dispatchEvent({name = UIButton.RELEASE_EVENT, x = x, y = y, touchInTarget = touchInTarget})
        end
        if name == "ended" and touchInTarget then
            if self.mSound then
                if SOUND_ON then
                    audio.playSound(self.mSound)
                end
            end
            self:dispatchEvent({name = UIButton.CLICKED_EVENT, x = x, y = y, touchInTarget = true})
        end
    end
end
function UIPushButton:doActionOnTheList()
    self:setTouchSwallowEnabled(false)
end


return UIPushButton
