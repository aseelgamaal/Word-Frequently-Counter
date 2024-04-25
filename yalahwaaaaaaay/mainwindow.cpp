#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QTimer>
#include <QLabel>
#include <QStringList>
#include <QStringListModel>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // Initialize the list model
    QString fina = "";
    QTimer timer;
    int index=0;
    QLabel label("Type something here:");
    label.show();
    // Slot to update the QLabel text
    QObject::connect(&timer, &QTimer::timeout, [&]() {
        QString text = ui->lineEdit->text(); // Get current text
        text.chop(1); // Remove the last character
        text.append(fina[index]); // Append the next character
        label.setText(text); // Set the updated text
        index ++; // Update the character index
    });
    timer.start(100);
    model = new QStringListModel(this);
    QStringList list;
    list << "Apple" << "Banana" << "Cherry" << "Date" << "Grape" << "Kiwi";
    model->setStringList(list);
    ui->listView->setModel(model);
    // Connect the textChanged() signal of QLineEdit to onTextChanged() slot
    connect(ui->lineEdit, &QLineEdit::textChanged, this, &MainWindow::onTextChanged);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onTextChanged(const QString &text)
{
    // Filter the list based on the text entered
    QStringList filteredList;
    foreach (const QString &str, model->stringList()) {
        if (str.contains(text, Qt::CaseInsensitive)) {
            filteredList << str;
        }
    }
    model->setStringList(filteredList);
}
