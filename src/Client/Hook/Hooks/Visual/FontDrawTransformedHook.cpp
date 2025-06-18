#include "FontDrawTransformedHook.hpp"
#include "../../../Module/Modules/ClickGUI/ClickGui.hpp"

void FontDrawTransformedHook::FontDrawTransformedCallback(void* _this, void* screenContext, std::string& str, float x,
    float y, MCCColor* color, int angle, float s, bool centered, float maxWidth)
{

    if (!clickgui) return;
    D2D_COLOR_F primary1 = ClickGUI::getColor("primary1");

    if (clickgui) {
        color->r = primary1.r;
        color->g = primary1.g;
        color->b = primary1.b;
    }

    std::string txt("Flarial on top!");
    funcOriginal(_this, screenContext, txt, x, y, color, angle, s, centered, maxWidth);
}

FontDrawTransformedHook::FontDrawTransformedHook(): Hook("Font drawTransformed Hook", GET_SIG_ADDRESS("Font::drawTransformed"))
{}

void FontDrawTransformedHook::enableHook()
{

    this->autoHook((void *) FontDrawTransformedCallback, (void **) &funcOriginal);

}
