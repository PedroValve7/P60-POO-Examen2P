#include "juego.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    //Pedro Vinicio Alajo, 1750338442
    QApplication a(argc, argv);
    Juego w;
    w.show();
    return a.exec();
}
