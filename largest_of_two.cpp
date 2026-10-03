#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter first number:";
    cin>>a;
    cout << "enter second number:";
    cin>>b;
    if(a>b){
        cout<<"largest number is "<< a;

    }else{
        cout<<"largest number is "<<b;
    }
    return 0;
}