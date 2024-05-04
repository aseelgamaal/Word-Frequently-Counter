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
void AutoC :: autoCorrect(string word,set<string>&dataset , set<string>&corrected){
    int maxPrefixLength = 0;
    bool check=false;
    for (const auto& entry : dataset) {
        if (entry.size() > maxPrefixLength && entry.substr(0, word.size()) == word) {
            check=true;
            corrected.insert(entry);
            maxPrefixLength = entry.size();
        }
    }
    if(!check)
        corrected.insert("word does not exist");
   /* if (!suggestion.empty()) {
        return suggestion ;
    } /*else {
        return "word does not exist";
    }*/
}
