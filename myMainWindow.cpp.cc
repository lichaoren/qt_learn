/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   myMainWindow.cpp
 * Author: lokke
 *
 * Created on January 21, 2016, 10:16 PM
 */

#include "myMainWindow.h"

#include <QtCore/qdebug.h>
#include <QFileDialog>
#include <QString>

myMainWindow::myMainWindow(QWidget* parent) :
QMainWindow(parent),
ptr_model(new myModel(this))
{
    widget.setupUi(this);

    widget.tableView->setModel(ptr_model);
    widget.tableView->show();

    connect(widget.horizontalSlider, SIGNAL(sliderMoved(int)), this, SLOT(onFirstSliderChanging()));
}

myMainWindow::~myMainWindow()
{
}

void myMainWindow::onLoadBtnClicked()
{
}

void myMainWindow::onTestBtnClicked()
{

}

void myMainWindow::onFirstSliderChanging()
{
    qDebug() << "slider is changing";
    widget.firstTextEdit->setText(QString::number(widget.horizontalSlider->value()));
    ptr_model->
}