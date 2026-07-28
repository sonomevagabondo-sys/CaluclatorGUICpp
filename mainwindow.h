#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow() override;

private slots:
    void on_button9_clicked();

    void on_button1_clicked();

    void on_button2_clicked();

    void on_button3_clicked();

    void on_button4_clicked();

    void on_button5_clicked();

    void on_button6_clicked();

    void on_button7_clicked();

    void on_button8_clicked();

    void on_buttonAdd_clicked();

    void on_buttonSubstract_clicked();

    void on_buttonMultyply_clicked();

    void on_buttonDivide_clicked();

    void on_button0_clicked();

    void on_buttonDot_clicked();

    void on_buttonChange_clicked();

    void on_buttonEquals_clicked();

    void on_buttonDelete_clicked();

    void on_buttonClear_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
