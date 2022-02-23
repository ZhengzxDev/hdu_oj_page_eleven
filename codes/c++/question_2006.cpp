#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    
    int n;
    while(cin>>n){
        int i=0;
        int sum = 1;
        while(i<n){
            int x;
            cin>>x;
            i++;
            if(x%2!=0) sum*=x;
        }
        cout<<sum<<endl;
    }
    return 0;
}