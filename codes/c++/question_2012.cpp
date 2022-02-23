#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main(){
    int x,y;
    while(cin>>x>>y){
        if(x==0&&y==0) break;
        int flag = 1;
        for(int i=x;i<=y;i++){
            int v = i*i+i+41;
            int end = v/2;
            for(int j=2;j<end;j++){
                if(v%j==0){
                    flag = 0;break;
                }
            }
            if(!flag)break;
        }
        if(flag) cout<<"OK"<<endl;
        else cout<<"Sorry"<<endl;
    }
    return 0;
}