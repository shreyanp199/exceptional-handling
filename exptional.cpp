#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter 2 nos.";
    cin>>a;
    cin>>b;

    try{
        if(b==0)
        throw b;
    else{
        c=a/b;
        cout<<"result";
        cout << c;
    }
    }catch(int x)
    {cout<<"can't dividee= by"<<x;}
    return 0;
}