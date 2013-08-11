#ifndef PROJECTEDCUBE_H
#define PROJECTEDCUBE_H

#include "projectedobject.h"

class ProjectedCube : public ProjectedObject
{
public:
    ProjectedCube(GLfloat x, GLfloat y, GLfloat z);
    virtual void draw();
    virtual QString toString();
};

#endif // PROJECTEDCUBE_H
