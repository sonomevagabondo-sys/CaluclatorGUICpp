#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

//variabili
float firstNum{};
float secondNumber{};
float result{};
std::string currentOperator{};
bool isEqualRepeated{false};
bool clearScreen{false};


//eventi onClick dei bottoni
void MainWindow::on_button9_clicked()
{
    if (clearScreen) {
        ui->screen->setStyleSheet("font-size: 32px; color: #ffffff;");
        ui->screen->setText("");
        clearScreen = false;
    }

    if (ui->screen->text() == "0") {
        ui->screen->setText("");
    }

    ui->screen->setText(ui->screen->text() + "9");
}


void MainWindow::on_button1_clicked()
{
    if (clearScreen) {
        ui->screen->setStyleSheet("font-size: 32px; color: #ffffff;");
        ui->screen->setText("");
        clearScreen = false;
    }

    if (ui->screen->text() == "0") {
        ui->screen->setText("");
    }

    ui->screen->setText(ui->screen->text() + "1");
}


void MainWindow::on_button2_clicked()
{
    if (clearScreen) {
        ui->screen->setStyleSheet("font-size: 32px; color: #ffffff;");
        ui->screen->setText("");
        clearScreen = false;
    }

    if (ui->screen->text() == "0") {
        ui->screen->setText("");
    }

    ui->screen->setText(ui->screen->text() + "2");
}


void MainWindow::on_button3_clicked()
{
    if (clearScreen) {
        ui->screen->setStyleSheet("font-size: 32px; color: #ffffff;");
        ui->screen->setText("");
        clearScreen = false;
    }

    if (ui->screen->text() == "0") {
        ui->screen->setText("");
    }

    ui->screen->setText(ui->screen->text() + "3");
}


void MainWindow::on_button4_clicked()
{
    if (clearScreen) {
        ui->screen->setStyleSheet("font-size: 32px; color: #ffffff;");
        ui->screen->setText("");
        clearScreen = false;
    }

    if (ui->screen->text() == "0") {
        ui->screen->setText("");
    }

    ui->screen->setText(ui->screen->text() + "4");
}


void MainWindow::on_button5_clicked()
{
    if (clearScreen) {
        ui->screen->setStyleSheet("font-size: 32px; color: #ffffff;");
        ui->screen->setText("");
        clearScreen = false;
    }

    if (ui->screen->text() == "0") {
        ui->screen->setText("");
    }

    ui->screen->setText(ui->screen->text() + "5");
}


void MainWindow::on_button6_clicked()
{
    if (clearScreen) {
        ui->screen->setStyleSheet("font-size: 32px; color: #ffffff;");
        ui->screen->setText("");
        clearScreen = false;
    }

    if (ui->screen->text() == "0") {
        ui->screen->setText("");
    }

    ui->screen->setText(ui->screen->text() + "6");
}


void MainWindow::on_button7_clicked()
{
    if (clearScreen) {
        ui->screen->setStyleSheet("font-size: 32px; color: #ffffff;");
        ui->screen->setText("");
        clearScreen = false;
    }

    if (ui->screen->text() == "0") {
        ui->screen->setText("");
    }

    ui->screen->setText(ui->screen->text() + "7");
}


void MainWindow::on_button8_clicked()
{
    if (clearScreen) {
        ui->screen->setStyleSheet("font-size: 32px; color: #ffffff;");
        ui->screen->setText("");
        clearScreen = false;
    }

    if (ui->screen->text() == "0") {
        ui->screen->setText("");
    }

    ui->screen->setText(ui->screen->text() + "8");
}


void MainWindow::on_buttonAdd_clicked()
{
    firstNum = ui->screen->text().toFloat();
    currentOperator = "+";
    clearScreen = true;
    isEqualRepeated = false;
}


void MainWindow::on_buttonSubstract_clicked()
{
    firstNum = ui->screen->text().toFloat();
    currentOperator = "-";
    clearScreen = true;
    isEqualRepeated = false;
}


void MainWindow::on_buttonMultyply_clicked()
{
    firstNum = ui->screen->text().toFloat();
    currentOperator = "*";
    clearScreen = true;
    isEqualRepeated = false;
}


void MainWindow::on_buttonDivide_clicked()
{
    firstNum = ui->screen->text().toFloat();
    currentOperator = "/";
    clearScreen = true;
    isEqualRepeated = false;
}


void MainWindow::on_button0_clicked()
{
    if (clearScreen) {
        ui->screen->setStyleSheet("font-size: 32px; color: #ffffff;");
        ui->screen->setText("");
        clearScreen = false;
    }

    if (ui->screen->text() == "0") {
        ui->screen->setText("");
    }

    ui->screen->setText(ui->screen->text() + "0");
}



void MainWindow::on_buttonDot_clicked()
{
    if (ui->screen->text().contains(".")) {
        return;
    }

    ui->screen->setText(ui->screen->text() + ".");
}


void MainWindow::on_buttonChange_clicked()
{
    QString tempNum{};
    tempNum = ui->screen->text();

    if (tempNum.contains("-")) {
        tempNum.remove("-");
        ui->screen->setText(tempNum);
    } else {
        ui->screen->setText("-" + ui->screen->text());
    }
}


void MainWindow::on_buttonEquals_clicked()
{
    if (!isEqualRepeated) {
        secondNumber = ui->screen->text().toFloat();
        isEqualRepeated = true;
    }


    switch (currentOperator[0]) {
    case '+':
        result = firstNum + secondNumber;
        ui->screen->setText(QString::number(result));
        break;
    case '-':
        result = firstNum - secondNumber;
        ui->screen->setText(QString::number(result));
        break;
    case '*':
        result = firstNum * secondNumber;
        ui->screen->setText(QString::number(result));
        break;
    case '/':
        result = firstNum / secondNumber;
        ui->screen->setText(QString::number(result));
        break;
    default:
        ui->screen->setStyleSheet("font-size: 18px; color: #ff4d4d;");
        ui->screen->setText("Errore: operazione non valida");
        break;
    }
    firstNum = result;

    clearScreen = true;
}


void MainWindow::on_buttonDelete_clicked()
{
    if (ui->screen->text() == "0" || ui->screen->text().isEmpty()) {
        return;
    }

    int index = (ui->screen->text().length()-1);

    QString updatedText = ui->screen->text().remove(index, 1);

    // Se dopo la cancellazione è vuoto o rimane solo "-", assegna "0"
    if (updatedText.isEmpty() || updatedText == "-") {
        updatedText = "0";
    }

    ui->screen->setText(updatedText);

}
void MainWindow::on_buttonClear_clicked()
{
    ui->screen->setStyleSheet("font-size: 32px; color: #ffffff;");

    ui->screen->setText("0");

    firstNum = 0;
    secondNumber = 0;
    result = 0;
    currentOperator = "";
    isEqualRepeated = false;
    clearScreen = false;
}

