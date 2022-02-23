#include <iostream>

using namespace std;

int main(){
    char c[3];
    while(cin>>c[0]>>c[1]>>c[2]){
        for(int i=0;i<3;i++){
            int min = i;
            for(int j=i+1;j<3;j++){
                if(c[j]<c[min]) min=j;
            }
            if(min!=i){
                char t;
                t = c[min];
                c[min] = c[i];
                c[i] = t;
            }
        }
        cout<<c[0]<<" "<<c[1]<<" "<<c[2]<<endl;
    }

    return 0;
}