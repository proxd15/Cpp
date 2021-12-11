#include<iostream>
using namespace std;

int main(){
   
    for(int i=1;i<=5;i++){
        for(int j=5-i;j>0;--j)    
                cout<<" ";
                for(int k=1;k<=i;k++){
                    cout<<"*"<<" ";
                }
        cout<<endl;
    }for(int i=1;i<=5;i++){
        for(int j=2;j<=i;++j)
        cout<<" ";
        for(int k=5;k>=i;--k){
            cout<<"*"<<" ";
        }
        cout<<endl;

    }
    return 0;
}