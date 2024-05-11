#include "autoc.h"
#include<iostream>
#include<map>
#include <string>
#include<vector>
#include<set>
using namespace std;
map<string,int>mp;
AutoC::AutoC() {}
void AutoC :: autoComplete(string text,set<string>&filteredList,set<string>&dataSet){
    string pattern;

   for (int i = 0; i < text.length(); i++) {
        pattern += tolower(text[i]);
       for (auto word:dataSet) {
           string match = word.substr(0, i+1);
           string lowerWord = "";
           for (char ch: match)
           {
               lowerWord += tolower(ch);
           }
           if (pattern == lowerWord) {
                filteredList.insert(word);
           }
           else if(pattern != lowerWord && !(filteredList.empty())){
               filteredList.erase(word);
           }
       }
   }
}
void AutoC :: autoCorrect(string word,set<string>&dataset , string &corrected){

    bool found=false;
     if(!word.empty()){
        int maxCounter = 0 ;
      for (auto x : dataset){
          int counter = 0;
         int  minLength = min(word.size(), x.size());
          for (int i = 0; i < minLength; i++){
             if(tolower(word[i]) == tolower(x[i])){
                  counter++;
              }
          }
          if (counter >= minLength - 1 && counter >= word.size() - 1 && counter >= maxCounter) {
              found=true;
              corrected = x;
              maxCounter = counter;
          }
      }
      if(!found){
          corrected="Word not found !";
      }
    }

}
