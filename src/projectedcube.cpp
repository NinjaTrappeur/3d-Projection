#include "projectedcube.h"

#include <QtOpenGL>

ProjectedCube::ProjectedCube(GLfloat x, GLfloat y, GLfloat z):
    ProjectedObject(x,y,z)
{
}

void ProjectedCube::draw()
{
    glLoadIdentity();
    glTranslatef(_x, _y, _z);
    glRotatef(_rx,1.0f,0.0f,0.0f);
    glRotatef(_ry,0.0f,1.0f,0.0f);
    glRotatef(_rz,0.0f,0.0f,1.0f);

    glBegin(GL_QUADS);
        //Front square
        glVertex3f(-1.0f,1.0f,1.0f);
        glVertex3f(-1.0f,-1.0f,1.0f);
        glVertex3f(1.0f,-1.0f,1.0f);
        glVertex3f(1.0f,1.0f,1.0f);

        //right side square
        glVertex3f(1.0f,1.0f,1.0f);
        glVertex3f(1.0f,-1.0f,1.0f);
        glVertex3f(1.0f,-1.0f,-1.0f);
        glVertex3f(1.0f,1.0f,-1.0f);

        //bottom square
        glVertex3f(-1.0f,1.0f,-1.0f);
        glVertex3f(1.0f,1.0f,-1.0f);
        glVertex3f(1.0f,-1.0f,-1.0f);
        glVertex3f(-1.0f,-1.0f,-1.0f);

        //left side square
        glVertex3f(1.0f,1.0f,-1.0f);
        glVertex3f(1.0f,-1.0f,-1.0f);
        glVertex3f(1.0f,-1.0f,1.0f);
        glVertex3f(1.0f,1.0f,1.0f);

        //top square
        glVertex3f(-1.0f,1.0f,-1.0f);
        glVertex3f(-1.0f,1.0f,1.0f);
        glVertex3f(1.0f,1.0f,1.0f);
        glVertex3f(1.0f,1.0f,-1.0f);

        //down square
        glVertex3f(-1.0f,-1.0f,-1.0f);
        glVertex3f(-1.0f,-1.0f,1.0f);
        glVertex3f(1.0f,-1.0f,1.0f);
        glVertex3f(1.0f,-1.0f,-1.0f);
    glEnd();
}

QString ProjectedCube::toString()
{
    return "Cube";
}
