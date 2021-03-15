/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QFrame *line;
    QFrame *line_2;
    QFrame *line_3;
    QFrame *line_4;
    QPushButton *pushButton_1_2;
    QPushButton *pushButton_1_3;
    QPushButton *pushButton_2_1;
    QPushButton *pushButton_1_1;
    QPushButton *pushButton_2_2;
    QPushButton *pushButton_2_3;
    QPushButton *pushButton_3_1;
    QPushButton *pushButton_3_2;
    QPushButton *pushButton_3_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(627, 523);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(130, 170, 391, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(centralwidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(130, 290, 391, 16));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(centralwidget);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(230, 100, 41, 281));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);
        line_4 = new QFrame(centralwidget);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(370, 100, 41, 281));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);
        pushButton_1_2 = new QPushButton(centralwidget);
        pushButton_1_2->setObjectName(QString::fromUtf8("pushButton_1_2"));
        pushButton_1_2->setGeometry(QRect(280, 100, 80, 61));
        QFont font;
        font.setPointSize(24);
        pushButton_1_2->setFont(font);
        pushButton_1_3 = new QPushButton(centralwidget);
        pushButton_1_3->setObjectName(QString::fromUtf8("pushButton_1_3"));
        pushButton_1_3->setGeometry(QRect(410, 100, 80, 61));
        pushButton_1_3->setFont(font);
        pushButton_2_1 = new QPushButton(centralwidget);
        pushButton_2_1->setObjectName(QString::fromUtf8("pushButton_2_1"));
        pushButton_2_1->setGeometry(QRect(140, 200, 80, 61));
        pushButton_2_1->setFont(font);
        pushButton_1_1 = new QPushButton(centralwidget);
        pushButton_1_1->setObjectName(QString::fromUtf8("pushButton_1_1"));
        pushButton_1_1->setGeometry(QRect(140, 100, 80, 61));
        pushButton_1_1->setFont(font);
        pushButton_2_2 = new QPushButton(centralwidget);
        pushButton_2_2->setObjectName(QString::fromUtf8("pushButton_2_2"));
        pushButton_2_2->setGeometry(QRect(280, 200, 80, 61));
        pushButton_2_2->setFont(font);
        pushButton_2_3 = new QPushButton(centralwidget);
        pushButton_2_3->setObjectName(QString::fromUtf8("pushButton_2_3"));
        pushButton_2_3->setGeometry(QRect(420, 200, 80, 61));
        pushButton_2_3->setFont(font);
        pushButton_3_1 = new QPushButton(centralwidget);
        pushButton_3_1->setObjectName(QString::fromUtf8("pushButton_3_1"));
        pushButton_3_1->setGeometry(QRect(140, 310, 80, 61));
        pushButton_3_1->setFont(font);
        pushButton_3_2 = new QPushButton(centralwidget);
        pushButton_3_2->setObjectName(QString::fromUtf8("pushButton_3_2"));
        pushButton_3_2->setGeometry(QRect(280, 310, 80, 61));
        pushButton_3_2->setFont(font);
        pushButton_3_3 = new QPushButton(centralwidget);
        pushButton_3_3->setObjectName(QString::fromUtf8("pushButton_3_3"));
        pushButton_3_3->setGeometry(QRect(420, 310, 80, 61));
        pushButton_3_3->setFont(font);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 627, 20));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton_1_2->setText(QString());
        pushButton_1_3->setText(QString());
        pushButton_2_1->setText(QString());
        pushButton_1_1->setText(QString());
        pushButton_2_2->setText(QString());
        pushButton_2_3->setText(QString());
        pushButton_3_1->setText(QString());
        pushButton_3_2->setText(QString());
        pushButton_3_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
