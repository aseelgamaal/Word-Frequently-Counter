
#include <QMainWindow>
#include <QStringListModel>

namespace Ui {
class Form;
}

class Form : public QMainWindow
{
    Q_OBJECT

public:
    explicit Form(QWidget *parent = nullptr);
    ~Form();

    void setCorrectedWords(const QStringList &correctedWords);
    void on_backButton_clicked();

    QString on_listView_clicked(const QModelIndex &index);

private:
    Ui::Form *ui;
    QStringListModel *correction;
};


