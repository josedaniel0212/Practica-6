/********************************************************************************
** Form generated from reading UI file 'simulator.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIMULATOR_H
#define UI_SIMULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Simulator
{
public:
    QWidget *centralwidget;
    QGraphicsView *graphicsView;
    QPushButton *finalizar_btn;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Simulator)
    {
        if (Simulator->objectName().isEmpty())
            Simulator->setObjectName(QString::fromUtf8("Simulator"));
        Simulator->resize(1492, 843);
        centralwidget = new QWidget(Simulator);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(280, 10, 1191, 791));
        finalizar_btn = new QPushButton(centralwidget);
        finalizar_btn->setObjectName(QString::fromUtf8("finalizar_btn"));
        finalizar_btn->setGeometry(QRect(40, 230, 191, 91));
        Simulator->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Simulator);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1492, 22));
        Simulator->setMenuBar(menubar);
        statusbar = new QStatusBar(Simulator);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Simulator->setStatusBar(statusbar);

        retranslateUi(Simulator);

        QMetaObject::connectSlotsByName(Simulator);
    } // setupUi

    void retranslateUi(QMainWindow *Simulator)
    {
        Simulator->setWindowTitle(QCoreApplication::translate("Simulator", "Simulator", nullptr));
        finalizar_btn->setText(QCoreApplication::translate("Simulator", "FINALIZAR ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Simulator: public Ui_Simulator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIMULATOR_H
