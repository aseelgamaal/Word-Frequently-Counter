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
    void autoComplete(string,set<string>&finish,set<string>&);
    void autoCorrect(string word,set<string>&dataset , set<string>&corrected);
    AutoC();
};

#endif // AUTOC_H
