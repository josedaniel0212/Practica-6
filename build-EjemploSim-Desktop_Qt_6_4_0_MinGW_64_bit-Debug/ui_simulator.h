/********************************************************************************
** Form generated from reading UI file 'simulator.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
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
    QPushButton *lanzamiento1_btn;
    QPushButton *finalizar_btn;
    QPushButton *lanzamiento2_btn;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Simulator)
    {
        if (Simulator->objectName().isEmpty())
            Simulator->setObjectName("Simulator");
        Simulator->resize(1492, 843);
        centralwidget = new QWidget(Simulator);
        centralwidget->setObjectName("centralwidget");
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName("graphicsView");
        graphicsView->setGeometry(QRect(280, 10, 1191, 791));
        lanzamiento1_btn = new QPushButton(centralwidget);
        lanzamiento1_btn->setObjectName("lanzamiento1_btn");
        lanzamiento1_btn->setGeometry(QRect(40, 90, 161, 71));
        finalizar_btn = new QPushButton(centralwidget);
        finalizar_btn->setObjectName("finalizar_btn");
        finalizar_btn->setGeometry(QRect(40, 350, 161, 61));
        lanzamiento2_btn = new QPushButton(centralwidget);
        lanzamiento2_btn->setObjectName("lanzamiento2_btn");
        lanzamiento2_btn->setGeometry(QRect(40, 200, 161, 71));
        Simulator->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Simulator);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1492, 20));
        Simulator->setMenuBar(menubar);
        statusbar = new QStatusBar(Simulator);
        statusbar->setObjectName("statusbar");
        Simulator->setStatusBar(statusbar);

        retranslateUi(Simulator);

        QMetaObject::connectSlotsByName(Simulator);
    } // setupUi

    void retranslateUi(QMainWindow *Simulator)
    {
        Simulator->setWindowTitle(QCoreApplication::translate("Simulator", "Simulator", nullptr));
        lanzamiento1_btn->setText(QCoreApplication::translate("Simulator", "INICIAR LANZAMIENTO 1", nullptr));
        finalizar_btn->setText(QCoreApplication::translate("Simulator", "FINALIZAR ", nullptr));
        lanzamiento2_btn->setText(QCoreApplication::translate("Simulator", "INICIAR LANZAMIENTO 2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Simulator: public Ui_Simulator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIMULATOR_H
