// . Write a C++ program to demonstrate try, throw and catch statement.

#include<iostream>
using namespace std;
int main(){

try
{    
int num1;
int num2;
cout<<"Enter the first number : ";
cin>>num1;
cout<<"Enter the Second number : ";
cin>>num2;
if(num2 == 0){
throw runtime_error("Number cannot be divisible by zero!");
}
double result = num1/num2;

cout<<"The result  is : "<<result<<endl;
cout<<"The remaining code ........."<<endl;
    }catch(runtime_error e){
        cout<<"Exceptiom : "<<e.what()<<endl;
    }


}