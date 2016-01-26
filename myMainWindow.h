/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   myMainWindow.h
 * Author: lokke
 *
 * Created on January 21, 2016, 10:16 PM
 */

#ifndef _MYMAINWINDOW_H
#define _MYMAINWINDOW_H

#include "ui_myMainWindow.h"
#include "myModel.h"


class myMainWindow : public QMainWindow {
    Q_OBJECT
public:
    myMainWindow(QWidget* parent = 0);
    virtual ~myMainWindow();
private:
    Ui::myMainWindow widget;
    myModel* ptr_model;
private slots:
    void onLoadBtnClicked();
    void onTestBtnClicked();
    void onFirstSliderChanging();
};

#endif /* _MYMAINWINDOW_H */
