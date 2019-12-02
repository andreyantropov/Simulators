#include <QtGui/QApplication>
#include "saepc.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SAEPC w;
    w.show();
    
    return a.exec();
}
