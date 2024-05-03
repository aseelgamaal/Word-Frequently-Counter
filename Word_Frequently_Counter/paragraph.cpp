#include "paragraph.h"
#include <QDebug>
#include <algorithm>
#include<set>
#include <string>
#include <QRegularExpression>
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
        string lowerWord = "";
        foreach (char ch, word)
        {
            lowerWord += tolower(ch);
        }
        wordFrequency[lowerWord]++;
    }
}

QStringList Paragraph::SplitParagrah(const QString &text)
{
    pargraph = text;
    QStringList List;
    static const QRegularExpression separator("[,;\\.\\s:0-9]+");
    List = pargraph.split(separator,Qt::SkipEmptyParts);
    return List;
}

bool cmp(pair<string, int>& word1, pair<string, int>& word2)
{
    return word1.second > word2.second;
}

vector<pair<string, int>> Paragraph::SortByFrequency()
{
    vector<pair<string, int>> SortedVector;

    for (auto& it : wordFrequency)
    {
        SortedVector.push_back(it);
    }
    sort(SortedVector.begin(), SortedVector.end(), cmp);

    return SortedVector;
}
int Paragraph::SearchForWordFrequncy(string word)
{
    string lowerWord = "";
    foreach (char ch, word)
    {
        lowerWord += tolower(ch);
    }
    if(wordFrequency.find(lowerWord)!=wordFrequency.end())
        return wordFrequency[lowerWord];
    else
        return 0;
}

int Paragraph::SearchForWordOrder(string word)
{
    vector<pair<string, int>>SortedVector = SortByFrequency();
    string lowerWord = "";
    foreach (char ch, word)
    {
        lowerWord += tolower(ch);
    }

    for (int order=0;order<SortedVector.size();order++)
    {
        if(SortedVector[order].first==lowerWord)
        {
            return order+1;
        }
    }
    return 0;
}
