#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "glscene.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(GLScene& scene, QWidget *parent = 0);
    ~MainWindow();

private slots:
    void connectGlObject(int id);

private:
    GLScene& _glScene;
    Ui::MainWindow *ui;
    int _currentGlObject;
};

#endif // MAINWINDOW_H
