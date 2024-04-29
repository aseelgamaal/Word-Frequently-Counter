#include "autoc.h"
#include<iostream>
#include<regex>
#include<map>
#include<vector>
using namespace std;

AutoC::AutoC() {}
void AutoC :: autoComplete(){
    map<string,int>mp;
    for(auto a:mp){
        filter.push_back(a.first);
    }

    regex pattern;
    for(int i=0;i<filter.size();i++){

       //  if (regex_match(filter[i], pattern)){
       //      //  list of matching words appears

       //  }
    }

}
void AutoC :: autoCorrect(){}

void AutoC :: findCorrect(){}
string AutoC :: convertToAscii(string words){
    string s;
    transform(words.begin(), words.end(), words.begin(), ::tolower);

     return s;
}
