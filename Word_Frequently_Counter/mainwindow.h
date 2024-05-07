#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include"paragraph.h"
#include <QMainWindow>
#include<QStringListModel>
#include<map>
#include<set>
#include <qplaintextedit.h>
using namespace std;

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    void onTextChanged(QString text);
    void checkAndProcessText(QString);
    static QString output;
    ~MainWindow();
private slots:
    void on_pushButton_4_clicked();

    void on_browseButton_clicked();

    void on_addButton_clicked();

    void on_updateButton_clicked();

    void on_pushButton_3_clicked();

    void on_listView_clicked(const QModelIndex &index);
    void on_plainTextEdit_textChanged();

private:
    Paragraph paragraph;
    Ui::MainWindow *ui;
    QStringListModel *model;
    QStringListModel *modelplan;
};
#endif // MAINWINDOW_H
