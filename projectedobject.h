#ifndef PROJECTEDOBJECT_H
#define PROJECTEDOBJECT_H

#include <QtOpenGL>
#include <QObject>

class ProjectedObject: public QObject
{
    Q_OBJECT

public:
    ProjectedObject(GLfloat x, GLfloat y, GLfloat z);
    virtual void draw()=0;

protected:
    GLfloat _x;
    GLfloat _y;
    GLfloat _z;
    GLfloat _rx;
    GLfloat _ry;
    GLfloat _rz;

public slots:
    void setx(float x);
    void sety(float y);
    void setz(float z);
    void setrx(float rx);
    void setry(float ry);
    void setrz(float rz);
};

#endif // PROJECTEDOBJECT_H
