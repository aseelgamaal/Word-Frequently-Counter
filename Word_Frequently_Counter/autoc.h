#ifndef AUTOC_H
#define AUTOC_H
#include<iostream>
#include<map>
#include<vector>
using namespace std;

class AutoC
{
public:
    void autoComplete(string,vector<string>&finish);
    void autoCorrect();
    void findCorrect();
    string convertToAscii(string);
    AutoC();
    vector<string>filter;
};

#endif // AUTOC_H
