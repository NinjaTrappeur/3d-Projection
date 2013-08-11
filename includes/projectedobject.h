#ifndef PROJECTEDOBJECT_H
#define PROJECTEDOBJECT_H

#include <QtOpenGL>
#include <QObject>
#include <QString>

class ProjectedObject: public QObject
{
    Q_OBJECT

public:
    ProjectedObject(GLfloat x, GLfloat y, GLfloat z);
    virtual void draw()=0;
    virtual QString toString()=0;

protected:
    GLfloat _x;
    GLfloat _y;
    GLfloat _z;
    GLfloat _rx;
    GLfloat _ry;
    GLfloat _rz;

public slots:
    void setx(int x);
    void sety(int y);
    void setz(int z);
    void setrx(int rx);
    void setry(int ry);
    void setrz(int rz);
};

#endif // PROJECTEDOBJECT_H
