#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    
    int n=0;
    while(cin>>n){
        int i = 0;
        int nega=0;
        int zero=0;
        int posi=0;
        while(i<n){
            double x;
            cin>>x;
            if(x>0) posi++;
            else if(x<0) nega++;
            else zero++;
            i++;
        }
        cout<<nega<<" "<<zero<<" "<<posi<<endl;
    }
    return 0;
}