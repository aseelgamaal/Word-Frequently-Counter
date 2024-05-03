#include "paragraph.h"
#include <QDebug>
#include <algorithm>
#include<set>
Paragraph::Paragraph()
{
}
QStringList Paragraph::splitForAuto(const QString &text,set<string>&data){
    pargraph = text;
    QStringList List;
    List = pargraph.split(" ");
    return List;
}
void Paragraph::CalculateFrequency(QStringList wordsList)
{

    foreach(QString item, wordsList)
    {
        string word = item.toStdString();
        wordFrequency[word]++;
    }
}

QStringList Paragraph::SplitParagrah(const QString &text)
{
    pargraph = text;
    QStringList List;
    List = pargraph.split(" ");
    return List;
}

bool cmp(pair<string, int>& word1, pair<string, int>& word2)
{
    return word1.second > word2.second;
}

vector<pair<string, int>> Paragraph::SortByFrequency()
{
    vector<pair<string, int>> SortedVector;
    vector<pair<string, int>> ::iterator vectorIterator ;

    for (auto& it : wordFrequency)
    {
        SortedVector.push_back(it);
    }
    sort(SortedVector.begin(), SortedVector.end(), cmp);

    return SortedVector;
}
