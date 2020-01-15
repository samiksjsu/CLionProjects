//
// Created by Samik Biswas on 16-10-2019.
//
#include <iostream>
#include "mostCommonWord.h"
#include <unordered_map>
#include <unordered_set>
string mostCommonWord(string paragraph, vector<string>& banned) {
    string buffer = "";
    unordered_map<string, int> m;

    //Get all the list of banned words in a set
    unordered_set<string> s;
    for(auto i: banned){
        s.insert(i);
    }

    unordered_set <string> words;

    for(auto i: paragraph){
        if (i != ' ' && !ispunct(i)){
            buffer.push_back(tolower(i));
        } else {
            if ((s.find(buffer) == s.end()) && (m.find(buffer) == m.end()) && buffer != "") {
                m[buffer] = 1;
                words.insert(buffer);
            } else if ((s.find(buffer) == s.end()) && (m.find(buffer) != m.end()) && buffer != "") {
                m.find(buffer)->second += 1;
                words.insert(buffer);
            }

            buffer = "";
        }
    }
    if (buffer != ""){
        if ((s.find(buffer) == s.end()) && (m.find(buffer) == m.end()) && buffer != "") {
            m[buffer] = 1;
            words.insert(buffer);
        } else if ((s.find(buffer) == s.end()) && (m.find(buffer) != m.end()) && buffer != "") {
            m.find(buffer)->second += 1;
            words.insert(buffer);
        }
    }

    string word = "";
    int count = 0;

    for (auto itr = words.begin(); itr != words.end() ; ++itr) {
        if (m.find(*itr)->second > count) {
            word = m.find(*itr)->first;
            count = m.find(*itr)->second;
        }
    }

    return word;



}