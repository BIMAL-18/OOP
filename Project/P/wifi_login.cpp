#include<iostream>
using namespace std;
    void wifilogin(){
    string username , password;
    string  pass = "knwr";
    // cout<<"            Welcome to Bimal Login                  "<<endl<<end;
    cout<<" ----------------------------------------------------"<<endl;
    cout<<"|                Wifi Login                          |"<<endl;
    cout<<"-----------------------------------------------------"<<endl;
    while(true){
    cout<<"              Wifi Name : ";
    cin>>username;
    cout<<"              Password :  ";
    cin>>password;
    if(pass == password){
        cout<<endl;
        
        cout<<"          'Wifi connected sucessfully.'           "<<endl;
        break;
    }
        
    else {
        cout<<"Please Try again......"<<endl;
    }
    }}
    
int main(){
    wifilogin();
}