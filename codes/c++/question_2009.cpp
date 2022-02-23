#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main(){

    int m;
    double n;
    while(cin>>n>>m){
        int i=0;
        double sum = 0;
        while(i<m){
            sum+=n;
            i++;
            n=sqrt(n);
        }
        printf("%.2f\n",sum);
    }
    return 0;
}