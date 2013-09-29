#include "MainWindow.hpp"
#include <QApplication>

using namespace ump::app;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
