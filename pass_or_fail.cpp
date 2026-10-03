#include <iostream>
using namespace std;
int main(){
    float marks;
    cout<<"enter your marks:";
    cin>>marks;
    if(marks<0||marks>100){
        cout<<"invalid result";
    }else if(marks>=40){
        cout<<"pass";
    }else{
        cout<<"fail";
    }
    return 0;
}
    

