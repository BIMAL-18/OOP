// . Write a C++ program to demonstrate try, throw and catch statement.

#include<iostream>
using namespace std;
int main(){

try
{    
int num1 = 10;
int num2 = 0;
if(num2 == 0){
throw runtime_error("Divisible by 0.......");
}
double result = num1/num2;

cout<<"The result  is : "<<result<<endl;
cout<<"The remaining code ........."<<endl;
    }catch(runtime_error e){
        cout<<"Exceptiom : "<<e.what()<<endl;
    }


}