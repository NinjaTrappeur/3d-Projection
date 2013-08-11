#include "mainwindow.h"
#include "glscene.h"
#include "projectedcube.h"

#include <QApplication>
#include <iostream>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    GLScene glScene(60, "OpenGl Renderer");
    ProjectedCube* cube = new ProjectedCube(0.0f,0.0f,-6.0f);
    glScene.addProjectedObject(cube);
    glScene.show();
    MainWindow w(glScene);
    w.show();
    
    return a.exec();
}
