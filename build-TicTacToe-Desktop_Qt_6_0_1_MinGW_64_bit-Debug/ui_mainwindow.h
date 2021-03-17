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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
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
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton_3_2;
    QPushButton *pushButton_1_3;
    QPushButton *pushButton_2_1;
    QPushButton *pushButton_1_2;
    QPushButton *pushButton_3_1;
    QPushButton *exitBtn;
    QPushButton *pushButton_2_3;
    QPushButton *pushButton_2_2;
    QPushButton *pushButton_1_1;
    QPushButton *pushButton_3_3;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *scoreO;
    QLabel *label_2;
    QLabel *scoreX;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(431, 535);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color:#f5a25d"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(40, 100, 351, 986));
        QFont font;
        font.setFamily(QString::fromUtf8("OCR A Extended"));
        gridLayoutWidget->setFont(font);
        gridLayoutWidget->setStyleSheet(QString::fromUtf8(""));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_3_2 = new QPushButton(gridLayoutWidget);
        pushButton_3_2->setObjectName(QString::fromUtf8("pushButton_3_2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_3_2->sizePolicy().hasHeightForWidth());
        pushButton_3_2->setSizePolicy(sizePolicy);
        pushButton_3_2->setMinimumSize(QSize(100, 100));
        pushButton_3_2->setMaximumSize(QSize(100, 100));
        QFont font1;
        font1.setFamily(QString::fromUtf8("OCR A Extended"));
        font1.setPointSize(45);
        font1.setBold(true);
        pushButton_3_2->setFont(font1);
        pushButton_3_2->setStyleSheet(QString::fromUtf8("background-color:#389393;\n"
"border-radius:6px;\n"
"color:white;\n"
"margin:2px;"));

        gridLayout->addWidget(pushButton_3_2, 2, 1, 1, 1);

        pushButton_1_3 = new QPushButton(gridLayoutWidget);
        pushButton_1_3->setObjectName(QString::fromUtf8("pushButton_1_3"));
        sizePolicy.setHeightForWidth(pushButton_1_3->sizePolicy().hasHeightForWidth());
        pushButton_1_3->setSizePolicy(sizePolicy);
        pushButton_1_3->setMinimumSize(QSize(100, 100));
        pushButton_1_3->setMaximumSize(QSize(100, 100));
        pushButton_1_3->setFont(font1);
        pushButton_1_3->setStyleSheet(QString::fromUtf8("background-color:#389393;\n"
"border-radius:6px;\n"
"color:white;\n"
"margin:2px;"));

        gridLayout->addWidget(pushButton_1_3, 0, 2, 1, 1);

        pushButton_2_1 = new QPushButton(gridLayoutWidget);
        pushButton_2_1->setObjectName(QString::fromUtf8("pushButton_2_1"));
        sizePolicy.setHeightForWidth(pushButton_2_1->sizePolicy().hasHeightForWidth());
        pushButton_2_1->setSizePolicy(sizePolicy);
        pushButton_2_1->setMinimumSize(QSize(100, 100));
        pushButton_2_1->setMaximumSize(QSize(100, 100));
        pushButton_2_1->setFont(font1);
        pushButton_2_1->setStyleSheet(QString::fromUtf8("background-color:#389393;\n"
"border-radius:6px;\n"
"color:white;\n"
"margin:2px;"));

        gridLayout->addWidget(pushButton_2_1, 1, 0, 1, 1);

        pushButton_1_2 = new QPushButton(gridLayoutWidget);
        pushButton_1_2->setObjectName(QString::fromUtf8("pushButton_1_2"));
        sizePolicy.setHeightForWidth(pushButton_1_2->sizePolicy().hasHeightForWidth());
        pushButton_1_2->setSizePolicy(sizePolicy);
        pushButton_1_2->setMinimumSize(QSize(100, 100));
        pushButton_1_2->setMaximumSize(QSize(100, 100));
        pushButton_1_2->setFont(font1);
        pushButton_1_2->setStyleSheet(QString::fromUtf8("background-color:#389393;\n"
"border-radius:6px;\n"
"color:white;\n"
"margin:2px;"));

        gridLayout->addWidget(pushButton_1_2, 0, 1, 1, 1);

        pushButton_3_1 = new QPushButton(gridLayoutWidget);
        pushButton_3_1->setObjectName(QString::fromUtf8("pushButton_3_1"));
        sizePolicy.setHeightForWidth(pushButton_3_1->sizePolicy().hasHeightForWidth());
        pushButton_3_1->setSizePolicy(sizePolicy);
        pushButton_3_1->setMinimumSize(QSize(100, 100));
        pushButton_3_1->setMaximumSize(QSize(100, 100));
        pushButton_3_1->setFont(font1);
        pushButton_3_1->setStyleSheet(QString::fromUtf8("background-color:#389393;\n"
"border-radius:6px;\n"
"color:white;\n"
"margin:2px;"));

        gridLayout->addWidget(pushButton_3_1, 2, 0, 1, 1);

        exitBtn = new QPushButton(gridLayoutWidget);
        exitBtn->setObjectName(QString::fromUtf8("exitBtn"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(13);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(exitBtn->sizePolicy().hasHeightForWidth());
        exitBtn->setSizePolicy(sizePolicy1);
        QFont font2;
        font2.setFamily(QString::fromUtf8("OCR A Extended"));
        font2.setPointSize(16);
        font2.setBold(true);
        exitBtn->setFont(font2);
        exitBtn->setStyleSheet(QString::fromUtf8("background-color:#fa7f72;\n"
"border-radius:4px;\n"
"color:white;\n"
"margin-top:5px;\n"
"margin-bottom:2px;"));

        gridLayout->addWidget(exitBtn, 3, 0, 1, 3);

        pushButton_2_3 = new QPushButton(gridLayoutWidget);
        pushButton_2_3->setObjectName(QString::fromUtf8("pushButton_2_3"));
        sizePolicy.setHeightForWidth(pushButton_2_3->sizePolicy().hasHeightForWidth());
        pushButton_2_3->setSizePolicy(sizePolicy);
        pushButton_2_3->setMinimumSize(QSize(100, 100));
        pushButton_2_3->setMaximumSize(QSize(100, 100));
        pushButton_2_3->setFont(font1);
        pushButton_2_3->setStyleSheet(QString::fromUtf8("background-color:#389393;\n"
"border-radius:6px;\n"
"color:white;\n"
"margin:2px;"));

        gridLayout->addWidget(pushButton_2_3, 1, 2, 1, 1);

        pushButton_2_2 = new QPushButton(gridLayoutWidget);
        pushButton_2_2->setObjectName(QString::fromUtf8("pushButton_2_2"));
        sizePolicy.setHeightForWidth(pushButton_2_2->sizePolicy().hasHeightForWidth());
        pushButton_2_2->setSizePolicy(sizePolicy);
        pushButton_2_2->setMinimumSize(QSize(100, 100));
        pushButton_2_2->setMaximumSize(QSize(100, 100));
        pushButton_2_2->setFont(font1);
        pushButton_2_2->setStyleSheet(QString::fromUtf8("background-color:#389393;\n"
"border-radius:6px;\n"
"color:white;\n"
"margin:2px;"));

        gridLayout->addWidget(pushButton_2_2, 1, 1, 1, 1);

        pushButton_1_1 = new QPushButton(gridLayoutWidget);
        pushButton_1_1->setObjectName(QString::fromUtf8("pushButton_1_1"));
        sizePolicy.setHeightForWidth(pushButton_1_1->sizePolicy().hasHeightForWidth());
        pushButton_1_1->setSizePolicy(sizePolicy);
        pushButton_1_1->setMinimumSize(QSize(100, 100));
        pushButton_1_1->setMaximumSize(QSize(100, 100));
        pushButton_1_1->setFont(font1);
        pushButton_1_1->setStyleSheet(QString::fromUtf8("background-color:#389393;\n"
"border-radius:6px;\n"
"color:white;\n"
"margin:2px;"));

        gridLayout->addWidget(pushButton_1_1, 0, 0, 1, 1);

        pushButton_3_3 = new QPushButton(gridLayoutWidget);
        pushButton_3_3->setObjectName(QString::fromUtf8("pushButton_3_3"));
        sizePolicy.setHeightForWidth(pushButton_3_3->sizePolicy().hasHeightForWidth());
        pushButton_3_3->setSizePolicy(sizePolicy);
        pushButton_3_3->setMinimumSize(QSize(100, 100));
        pushButton_3_3->setMaximumSize(QSize(100, 100));
        pushButton_3_3->setFont(font1);
        pushButton_3_3->setStyleSheet(QString::fromUtf8("background-color:#389393;\n"
"border-radius:6px;\n"
"color:white;\n"
"margin:2px;"));

        gridLayout->addWidget(pushButton_3_3, 2, 2, 1, 1);

        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(40, 30, 341, 71));
        horizontalLayoutWidget->setFont(font);
        horizontalLayoutWidget->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("OCR A Extended"));
        font3.setPointSize(20);
        font3.setBold(true);
        label->setFont(font3);
        label->setStyleSheet(QString::fromUtf8("color:white;"));

        horizontalLayout->addWidget(label);

        scoreO = new QLabel(horizontalLayoutWidget);
        scoreO->setObjectName(QString::fromUtf8("scoreO"));
        QFont font4;
        font4.setFamily(QString::fromUtf8("OCR A Extended"));
        font4.setPointSize(20);
        scoreO->setFont(font4);
        scoreO->setStyleSheet(QString::fromUtf8("color:white;"));

        horizontalLayout->addWidget(scoreO);

        label_2 = new QLabel(horizontalLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font3);
        label_2->setStyleSheet(QString::fromUtf8("color:white;"));

        horizontalLayout->addWidget(label_2);

        scoreX = new QLabel(horizontalLayoutWidget);
        scoreX->setObjectName(QString::fromUtf8("scoreX"));
        scoreX->setFont(font4);
        scoreX->setStyleSheet(QString::fromUtf8("color:white;"));

        horizontalLayout->addWidget(scoreX);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 431, 20));
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
        pushButton_3_2->setText(QString());
        pushButton_1_3->setText(QString());
        pushButton_2_1->setText(QString());
        pushButton_1_2->setText(QString());
        pushButton_3_1->setText(QString());
        exitBtn->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        pushButton_2_3->setText(QString());
        pushButton_2_2->setText(QString());
        pushButton_1_1->setText(QString());
        pushButton_3_3->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "O Player:", nullptr));
        scoreO->setText(QString());
        label_2->setText(QCoreApplication::translate("MainWindow", "X Player:", nullptr));
        scoreX->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
