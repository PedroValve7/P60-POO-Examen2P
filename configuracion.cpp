#include "configuracion.h"
#include "ui_configuracion.h"
#include "circulo.h"
#include <QDialog>
#include <QColorDialog>
#include <QMainWindow>

Configuracion::Configuracion(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Configuracion)
{
    ui->setupUi(this);
    m_color.setRgb(165,29,45);
    setWidgetColor();
    mImagen = new QImage(this->size(),QImage::Format_ARGB32_Premultiplied);
    //Rellenado imagen color verde
    mImagen->fill(Qt::green);
    //Painter a partir de la imagen
    mPainter = new QPainter (mImagen);
    mPainter->setRenderHint(QPainter::Antialiasing);
}

Configuracion::~Configuracion()
{
    delete ui;
}

void Configuracion::on_btnColor_released()
{
delete ui;
    delete mPainter;
    delete mImagen;
}

void Configuracion::setColor(const QColor &newColor)
{
    m_color = newColor;
}

void Configuracion::setDimension(int newDimension)
{
    m_dimension = newDimension;
}

void Configuracion::setWidgetColor()
{
    int r = m_color.red();
    int g = m_color.green();
    int b = m_color.blue();
    QString style = "background-color: rgb(" + QString::number(r) + ", " + QString::number(g) + ", " + QString::number(b) + ")";
    ui->wigetColor->setStyleSheet(style);
}

const QColor &Configuracion::color() const
{
    return m_color;
}

int Configuracion::dimension() const
{
    return m_dimension;
}

