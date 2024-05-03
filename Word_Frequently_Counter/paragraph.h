#ifndef PARAGRAPH_H
#define PARAGRAPH_H

#include <QString>
#include <map>
#include<set>
using namespace std;

class Paragraph
{
private:
    QString pargraph;


public:
    Paragraph();
    map<string,int>wordFrequency;
    QStringList splitForAuto(const QString &text,set<string>&data);
    void CalculateFrequency(QStringList wordsList);
    QStringList SplitParagrah(const QString &text);
    vector<pair<string, int>> SortByFrequency();
    int SearchForWordFrequncy(string word);
    int SearchForWordOrder(string word);

};


#endif // PARAGRAPH_H
