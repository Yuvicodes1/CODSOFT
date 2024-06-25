#include<iostream>
//main
int main 
{
    double num1, num2;
    cout<<"Enter numbers  : ";
    cin>>num1>>num2;
    char operator;
    cout<<"Enter Operator :";
    cin>>operator;
    switch(operator){
        //addition
        case '+':
            cout<<num1+num2;
            break;
        //multiplication
        case '*':
            cout<<num1*num2;
            break;
        //subtraction     
        case '-';
            cout<<num1-num2;
            break;
        //division
        case '/':
            cout<<num1/num2;
            break;

        //default message for wrong case entered
        default:
            cout<<"Error !! Not the correct operator.";        
    }
    //switch ends
    return 0;
}