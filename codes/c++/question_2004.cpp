#include <iostream>

using namespace std;

int main(){
    int s;
    while(cin>>s){
        if(s>100){
            cout<<"Score is error!"<<endl;
        }
        else if(s>=90){
            cout<<"A"<<endl;
        }
        else if(s>=80){
            cout<<"B"<<endl;
        }
        else if(s>=70){
            cout<<"C"<<endl;
        }
        else if(s>=60){
            cout<<"D"<<endl;
        }
        else if(s>=0){
            cout<<"E"<<endl;
        }
        else{
            cout<<"Score is error!"<<endl;
        }
    }
    return 0;
}