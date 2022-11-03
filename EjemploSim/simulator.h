#ifndef SIMULATOR_H
#define SIMULATOR_H

#include <QGraphicsLineItem>
#include <QGraphicsScene>
#include <QMainWindow>
#include <QTimer>
#include <QKeyEvent>
#include "cuerpo.h"


QT_BEGIN_NAMESPACE
namespace Ui { class Simulator; }
QT_END_NAMESPACE

class Simulator : public QMainWindow
{
    Q_OBJECT

public:
    Simulator(QWidget *parent = nullptr);
    ~Simulator();

public slots:
    void Actualizar();

private slots:

    void on_finalizar_btn_clicked();

private:
    Ui::Simulator *ui;

    // puntero de mi escena
    QGraphicsScene *scene;

    // temporizador para el pulso
    QTimer *timer;

    //limites
    QGraphicsLineItem *l1;
    QGraphicsLineItem *l2;
    QGraphicsLineItem *l3;
    QGraphicsLineItem *l4;

    //lista de objetos
    QList <cuerpo*> sistema;

    //booleano para controlar la simulación
    bool secuencia;
};
#endif // SIMULATOR_H
