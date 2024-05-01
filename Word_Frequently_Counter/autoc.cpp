#include "autoc.h"
#include<iostream>
#include<regex>
#include<map>
#include<vector>
using namespace std;
map<string,int>mp;
AutoC::AutoC() {}
void AutoC :: autoComplete(string text,vector<string>&filteredList){
   /*
    for(auto a:mp){
        filter.push_back(a.first);
    }

    for(int i=0;i<filter.size();i++){

       //  if (regex_match(filter[i], pattern)){
       //      //  list of matching words appears

       //  }
    }*/
    vector <string>grab;
   grab.push_back("Sara");
    grab.push_back("Samar");
   grab.push_back("Sayed");
    grab.push_back("Ahmed");
   grab.push_back("Amr");
    grab.push_back("Ziad");
   grab.push_back("Safwa");
    grab.push_back("Mohamed");
   grab.push_back("ساره");
    grab.push_back("سمر");
   grab.push_back("عمرو");
    string pattern;
   for(string s : grab){
        for(char ch : text){
            pattern += ch;
            pattern.insert(pattern.end()-1,'.');
            regex filteration(pattern);
            if(regex_search(s , filteration))
                filteredList.push_back(s);
        }
   }

}
void AutoC :: autoCorrect(){}

void AutoC :: findCorrect(){}
string AutoC :: convertToAscii(string words){
    string s;
    transform(words.begin(), words.end(), words.begin(), ::tolower);

     return s;
}
