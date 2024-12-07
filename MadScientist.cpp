//Friday, February 21st, 2020

   #include <algorithm>
    #include <iostream>
    #include <fstream>
    #include <vector>
    #include <map>
    #include <set>
    #include <math.h>
    #include <cmath>
    int n;
    char hg[2][1000];
    bool increasing=false;
    int ans=0;
   


    using namespace std;

    int main() {
        ifstream fin ("breedflip.in");
        ofstream fout ("breedflip.out");
        fin >> n;
        for (int i=0; i<n; i++){
            fin >> hg[0][i];
        }
        for (int i=0; i<n; i++){
            fin >> hg[1][i];
        }
        for (int j=0; j<n; j++ )
            if (hg[0][j]!=hg[1][j]){
                
                if(!increasing){
                ans++;
                }
                increasing=true;
            }  
            else{
                increasing=false;

             }

        
    fout << ans;
    return 0;
    }

