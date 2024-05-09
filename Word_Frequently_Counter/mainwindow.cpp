#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include<QTimer>
#include"autoc.h"
#include<QObject>
#include "paragraph.h"
#include <QTableWidgetItem>
#include"files.h"
#include"correctpage.h"
QString MainWindow::output;
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    QListView listview;
    connect(ui->lineEdit, &QLineEdit::textChanged, this, &MainWindow::onTextChanged);
    listview.setSelectionMode(QAbstractItemView::MultiSelection);
}
void MainWindow::onTextChanged(QString text){
    QStringList temp = paragraph.SplitParagrah(ui->plainTextEdit->toPlainText());
    set<string> filteredList;
    set<string>data;
    AutoC x;
    for(QString word:temp){
        data.insert(word.toStdString());
    }
    x.autoComplete(text.toStdString(),filteredList,data);
    QStringList list;
    for (string x : filteredList){
        list.append(QString::fromStdString(x));
    }
    model = new QStringListModel(this);
    model->setStringList(list);
    ui->listView->setModel(model);

}
MainWindow::~MainWindow(){
    delete ui;
}
void MainWindow::on_pushButton_4_clicked(){
    paragraph.wordTotalFrequency.clear();
    paragraph.wordFrequency.clear();
    QString paragraphText =ui->plainTextEdit->toPlainText();
    QStringList wordsList = paragraph.SplitParagrah(paragraphText);
    paragraph.CalculateFrequency(wordsList);
    vector<pair<string, int>> wordFrequency =  paragraph.SortByFrequency(1);
    QString allParagraph =Files::readAllParagraphs()+paragraphText;
    QStringList allParagraphList= paragraph.SplitParagrah(allParagraph);
    paragraph.CalculateGlobalFrequency(allParagraphList);
    vector<pair<string, int>> wordTotalFrequency =  paragraph.SortByFrequency(2);

    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget->setRowCount(wordFrequency.size());

    ui->tableWidget_2->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget_2->setRowCount(wordFrequency.size());
    int row = 0;
    int row1 = 0;
    for(auto &wordsIterator : wordFrequency)
    {
        ui->tableWidget->setItem(row, 0, new QTableWidgetItem(QString::fromStdString(wordsIterator.first)));
        ui->tableWidget->setItem(row, 1, new QTableWidgetItem(QString::number(wordsIterator.second)));
        row++;
    }
    for(auto &wordsIterator : wordTotalFrequency)
    {
        ui->tableWidget_2->setItem(row1, 0, new QTableWidgetItem(QString::fromStdString(wordsIterator.first)));
        ui->tableWidget_2->setItem(row1, 1, new QTableWidgetItem(QString::number(wordsIterator.second)));
        row1++;
    }
    vector<int>counter;
    vector<float>rsTime;
    paragraph.splitText(paragraphText,counter,rsTime);
    ui->label_7->setText(QString::number(counter[0]));
    ui->label_9->setText(QString::number(counter[1]));
    ui->label_11->setText(QString::number(counter[2]));
    ui->label_13->setText(QString::number(counter[3]));
}
void MainWindow::on_addButton_clicked()
{
    QString fileName = ui->lineEdit_2->text();
    QString newText = ui->plainTextEdit->toPlainText();
    Files::appendTextToFile(newText, fileName);
}

void MainWindow::on_browseButton_clicked(){
    filePath = QFileDialog::getOpenFileName(nullptr, QObject::tr("Open File"), QString(), QObject::tr("Text Files (*.txt)"));
    QString fileContent = Files::loadFile(filePath);
    ui->plainTextEdit->setPlainText(fileContent);
}

void MainWindow::on_updateButton_clicked()
{
    Files files;
    if (filePath.isEmpty()) {
        on_browseButton_clicked();
        if (filePath.isEmpty()) {
            return;
        }
    }
    QString updatedText = ui->plainTextEdit->toPlainText();
    files.updateFile(filePath,updatedText);
}

void MainWindow::on_pushButton_3_clicked()
{
    string word = ui->lineEdit->text().toStdString();
    int frequency = paragraph.SearchForWordFrequncy(word);
    ui->label_4->setText(QString::number(frequency));
    int order = paragraph.SearchForWordOrder(word);
    ui->label_5->setText(QString::number(order));

    if(frequency == 0 && order == 0)
    {
        QStringList temp = paragraph.SplitParagrah(ui->plainTextEdit->toPlainText());

        CorrectPage *secondWindow = new CorrectPage();
      //  secondWindow->getWord(corrected);
        secondWindow->temporary(temp,word);
        secondWindow->show();
        ui->lineEdit->setText(secondWindow->setWord());
    }
}
void MainWindow::on_listView_clicked(const QModelIndex &index)
{
    QString selectedWord = index.data().toString();
    ui->lineEdit->setText(selectedWord);
}

void MainWindow::on_translateButton_clicked()
{

}

