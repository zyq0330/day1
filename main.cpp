#include<iostream>
#include<fstream>
#include<map>
#include<sstream>
#include<string>
using namespace std;
// This is m third change
int main() {
  ifstream file("input.txt");
    if (!file.is_open()) {
        cerr<<"error，notfind input.txt"<<endl;
        return 1;
    }
    string line;
    string word;
    map<string,int>wordCount;
     while (getline(file,line)) {
        stringstream ss(line);
        while (ss>>word) {
            wordCount[word]++;
        }
    }
    file.close();
    cout<<"words rate:"<<"yes"<<endl;
    for (const auto &pair:wordCount) {
        cout<<pair.first<<":"<<pair.second<<endl;
    }
    return 0;
}