#ifndef GLSCENE_H
#define GLSCENE_H

#include <QtOpenGL>

// OpenGL includes - Included here and hence shared by all the files that need OpenGL headers.
#if QT_VERSION >= 0x040000
# include <QGLWidget>
#else
# include <qgl.h>
#endif

// GLU was removed from Qt in version 4.8
#ifdef Q_OS_MAC
# include <OpenGL/glu.h>
#else
# include <GL/glu.h>
#endif

#include <QString>
#include <QTimer>
#include <QVector>

#include "projectedobject.h"

class GLScene : public QGLWidget
{
    Q_OBJECT
public:
    explicit GLScene(int fps, QString windowTitle, QWidget *parent = 0);
    virtual ~GLScene();
    virtual void initializeGL();
    virtual void paintGL();
    virtual void resizeGL(int width, int height);
    virtual void keyPressEvent( QKeyEvent *keyEvent );
    void addProjectedObject(ProjectedObject* object);
signals:
    
public slots:
    void timeOut();

private:
    QTimer* _fpsTimer;
    QVector<ProjectedObject*> _objectsVector;

};

#endif // GLSCENE_H
