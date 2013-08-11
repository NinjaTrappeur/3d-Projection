#include "projectedobject.h"

ProjectedObject::ProjectedObject(GLfloat x, GLfloat y, GLfloat z):
    _x(x),
    _y(y),
    _z(z),
    _rx(0.0f),
    _ry(0.0f),
    _rz(0.0f)
{
}


void ProjectedObject::setx(float x)
{
    _x = x;
}

void ProjectedObject::sety(float y)
{
    _y = y;
}

void ProjectedObject::setz(float z)
{
    _z = z;
}

void ProjectedObject::setrx(float rx)
{
    _rx = rx;
}

void ProjectedObject::setry(float ry)
{
    _ry = ry;
}

void ProjectedObject::setrz(float rz)
{
    _rz = rz;
}
