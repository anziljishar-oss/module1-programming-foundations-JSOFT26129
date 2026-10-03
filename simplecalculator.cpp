#include <iostream>
using namespace std;
int main()
{
    int a,b;
    char op;
    cout<<"enter first numbers:";
    cin>>a;
    cout<<"enter operator(+,-,*,/):";
    cin>>op;
    cout<<"enter second number:";
    cin>>b;
    double result;
    if(op=='+') result=a+b;
    else if(op=='-') result=a-b;
    else if(op=='*') result=a*b;
    else if(op=='/') result=a/b;
    else {
        cout<<"invalid operator";
        return 0;
    }
    cout<<"result:"<<result;
    return 0;

    
}