#include<iostream>
using namespace std;
int main(){

    int i;
    cout<<"enter a positive integer"<<endl;
    cin>>i;
    int j;
    for(j=0;j<=10;j++){
        cout<<i<<"*"<<j<<"="<<j*i<<endl;
    }


    
    return 0;
}