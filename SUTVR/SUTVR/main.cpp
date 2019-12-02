#include <QtGui/QApplication>
#include "sutvr.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SUTVR w;
    w.setFixedSize(570, 570);
    w.show();
    
    return a.exec();
}
