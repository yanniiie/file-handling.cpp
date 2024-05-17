#include <bits/stdc++.h>
using namespace std;
int main(){
     ofstream newFile("Compressed.txt");
     ifstream fin("text.txt");
     int words;
     string text,s;
     vector<char> ch;
     string str;
     while(getline(fin,str)){
          int n = str.length();
          for (int i = 0; i < n; i++) {
               int count = 1;
               while (i < n - 1 && str[i] == str[i + 1]) {
                    count++;
                    i++;
               }
               newFile<<str[i]<<count;
          }
          newFile<<endl;
     }
}
