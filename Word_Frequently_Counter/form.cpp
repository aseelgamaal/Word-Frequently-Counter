#include "form.h"
#include "ui_form.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"

Form::Form(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Form)
{
    ui->setupUi(this);
}

Form::~Form()
{
    delete ui;
}

void Form::setCorrectedWords(const QStringList &correctedWords)
{
    correction = new QStringListModel(this);
    correction->setStringList(correctedWords);
    ui->listView->setModel(correction);
    ui->listView->setSelectionMode(QAbstractItemView::MultiSelection);
}
void Form::on_backButton_clicked()
{
    MainWindow *mainWindow = new MainWindow;
    mainWindow->show();
   //

}
void Form::on_listView_clicked(const QModelIndex &index)
{
    QString selectedWord = index.data().toString();
    MainWindow::output = selectedWord;
    this->hide();
}

