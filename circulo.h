#ifndef CIRCULO_H
#define CIRCULO_H

#include <QPoint>
#include <QPixmap>
#include <QImage>
#include <QPainter>

class Circulo : public QPoint
{
public:
    Circulo();
    Circulo(int xpos, int ypos);
};

#endif // CIRCULO_H
