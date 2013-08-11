#include "projectedobject.h"

#include <iostream>

ProjectedObject::ProjectedObject(GLfloat x, GLfloat y, GLfloat z):
    _x(x),
    _y(y),
    _z(z),
    _rx(0.0f),
    _ry(0.0f),
    _rz(0.0f)
{
}


void ProjectedObject::setx(int x)
{
    _x = GLfloat(x)/100;
}

void ProjectedObject::sety(int y)
{
    _y = GLfloat(y)/100;
}

void ProjectedObject::setz(int z)
{
    _z = GLfloat(z)/100 - 6;
}

void ProjectedObject::setrx(int rx)
{
    _rx = rx;
}

void ProjectedObject::setry(int ry)
{
    _ry = ry;
}

void ProjectedObject::setrz(int rz)
{
    _rz = rz;
}
