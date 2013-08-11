#include "glscene.h"

GLScene::GLScene(int fps, QString windowTitle, QWidget *parent) :
    QGLWidget(parent)
{
    setWindowTitle(windowTitle);
    if(fps==0)
        _fpsTimer = NULL;
    else
    {
        int second = 1000;
        int timerLap = second / fps;
        _fpsTimer = new QTimer(this);
        connect(_fpsTimer, SIGNAL(timeout()), this, SLOT(timeOut()));
        _fpsTimer->start(timerLap);
    }
}

void GLScene::initializeGL()
{
    glShadeModel(GL_SMOOTH);
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
    glClearDepth(1.0f);
    glEnable(GL_DEPTH_TEST);
    glDepthFunc(GL_LEQUAL);
    glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);
}

void GLScene::resizeGL(int width, int height)
{
    if(height == 0)
        height = 1;
    glViewport(0, 0, width, height);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(45.0f, (GLfloat)width/(GLfloat)height, 0.1f, 100.0f);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}

void GLScene::timeOut()
{
    updateGL();
}

void GLScene::keyPressEvent( QKeyEvent *keyEvent )
{
    switch(keyEvent->key())
    {
        case Qt::Key_Escape:
            close();
            break;
    }
}

void GLScene::paintGL()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    for(int i=0; i<_objectsVector.size(); ++i)
        _objectsVector[i]->draw();
}

void GLScene::addProjectedObject(ProjectedObject *object)
{
    _objectsVector.append(object);
}

GLScene::~GLScene()
{
    _fpsTimer->deleteLater();
}
