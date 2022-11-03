#include "cuerpo.h"
#include <string.h>
#include <iostream>
#include <fstream>
using namespace::std;
cuerpo::cuerpo(float _x, float _y, float _vx, float _vy, float _rad, float _masa)
{
    x = _x;
    y = _y;
    vx = _vx;
    vy = _vy;
    ax = 0;
    ay = 0;
    radio = _rad;
    masa = _masa;

    // sin ajustar los cuadrantes
    // setPos((x/EX), (y/EY));

    // ajustando los cuadrates
    setPos((x/EX), (-y/EY));
}

QRectF cuerpo::boundingRect() const
{
    return QRect(-radio, -radio, radio*2, radio*2);
}

void cuerpo::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->setBrush(Qt::darkGreen);
    painter->drawEllipse(boundingRect());
}


float cuerpo::getX() const
{
    return x;
}
float cuerpo::getY() const
{
    return y;
}
float cuerpo::getVx() const
{
    return vx;
}
float cuerpo::getVy() const
{
    return vy;
}
float cuerpo::getAx() const
{
    return ax;
}
float cuerpo::getAy() const
{
    return ay;
}
float cuerpo::getRad() const
{
    return radio;
}
float cuerpo::getMasa() const
{
    return masa;
}

void cuerpo::setX(float value)
{
    x = value;
}
void cuerpo::setY(float value)
{
    y = value;
}
void cuerpo::setVx(float value)
{
    vx = value;
}
void cuerpo::setVy(float value)
{
    vy = value;
}
void cuerpo::setAx(float value)
{
    ax = value;
}
void cuerpo::setAy(float value)
{
    ay = value;
}
void cuerpo::setRad(float value)
{
    radio = value;
}
void cuerpo::setMasa(float value)
{
    masa = value;
}


void cuerpo::aceleracion(float _x1, float _y1, float _masa,float _x, float _y)
{
    float theta=0;
    theta = atan2((_y1 - _y),(_x1 - _x));
    ax = (_masa*cos(theta)*GRAV)/(sqrt(pow(_x1 - _x,2)+pow(_y1 - _y,2)));
    ay = (_masa*sin(theta)*GRAV)/(sqrt(pow(_x1 - _x,2)+pow(_y1 - _y,2)));
}

void cuerpo::velocidades()
// calcula las aceleraciones
{
    vx = vx + (ax*DT);
    vy = vy + (ay*DT);
}

void cuerpo::posiciones()
// calcula y Actualiza las posiciones
{
    x = x + (vx * DT) + (0.5 * ax * pow(DT,2));
    y = y + (vy * DT) + (0.5 * ay * pow(DT,2));
    // ajustando los cuadrantes
    setPos((x/EX), (-y/EY));
}

