#include "rectangle.h"


Rectangle::Rectangle() {}

void Rectangle::setWidth(double newWidth)
{
    width = newWidth;
}

void Rectangle::setHeight(double newHeight)
{
    height = newHeight;
}

double Rectangle::getArea(){
  return width * height;
}

double Rectangle::getCircum(){
    return 2 * (width+height);
}
