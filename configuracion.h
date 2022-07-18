#ifndef CONFIGURACION_H
#define CONFIGURACION_H

#include <QDialog>
#include <QPaintEvent>
#include <QColorDialog>


namespace Ui {
class Configuracion;
}

class Configuracion : public QDialog
{
    Q_OBJECT

public:
    explicit Configuracion(QWidget *parent = nullptr);
    ~Configuracion();

    const QColor &color() const;
    int dimension() const;

    void setColor(const QColor &newColor);
    void setDimension(int newDimension);

private slots:
    void on_btnColor_released();

private:
    Ui::Configuracion *ui;
    QColor m_color;
    int m_dimension;

    void setWidgetColor();
    QImage *mImagen;
    QPainter *mPainter;
};

#endif // CONFIGURACION_H
