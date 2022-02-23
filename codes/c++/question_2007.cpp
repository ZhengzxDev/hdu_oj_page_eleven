#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    
    int start,end;
    while(cin>>start>>end){
        int s1=0;
        int s2=0;
        for(int i=start;i<=end;i++){
            if(i%2==0){
                s1 += i*i;
            }
            else{
                s2 += i*i*i;
            }
        }
        cout<<s1<<" "<<s2<<endl;
    }
    return 0;
}