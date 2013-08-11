#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <iostream>

MainWindow::MainWindow(GLScene &scene, QWidget *parent) :
    QMainWindow(parent),
    _glScene(scene),
    ui(new Ui::MainWindow),
    _currentGlObject(-1)
{
    ui->setupUi(this);
    for(int i=0; i<_glScene.objectsVector().size(); ++i)
        ui->comboBox->addItem(_glScene.objectsVector()[i]->toString());
    connect(ui->comboBox, SIGNAL(activated(int)), this, SLOT(connectGlObject(int)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::connectGlObject(int id)
{
    if(_currentGlObject!=-1 && id!=_currentGlObject)
    {
        disconnect(ui->sliderX,SIGNAL(valueChanged(int)), _glScene.objectsVector()[_currentGlObject], SLOT(setx(int)));
        disconnect(ui->sliderY,SIGNAL(valueChanged(int)), _glScene.objectsVector()[_currentGlObject], SLOT(sety(int)));
        disconnect(ui->sliderZ,SIGNAL(valueChanged(int)), _glScene.objectsVector()[_currentGlObject], SLOT(setz(int)));
        disconnect(ui->sliderRx,SIGNAL(valueChanged(int)), _glScene.objectsVector()[_currentGlObject], SLOT(setrx(int)));
        disconnect(ui->sliderRy,SIGNAL(valueChanged(int)), _glScene.objectsVector()[_currentGlObject], SLOT(setry(int)));
        disconnect(ui->sliderRz,SIGNAL(valueChanged(int)), _glScene.objectsVector()[_currentGlObject], SLOT(setrz(int)));
    }

    if(id!=-1)
    {
        connect(ui->sliderX, SIGNAL(valueChanged(int)), _glScene.objectsVector()[id], SLOT(setx(int)));
        connect(ui->sliderY, SIGNAL(valueChanged(int)), _glScene.objectsVector()[id], SLOT(sety(int)));
        connect(ui->sliderZ, SIGNAL(valueChanged(int)), _glScene.objectsVector()[id], SLOT(setz(int)));
        connect(ui->sliderRx, SIGNAL(valueChanged(int)), _glScene.objectsVector()[id], SLOT(setrx(int)));
        connect(ui->sliderRy, SIGNAL(valueChanged(int)), _glScene.objectsVector()[id], SLOT(setry(int)));
        connect(ui->sliderRz, SIGNAL(valueChanged(int)), _glScene.objectsVector()[id], SLOT(setrz(int)));
        _currentGlObject = id;
    }
}
