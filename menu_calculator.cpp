#include <iostream>
using namespace std;
int main(){
    float a,b;
    char op;
    cout<<"enter:number op number\n";
    cin>>a>>op>>b;
         double result;
         switch(op){
            case '+':cout<<"result:"<<a+b;
            break;
            case '-':cout<<"result:"<<a-b;
            break;
            case '*':cout<<"result:"<<a*b;
            break; 
              case '/':
            if(b==0){
                cout <<" cannot divide by zero";
            }else{
                cout<<"result:"<<a/b;
            }
            break;
            default:cout<<"invalid operator";
             }
            return 0;
         

}