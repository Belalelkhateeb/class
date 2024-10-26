#include "car.h"

void car::setMaker(string M)
{
    maker = M;

}

string car::getMaker()
{
    return maker;
}

void car::setColor(string C)
{
    color =C;
}

string car::getColor()
{
    return color;
}

void car::setModel(int Mo)
{
    model =Mo;
}

int car::getModel()
{
    return model;
}

car::car()
{
}

car::~car()
{
}
