#include "MainWindow.hpp"
#include "ui_MainWindow.h"

namespace ump { namespace app {

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , m_ui(new Ui::MainWindow)
{
    m_ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete m_ui;
}

} } // namespace ump::app
