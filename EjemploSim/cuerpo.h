#ifndef CUERPO_H
#define CUERPO_H

#define EX 30
#define EY 60

//#define G 6.67384 * pow(10,-11)
#define GRAV 1
#define DT 1

#include <QGraphicsItem>
#include <QPainter>
#include "math.h"

class cuerpo : public QGraphicsItem
{

private:


public:
    cuerpo();
    cuerpo(float _x, float _y, float _vx, float _vy, float _radio, float _masa);
    float x, y, vx, vy, ax, ay, radio, masa, x1, y1;

    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);

    // get
    float getX() const;
    float getY() const;
    float getVx() const;
    float getVy() const;
    float getAx() const;
    float getAy() const;
    float getRad() const;
    float getMasa() const;

    // set
    void setX(float value);
    void setY(float value);
    void setVx(float value);
    void setVy(float value);
    void setAx(float value);
    void setAy(float value);
    void setRad(float value);
    void setMasa(float value);

    // Funciones mvto
    void aceleracion(float _x1, float _y1, float _masa,float _x, float _y);
    void velocidades();
    void posiciones();
};

#endif // CUERPO_H
