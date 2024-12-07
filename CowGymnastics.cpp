//December 14th, 2019
#include <iostream>
#include <fstream>
#include <cmath>
#include <algorithm>
using namespace std;

   int k, n;
   int gym[10][20];
   int counter[20][20];
   int ans;

  int main()
  { ifstream fin ("gymnastics.in");
    ofstream fout ("gymnastics.out");
   
    fin >> k >> n;
    for (int i=0; i<k; i++)
        for (int j=0; j<n; j++)
            fin >> gym[i][j];
 for (int omega=0; omega<k; omega++)
        for (int alpha=0; alpha<n; alpha++)
                gym[omega][alpha]--;
        for (int z=0; z<n; z++)
            for (int y=0; y<n; y++)
                counter[z][y]=0;

       for (int b=0; b<k; b++)
        for (int a=0; a<n; a++)
             for(int l= 0; l<n; l++)
                if (l > a)
                    counter[gym[b][a]][gym[b][l]]++;
                
int ans=0;
    for (int c=0; c<20; c++)
        for(int l=0; l<20; l++)
         if(counter[c][l]==k)
            ans++;

    fout << ans << '\n';
  }
