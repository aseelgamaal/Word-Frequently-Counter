#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include<QTimer>
#include<qlabel>
#include"autoc.h"
#include<QObject>
#include "paragraph.h"
#include <QTableWidgetItem>
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
    QObject::connect(&timer, &QTimer::timeout, [&]() {
        QString text = ui->lineEdit->text(); // Get current text
        text.chop(1); // Remove the last character
        text.append(final[index]); // Append the next character
        label.setText(text); // Set the updated text
        index ++; // Update the character index
    });
    timer.start(100);
    QListView listview;
    connect(ui->lineEdit, &QLineEdit::textChanged, this, &MainWindow::onTextChanged);
}
void MainWindow::onTextChanged(QString text){
    Paragraph paragraph;
    QStringList temp = paragraph.SplitParagrah(ui->plainTextEdit->toPlainText());
    set<string> filteredList;
    set<string>data;
    AutoC x;
    for(QString word:temp){
        data.insert(word.toStdString());
    }
    x.autoComplete(text.toStdString(),filteredList,data);
    x.autoCorrect(data);
    QStringList list;
    for (string x : filteredList){
        list.append(QString::fromStdString(x));
    }
    model = new QStringListModel(this);
    model->setStringList(list);
    ui->listView->setModel(model);
}
MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::on_pushButton_4_clicked()
{
        Paragraph paragraph;
        QStringList wordsList = paragraph.SplitParagrah(ui->plainTextEdit->toPlainText());
        paragraph.CalculateFrequency(wordsList);
        vector<pair<string, int>> wordFrequency =  paragraph.SortByFrequency();
        vector<pair<string, int>> :: iterator wordsIterator;
        ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        ui->tableWidget->setRowCount(wordFrequency.size());
        int row = 0;
        for(wordsIterator = wordFrequency.begin();wordsIterator!=wordFrequency.end();wordsIterator++ )
        {
            ui->tableWidget->setItem(row, 0, new QTableWidgetItem(QString::fromStdString(wordsIterator->first)));
            ui->tableWidget->setItem(row, 1, new QTableWidgetItem(QString::number(wordsIterator->second)));
            row++;
        }

}

