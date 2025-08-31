#pragma once

struct SliderRect {
    bool isMovingElement = false;
    bool hasBeenMoved = false;
    float movedX = 0;
    float percentageX = 0;
    float hoveredAnim = 0;
    bool firstHover = false;
    bool isValid = true;
    float validFloat = -1.f;
};
