#include <iostream>

#define PI 3.1415926

using namespace std;

int main(){
    double r;
    while(cin>>r){
        printf("%.3f\n",(4.0/3)*PI*r*r*r);
    }

    return 0;
}