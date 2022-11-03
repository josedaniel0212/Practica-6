#include "simulator.h"
#include "ui_simulator.h"
#include <iostream>
#include <QDebug>
#include <string.h>
#include <iostream>
#include <fstream>
using namespace::std;



Simulator::Simulator(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Simulator)
{
    ui->setupUi(this);

    // se agrega la escena
    scene = new QGraphicsScene(-500, -250, 1000, 500);
    ui->graphicsView->setScene(scene);
    ui->graphicsView->setRenderHint(QPainter::Antialiasing);

    // limites de la escena
    l1 = new QGraphicsLineItem(-500,-250,500,-250);
    l2 = new QGraphicsLineItem(-500,250,500,250);
    l3 = new QGraphicsLineItem(-500,-250,-500,250);
    l4 = new QGraphicsLineItem(500,-250,500,250);

    //Se agregan los cuerpos
    sistema.append(new cuerpo(0,0,0,0,20,5000));
    scene->addItem(sistema.last());
    sistema.append(new cuerpo(10000,-10000,35,35,10,100));
    scene->addItem(sistema.last());
    sistema.append(new cuerpo(-10000,10000,35,35,5,300));
    scene->addItem(sistema.last());

    //Se agregan las lineas de demarcación
    scene->addItem(l1);
    scene->addItem(l2);
    scene->addItem(l3);
    scene->addItem(l4);

    timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()), this, SLOT(Actualizar()));
    timer->start(30);
}

Simulator::~Simulator()
{
    delete ui;
}

void Simulator::Actualizar()
//Actualiza las velocidades y posiciones del cuerpo
{
    float _x1,_y1,_masa,_x,_y;
    float x0=0,x1=0,x2=0,y0=0,y1=0,y2=0;
    string sx0,sx1,sx2,sy0,sy1,sy2,sc0,sc1,sc2;
    ofstream fout;
    fout.open("datos123.txt", std::ios_base::app);

    _x1=sistema[1]->x;
    _y1=sistema[1]->y;
    _masa=sistema[1]->masa;
    _x=sistema[0]->x;
    _y=sistema[0]->y;
    x0=_x;
    y0=_y;
    sx0=to_string(x0)+' ';
    sy0=to_string(y0);
    sc0=sx0+sy0+"     ";

    sistema[0]->aceleracion(_x1,_y1,_masa,_x,_y);
    sistema[0]->velocidades();
    sistema[0]->posiciones();

    _x1=sistema[0]->x;
    _y1=sistema[0]->y;
    _masa=sistema[0]->masa;
    _x=sistema[1]->x;
    _y=sistema[1]->y;
    x1=_x;
    y1=_y;
    sx1=to_string(x1)+' ';
    sy1=to_string(y1);
    sc1=sx1+sy1+"     ";

    sistema[1]->aceleracion(_x1,_y1,_masa,_x,_y);
    sistema[1]->velocidades();
    sistema[1]->posiciones();

    _x1=sistema[0]->x;
    _y1=sistema[0]->y;
    _masa=sistema[0]->masa;
    _x=sistema[2]->x;
    _y=sistema[2]->y;
    x2=_x;
    y2=_y;
    sx2=to_string(x2)+' ';
    sy2=to_string(y2);
    sc2=sx2+sy2+"     ";

    sistema[2]->aceleracion(_x1,_y1,_masa,_x,_y);
    sistema[2]->velocidades();
    sistema[2]->posiciones();

    fout<<sc0+sc1+sc2+'\n';
}

void Simulator::on_finalizar_btn_clicked()
//para finalizar la simulacion
{
    int i=0;

    timer->stop();

    for (i=0 ; i < sistema.length() ; i++)
        scene->removeItem(sistema[i]);

    sistema.clear();
    secuencia = false;
}




