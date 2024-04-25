#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QStringListModel>
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
    void on_textEdit_currentCharFormatChanged(const QTextFormat &format);
    void onTextChanged(const QString &text);
    ~MainWindow();
private:
    Ui::MainWindow *ui;
    QStringListModel *model;

};
#endif // MAINWINDOW_H
