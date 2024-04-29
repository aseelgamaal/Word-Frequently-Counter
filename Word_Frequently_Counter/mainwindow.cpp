#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include<QTimer>
#include<qlabel>
#include"autoc.h"
#include<QObject>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QTimer timer;
    QString final;
    int index=0;
    QLabel label("Type something here:");
    label.show();
    // Slot to update the QLabel text
    QObject::connect(&timer, &QTimer::timeout, [&]() {
        QString text = ui->lineEdit->text(); // Get current text
        text.chop(1); // Remove the last character
        text.append(final[index]); // Append the next character
        label.setText(text); // Set the updated text
        index ++; // Update the character index
    });
    timer.start(100);
    QListView listview;
    connect(ui->lineEdit, &QLineEdit::textChanged, this, &AutoC::autoComplete);
}

MainWindow::~MainWindow()
{
    delete ui;
}
