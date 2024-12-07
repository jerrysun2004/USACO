//Friday February 21, 2020

#include <algorithm>
#include <iostream>
#include <fstream>
#include <vector>
#include <map>
#include <set>
#include <cmath>
#include <math.h>
#include <cstdlib>
int n;
int x[100];
int y[100];
int ans=0;

using namespace std;
 

int main() {
    ifstream fin ("triangles.in");
    fin  >> n;
    for (int i=0; i<n; i++){
        fin >>  x[i] >> y[i];
        

    }

    
    for (int i=0; i<n; i++)
        for (int j=0; j<n; j++)
            for (int k=0; k<n; k++){
                if (x[i]==x[j] & y[i]==y[k])
                {
                      ans=max(ans,  abs(y[i]-y[j])*abs(x[i]-x[k]));
                }
                if (x[i]==x[k] & y[i]==y[j])
                    ans=max(ans, abs(y[i]-y[k])*abs(x[i]-x[j]));
                  
    }

    

    ofstream fout ("triangles.out");
    fout << ans;
    return 0;


}   
