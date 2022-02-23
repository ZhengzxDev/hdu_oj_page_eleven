#include <iostream>
#include <stdio.h>

using namespace std;

int days[12] = {31,28,31,30,31,30,31,31,30,31,30,31};

int main(){
    int year,month,day;
    while(scanf("%d/%d/%d",&year,&month,&day)!=EOF){
        if(year%100==0){
            if(year%400==0){
                days[1]=29;
            }
            else{
                days[1]=28;
            }
        }
        else if(year%4==0){
            days[1]=29;
        }
        else{
            days[1]=28;
        }
        int day_count = 0;
        for(int i=1;i<month;i++){
            day_count += days[i];
        }
        day_count += day;
        cout<<day_count<<endl;
    }
    return 0;
}