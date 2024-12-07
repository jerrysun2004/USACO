//Friday February, 21st, 2020

#include <algorithm>
#include <iostream>
#include <fstream>
#include <vector>
#include <map>
#include <set>
#include <math.h>
#include <cmath>
int n,k,a1,b1,b2,a2;
int ans[100];
int temp;
int function[100];
using namespace std;


int main() {
    ifstream fin ("swap.in");
    ofstream fout("swap.out");
    fin >> n >>k;
    fin >> a1 >> a2;
    fin >> b1 >> b2;
    for (int i=0; i<n; i++)
        ans[i]=i+1;

    
    for (int q=0; q<k; q++){
      
       
        reverse(ans+a1-1,ans+a2);
        reverse(ans+b1-1,ans+b2);
    }  
       

    for  (int i=0; i<n; i++)
        fout << ans[i] << endl;
    return 0;



}
