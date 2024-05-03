#include "autoc.h"
#include<iostream>
#include<map>
#include<vector>
#include<set>
using namespace std;
map<string,int>mp;
AutoC::AutoC() {}
void AutoC :: autoComplete(string text,set<string>&filteredList,set<string>&dataSet){
    //set<string> dataSet;
    string pattern;
   for (int i = 0; i < text.length(); i++) {
       pattern += text[i];
       for (auto word:dataSet) {
           string match = word.substr(0, i+1);
           if (pattern == match) {
                filteredList.insert(word);
           }
           else if(pattern != match && !(filteredList.empty())){
               filteredList.erase(word);
           }
       }
   }
}
void AutoC :: autoCorrect(set<string>&dataSet){}

void AutoC :: findCorrect(){}
string AutoC :: convertToAscii(string words){
    string s;
    //transform(words.begin(), words.end(), words.begin(), ::tolower);

     return s;
}
