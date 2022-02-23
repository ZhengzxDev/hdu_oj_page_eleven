#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main(){
    int n;
    while(cin>>n){
        int i=0;
        while(i<n){
            int count=0;
            cin>>count;
            double sum = 0;
            int flag = 1;
            for(int j=1;j<=count;j++){
                sum += (1.0/j)*flag;
                flag *= -1;
            }
            i++;
            printf("%.2f\n",sum);
            
        }
    }
    return 0;
}