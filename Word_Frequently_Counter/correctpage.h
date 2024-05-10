#ifndef CORRECTPAGE_H
#define CORRECTPAGE_H
#include <QDialog>
#include<QString>
using namespace std;
namespace Ui {
class CorrectPage;
}

class CorrectPage : public QDialog
{
    Q_OBJECT

public:
    explicit CorrectPage(QWidget *parent = nullptr);
    void getWord(string word);
    QString setWord();
    void temporary(QStringList&,string);
    ~CorrectPage();

private slots:
    void on_pushButton_clicked();

private:
    Ui::CorrectPage *ui;
};

#endif // CORRECTPAGE_H
