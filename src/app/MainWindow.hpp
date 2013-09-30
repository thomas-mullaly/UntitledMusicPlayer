#ifndef UMP_APP_MAIN_WINDOW_HPP
#define UMP_APP_MAIN_WINDOW_HPP

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

namespace ump { namespace app {

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *m_ui;
};

} } // namespace ump::app

#endif // UMP_APP_MAIN_WINDOW_HPP
