#include<iostream>
using namespace std;
 
int main(){
    string email,password,name,useremail,userpassword;
    int choice;
    do{
        cout<<"Enter Your choice ;"<<endl;
        cin>>choice;
        
    switch(choice){
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
}while(choice!=2);
return 0;

}