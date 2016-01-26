/********************************************************************************
** Form generated from reading UI file 'myMainWindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYMAINWINDOW_H
#define UI_MYMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDockWidget>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QStatusBar>
#include <QtGui/QTableView>
#include <QtGui/QTextBrowser>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_myMainWindow
{
public:
    QWidget *centralwidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QTableView *tableView;
    QProgressBar *progressBar;
    QTextBrowser *textBrowser;
    QMenuBar *menubar;
    QMenu *menuMenu;
    QMenu *menuSettings;
    QStatusBar *statusbar;
    QDockWidget *dockWidget_2;
    QWidget *dockWidgetContents_2;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QTextEdit *firstTextEdit;
    QSlider *horizontalSlider;
    QHBoxLayout *horizontalLayout_4;
    QTextEdit *secondTextEdit;
    QSlider *horizontalSlider_3;
    QSpacerItem *verticalSpacer;
    QPushButton *loadBtn;
    QPushButton *testBtn;

    void setupUi(QMainWindow *myMainWindow)
    {
        if (myMainWindow->objectName().isEmpty())
            myMainWindow->setObjectName(QString::fromUtf8("myMainWindow"));
        myMainWindow->resize(905, 490);
        centralwidget = new QWidget(myMainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setEnabled(true);
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(0, 10, 701, 411));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setContentsMargins(4, 4, 4, 4);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        tableView = new QTableView(horizontalLayoutWidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        horizontalLayout->addWidget(tableView);

        progressBar = new QProgressBar(centralwidget);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(560, 420, 131, 23));
        progressBar->setValue(24);
        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(0, 420, 561, 21));
        myMainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(myMainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 905, 25));
        menuMenu = new QMenu(menubar);
        menuMenu->setObjectName(QString::fromUtf8("menuMenu"));
        menuSettings = new QMenu(menubar);
        menuSettings->setObjectName(QString::fromUtf8("menuSettings"));
        myMainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(myMainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        myMainWindow->setStatusBar(statusbar);
        dockWidget_2 = new QDockWidget(myMainWindow);
        dockWidget_2->setObjectName(QString::fromUtf8("dockWidget_2"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(dockWidget_2->sizePolicy().hasHeightForWidth());
        dockWidget_2->setSizePolicy(sizePolicy);
        dockWidget_2->setMinimumSize(QSize(144, 39));
        dockWidgetContents_2 = new QWidget();
        dockWidgetContents_2->setObjectName(QString::fromUtf8("dockWidgetContents_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(dockWidgetContents_2->sizePolicy().hasHeightForWidth());
        dockWidgetContents_2->setSizePolicy(sizePolicy1);
        verticalLayoutWidget = new QWidget(dockWidgetContents_2);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 0, 191, 411));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        firstTextEdit = new QTextEdit(verticalLayoutWidget);
        firstTextEdit->setObjectName(QString::fromUtf8("firstTextEdit"));
        sizePolicy1.setHeightForWidth(firstTextEdit->sizePolicy().hasHeightForWidth());
        firstTextEdit->setSizePolicy(sizePolicy1);
        firstTextEdit->setMaximumSize(QSize(32, 30));

        horizontalLayout_2->addWidget(firstTextEdit);

        horizontalSlider = new QSlider(verticalLayoutWidget);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        sizePolicy1.setHeightForWidth(horizontalSlider->sizePolicy().hasHeightForWidth());
        horizontalSlider->setSizePolicy(sizePolicy1);
        horizontalSlider->setMaximumSize(QSize(16777215, 24));
        horizontalSlider->setBaseSize(QSize(64, 18));
        horizontalSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(horizontalSlider);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        secondTextEdit = new QTextEdit(verticalLayoutWidget);
        secondTextEdit->setObjectName(QString::fromUtf8("secondTextEdit"));
        sizePolicy1.setHeightForWidth(secondTextEdit->sizePolicy().hasHeightForWidth());
        secondTextEdit->setSizePolicy(sizePolicy1);
        secondTextEdit->setMaximumSize(QSize(32, 30));

        horizontalLayout_4->addWidget(secondTextEdit);

        horizontalSlider_3 = new QSlider(verticalLayoutWidget);
        horizontalSlider_3->setObjectName(QString::fromUtf8("horizontalSlider_3"));
        sizePolicy1.setHeightForWidth(horizontalSlider_3->sizePolicy().hasHeightForWidth());
        horizontalSlider_3->setSizePolicy(sizePolicy1);
        horizontalSlider_3->setMaximumSize(QSize(16777215, 24));
        horizontalSlider_3->setBaseSize(QSize(64, 18));
        horizontalSlider_3->setOrientation(Qt::Horizontal);

        horizontalLayout_4->addWidget(horizontalSlider_3);


        verticalLayout->addLayout(horizontalLayout_4);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        loadBtn = new QPushButton(verticalLayoutWidget);
        loadBtn->setObjectName(QString::fromUtf8("loadBtn"));
        loadBtn->setStyleSheet(QString::fromUtf8("background-color: rgb(159, 159, 159);\n"
"font: 10pt \"Ubuntu\";"));

        verticalLayout->addWidget(loadBtn);

        testBtn = new QPushButton(verticalLayoutWidget);
        testBtn->setObjectName(QString::fromUtf8("testBtn"));
        testBtn->setStyleSheet(QString::fromUtf8("background-color: rgb(159, 159, 159);\n"
"font: 10pt \"Ubuntu\";"));

        verticalLayout->addWidget(testBtn);

        dockWidget_2->setWidget(dockWidgetContents_2);
        myMainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(2), dockWidget_2);

        menubar->addAction(menuMenu->menuAction());
        menubar->addAction(menuSettings->menuAction());

        retranslateUi(myMainWindow);

        QMetaObject::connectSlotsByName(myMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *myMainWindow)
    {
        myMainWindow->setWindowTitle(QApplication::translate("myMainWindow", "myMainWindow", 0, QApplication::UnicodeUTF8));
        menuMenu->setTitle(QApplication::translate("myMainWindow", "Menu", 0, QApplication::UnicodeUTF8));
        menuSettings->setTitle(QApplication::translate("myMainWindow", "Settings", 0, QApplication::UnicodeUTF8));
        loadBtn->setText(QApplication::translate("myMainWindow", "Load", 0, QApplication::UnicodeUTF8));
        testBtn->setText(QApplication::translate("myMainWindow", "Test", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class myMainWindow: public Ui_myMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYMAINWINDOW_H
