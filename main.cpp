#include "mainwindow.h"
#include "glscene.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    GLScene glScene(60, "OpenGl Renderer");
    glScene.show();
    //MainWindow w;
    //w.show();
    
    return a.exec();
}
