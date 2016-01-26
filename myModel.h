/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   myModel.h
 * Author: lokke
 *
 * Created on January 21, 2016, 11:59 PM
 */

#ifndef MYMODEL_H
#define MYMODEL_H

#include <QAbstractTableModel>

class myModel : public QAbstractTableModel {
    Q_OBJECT
public:
    myModel(QObject* parent = 0);
    virtual ~myModel();
    

    virtual int rowCount(const QModelIndex &parent = QModelIndex()) const;
    virtual int columnCount(const QModelIndex &parent = QModelIndex()) const;
    
    virtual QVariant data(const QModelIndex &index = QModelIndex(), int role = Qt::DisplayRole) const;

    
private:
    myModel(const myModel& orig);

};

#endif /* MYMODEL_H */

