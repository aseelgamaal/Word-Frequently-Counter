#ifndef PARAGRAPH_H
#define PARAGRAPH_H


#include "mainwindow.h"
#include <QString>
#include <map>
using namespace std;

class Paragraph :public QObject
{
    Q_OBJECT
private:
    QString pargraph;
    map<string,int>wordFrequency;

public:
    Paragraph();
    void CalculateFrequency(QStringList wordsList);
    QStringList SplitParagrah(const QString &text);
    vector<pair<string, int>> SortByFrequency();

};

#endif // PARAGRAPH_H
