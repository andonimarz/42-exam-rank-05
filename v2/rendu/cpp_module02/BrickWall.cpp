#include "BrickWall.hpp"

BrickWall::BrickWall()
{
    this->type = "Inconspicuous Red-brick Wall";
}

BrickWall::~BrickWall() {}

ATarget *BrickWall::clone(void) const
{
    return new BrickWall();
}