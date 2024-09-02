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
        // void againloginpass();
    }
    }}

void gmailinterface(){
            int code = 123;

            cout<<"                   'WELCOME TO GMAIL'                           " <<endl;   

            cout<<" -------------------------------------------------------------"<<endl;
            cout<<"|                       _____________                         |"<<endl;
            cout<<"|                      |   GMAIL     |                        |"<<endl;
            cout<<"|-------------------------------------------------------------|"<<endl;
            cout<<"|                                                             |"<<endl;
            cout<<"|                                                             |"<<endl;
            cout<<"|                  Verify your email address :                |"<<endl;
            cout<<"|                  Your code is : "<<code<<"                         |"<<endl;
            cout<<"|                                                             |"<<endl;
            cout<<"|                                                             |"<<endl;
            cout<<"|                                                             |"<<endl;
            cout<<"|                                                             |"<<endl;
            cout<<"|          ←          Reply        →                         |"<<endl;
            cout<<"---------------------------------------------------------------"<<endl;
}
 
void create_and_login(){
string email,password,name,useremail,userpassword;
    int a;
    do{
        cout<<"Enter Your Choice ;"<<"1.LoginCreate Account"<<"2.Login"<<endl;
        cin>>a;
    switch(a){
        case 1:
                cout<<"                  'WELCOME TO BIMAL SERVER'                 " <<endl<<endl;  
                cout<<" -------------------------------------------------------------"<<endl;
                cout<<"|                      | CREATE ACCOUNT |                        |"<<endl;
                cout<<"|-------------------------------------------------------------|"<<endl;
                cout<<"|                                                             |"<<endl;
                cout<<"                    Name   :- "               ;
                cin>>name;
                cout<<"                    Email  :- "               ;
                cin>>email;
                cout<<"                    Password :- ";
                cin>>password;
                cout<<"|                                                             |"<<endl;
                cout<<"_______________________________________________________________"<<endl;
                cout<<endl;
                cout<<"              'Account Create Sucessfully'           "<<endl<<endl;
                break;
case 2:
                cout<<"                  'WELCOME TO BIMAL SERVER'                 " <<endl;  
                cout<<" -------------------------------------------------------------"<<endl;
                cout<<"|                      |   LOGIN     |                        |"<<endl;
                cout<<"|-------------------------------------------------------------|"<<endl;
                cout<<"                    Email    :- "               ;
                cin>>useremail;
                cout<<"                    Password :- ";
                cin>>userpassword;
                cout<<"|                                                             |"<<endl;
                cout<<"_______________________________________________________________"<<endl<<endl;
                if(email == useremail && password == userpassword ){
                    cout<<"              'Login Sucessfully..................'     "<<endl;
                }else{
                    cout<<"              'Change Password....................'     "<<endl;
                }

                    break; 
}
}while(a!=2);
return;
}
int main(){
    int a;
    wifilogin();
    do{
    int code = 123;
    cout<<"Enter a Choice"<<endl;
    cout<<"1.Gmail "<<endl;
    cout<<"2.Register"<<endl;
    cout<<"3.Exit"<<endl;
    cin>>a;
    switch(a){
        case 1:
        int cho;
        cout<<"Do you want to open gmail ."<<endl<<"1.Yes"<<endl<<"2.No"<<endl;
        cin>>cho;
        if(cho == 1 ){
        gmailinterface();
        }
            break;

            case 2:
                    create_and_login();
                    break;
            case 3:
                cout<<"_________________Thank YOU_____________________________"<<endl;
                break;
                }
}while(a!=3);
return 0;
}