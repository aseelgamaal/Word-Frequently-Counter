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
    map<string,int>wordTotalFrequency;
    QStringList splitForAuto(const QString &text,set<string>&data);
    void CalculateFrequency(QStringList wordsList);
    QStringList SplitParagrah(const QString &text);
    vector<pair<string, int>> SortByFrequency(int choice);
    int SearchForWordFrequncy(string word);
    int SearchForWordOrder(string word);
    void CalculateGlobalFrequency(QStringList wordsList);

};


#endif // PARAGRAPH_H
