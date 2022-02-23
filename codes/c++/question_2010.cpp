#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main(){

    int m;
    int n;
    while(cin>>n>>m){
        int f = 0;
        for(int i=n;i<=m;i++){
            int x,y,z;
            x = i/100;
            y = (i%100)/10;
            z = i%10;
            if(i==(x*x*x+y*y*y+z*z*z)){
                if(f==0){
                    cout<<i;
                    f=1;
                }
                else{
                    cout<<" "<<i;
                }
                
            }
        }
        if(f==0){
            cout<<"no"<<endl;
        }
        else{
            cout<<endl;
        }
    }
    return 0;
}