//Friday, January 17th, 2020

#include <algorithm>
#include <iostream>
#include <fstream>
#include <vector>
#include <cstring>
using namespace std;

int main() {
    int n,k;
vector<string> stringholder;
    ifstream fin ("word.in");
    fin >> n >> k;
    string a;
    for (int i=0; i<n; i++){
        fin >> a;
        stringholder.push_back(a);
    }
    int current=0;
    ofstream fout ("word.out");
    fout <<stringholder[0];
    current+=stringholder[0].length();
    for (int i=1; i<n; i++){
        if (stringholder[i].length()+current<=k) {
        fout << " "<<stringholder[i];
        current+=stringholder[i].length();
    } else
        {
            fout << "\n"<<stringholder[i];
            current=stringholder[i].length();
        }
        
        

    }
}


