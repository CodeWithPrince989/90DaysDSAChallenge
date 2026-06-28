#include<iostream>
using namespace std;

void Count(int n){
    cout<<"Enter Number to get Value Upto N: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<< i << endl;
    }
}

void fourStar(int m){
    cout<<"Enter Number to get Stars: ";
    cin>>m;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=m; j++){
        cout<< "*";
        }
        cout<< "*" << endl;
    }
}

int main(){
    Count(6);
    fourStar(6);

    return 0;
}