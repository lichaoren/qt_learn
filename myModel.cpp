/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   myModel.cpp
 * Author: lokke
 * 
 * Created on January 21, 2016, 11:59 PM
 */

#include <QDebug>


#include "myModel.h"

myModel::myModel(QObject* parent) :
QAbstractTableModel(parent)
{
}

myModel::~myModel()
{
}

int myModel::rowCount(const QModelIndex& /*parent*/) const
{
    return 3;
}

int myModel::columnCount(const QModelIndex& /*parent*/) const
{
    return 3;
}

QVariant myModel::data(const QModelIndex& index, int role) const
{
    if (role == Qt::DisplayRole) {
        return QString("Row%1, Column%2")
                .arg(index.row() + 1)
                .arg(index.column() + 1);
    }
    
    return QVariant();
}