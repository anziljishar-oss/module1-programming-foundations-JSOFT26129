#include <iostream>
using namespace std;
int main(){
    int unit;
    double bill;
    cout<<"enter unit:";
    cin>>unit;
    if(unit<=100){
        bill=unit * 5;
    }
    else if(unit<=200){
        bill = 100 * 5 +(unit-100) * 7;
    }
    else {
        bill =100 * 5 +100*7+((unit-200)*10);
    }
    cout<<"electricity bill="<<bill;
    return 0;
}