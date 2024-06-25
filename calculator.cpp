#include<iostream>
using namespace std;
//main
int main ()
{
    double num1, num2;
    cout<<"Enter numbers  : ";
    cin>>num1>>num2;
    char op;
    cout<<"Enter Operator :";
    cin>>op;
    switch(op){
        //addition
        case '+':
            cout<<num1+num2;
            break;
        //multiplication
        case '*':
            cout<<num1*num2;
            break;
        //subtraction     
        case '-':
            cout<<num1-num2;
            break;
        //division
        case '/':
            cout<<num1/num2;
            break;

        //default message for wrong case entered
        default:
            cout<<"Error !! Not the correct operator."<<endl;        
    }
    //switch ends
    return 0;
}