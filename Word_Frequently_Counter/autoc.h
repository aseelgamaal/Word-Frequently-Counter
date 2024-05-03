#ifndef AUTOC_H
#define AUTOC_H
#include<iostream>
#include<map>
#include<vector>
#include<set>
using namespace std;

class AutoC
{
public:
    void initializeDataSet();
    void autoComplete(string,set<string>&finish,set<string>&);
    void autoCorrect(set<string>&);
    void findCorrect();
    string convertToAscii(string);
    AutoC();
   // vector<string>filter;
};

#endif // AUTOC_H
