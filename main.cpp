 /*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   main.cpp
 * Author: lokke
 *
 * Created on January 18, 2016, 10:20 PM
 */

#include <QApplication>
#include <QTableView>


#include "myMainWindow.h"


int main(int argc, char *argv[]) {
    // initialize resources, if needed
    // Q_INIT_RESOURCE(resfile);

    QApplication app(argc, argv);

    // create and show your widgets here
    
    myMainWindow win;
    win.show();
    
    return app.exec();
}
