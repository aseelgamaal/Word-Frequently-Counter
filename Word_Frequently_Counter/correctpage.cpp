#include "correctpage.h"
#include "ui_correctpage.h"
#include<QTimer>
#include"autoc.h"
#include<set>
CorrectPage::CorrectPage(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::CorrectPage)
{
    ui->setupUi(this);
}

CorrectPage::~CorrectPage()
{
    delete ui;
}
void CorrectPage::getWord(string word){
    ui->lineEdit->setText(QString::fromStdString(word));
}

void CorrectPage::get_Data(QStringList& text ,string word){
    set<string>data;
    for(QString word:text){
        data.insert(word.toStdString());
    }
    AutoC x;
    string corrected;
    x.autoCorrect(word,data,corrected);
    this->getWord(corrected);
}


QString CorrectPage::setWord(){

    if((ui->lineEdit->text()) == "Word not found !"){
        return " " ;
    }
    else{
        return ui->lineEdit->text();
    }
}


void CorrectPage::on_pushButton_clicked()
{

    close();
}

