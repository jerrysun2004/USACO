//Friday, Jan 17th, 2020


#include <algorithm>
#include <fstream>
#include <iostream>
using namespace std;

int n;
int blueberries[1000];
int answer[1000];

bool duplicate(int j){
for (int m=0; m<j; m++)
    for (int n=m+1; n<j; n++)
        if (answer[m]==answer[n]){
        return true;
        }
return false;
}
void say(int counter){
    for (int j=1; j<n; j++){
                answer[0]=counter;
                answer[j]=blueberries[j]-answer[j-1];
}
}
bool between(int n){
for (int m=0; m<n; m++){
 if (!(1<=answer[m]) || !(answer[m]<=n)){
     return false;
 }
}
return true;
}




int main(){
    ifstream fin ("photo.in");
    fin >> n;
    for (int i=0; i<n-1; i++){
        fin >> blueberries[i+1];
    }


     say(1);
         if (duplicate(n) || !between(n))
            say(2);
                
             if (duplicate(n) || !between(n))
                say(3);
                     
                if (duplicate(n) || !between(n))
                 say(4);
                     
                     if (duplicate(n) || !between(n))
                        say(5);
                       

                        
ofstream fout ("photo.out");
for (int i=0; i<n-1; i++)
    fout << answer[i] << " ";
fout << answer[n-1];
return 0;
}

