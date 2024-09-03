
#include<iostream>
#include<fstream>
#include<sstream>
using namespace std;
int main(){
     
    string password,age,username;
    string Loginpassword,Loginusername;
     string fileusername,filepassword,fileage;
    cout<<"Enter the username : "<<endl;
    cin>>username;
    cout<<"Enter the password : "<<endl;
    cin>>password;
    cout<<"Enter the age : "<<endl;
    cin>>age;
    ofstream of1("file.txt");
    if(of1.is_open()){
        of1<<username<<'\n'<<password;
        of1.close();
        
    cout<<"Registration Complete sucessfully."<<endl;
    }else{
        cout<<"Errror in opening the file ."<<endl;
        
    }
    cout<<"Enter the Loginusername : "<<endl;
    cin>>Loginusername;
    cout<<"Enter the Loginpassword : "<<endl;
    cin>>Loginpassword;
    ifstream of2("file.txt");
    if(of2.is_open()){
        of2>>fileusername;
        of2>>filepassword;
        of2>>fileage;

        of2.close();

    }if(username == Loginusername && password == Loginpassword){
        cout<<"Details "<<endl;
        cout<<"Username is : " <<fileusername<<endl;
        cout<<"Password is   : "<<filepassword<<endl;
        cout<<"Age is : " <<fileage<<endl;

    }   else{
        cout<<"Login fail invalid username and password"<<endl;

    }

        cout<<"Enter the new password : "<<endl;
        cin>>password;
        ofstream of1("file.txt");
    if(of1.is_open()){
        of1<<password;
        of1.close();
    //  if(password!=Loginpassword){


    }else{
        cout<<"Password change sucessfully"<<endl;
    }
    
    
}