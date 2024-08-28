#include<iostream>
#include<fstream>
#include<sstream>
#include<string>
using namespace std;

int main(){

    int a , i=0;
    string text, old ,password1 ,password2 , pass, name , password0 , age,user, word, word1;    
    string creds[2],cp[2];

    cout<<"        Security System"<<endl;
    cout<<"____________________________________"<<endl<<endl;
    cout<<"|          1. Register             |"<<endl;
    cout<<"|          2. Login                |"<<endl;
    cout<<"|          3. Change password      |"<<endl;
    cout<<"|__________4. End Program_________ |"<<endl;
    
    do{
        cout<<endl<<endl;
        cout<<"Enter your Choice :";
        cin>>a;
        switch (a)
        {
        case 1: {
            cout<<"__________________________________________"<<endl<<endl;
            cout<<"--------------Register--------------------"<<endl;
            cout<<"__________________________________________"<<endl<<endl;
            cout<<"Please enter username :- ";
            cin>>name;
            cout<<"Please enter the password :-";
            cin>>password0;
            cout<<"Please Enter Your age :-";
            cin>>age;
            ofstream of1; //it is a object of a ofstream class and it is used to open a file to write something
            of1.open("file.txt");
            if(of1.is_open()){
                of1<<name<<"\n";
                of1<<password0;
                cout<<"Registration Sucessfull "<<endl;
            }

        

            break;
        

        }
        case 2:{
            i=0;
            cout<<"____________________________________"<<endl<<endl;
            cout<<"|-------------Login----------------|"<<endl;
            cout<<"|__________________________________|"<<endl;
            ifstream of2;
            of2.open("file.txt");
            cout<<"Please Enter the username :-";
            cin>>user;
            cout<<"Please enter the password :-";
            cin>>pass;
            if(of2.is_open()){
                while(!of2.eof()){
                    while(getline(of2,text)){
                        istringstream iss(text);
                        iss>>word;
                        creds[i] = word;
                        i++;


                    }
                    if(user == creds[0] && pass == creds[1]){
                        cout<<"-------Login Sucessfully-----";
                        cout<<endl<<endl;
                        cout<<"Details : "<<endl;
                        cout<<"Username: "+name<<endl;
                        cout<<"Password: "+pass<<endl;
                        cout<<"Age: "+age<<endl;

                    }
                    else{
                        cout<<endl<<endl;
                        cout<<"Incorrect Credentials "<<endl;
                        cout<<"|           1. Press 2 to Login              |"<<endl;
                        cout<<"|           2. Press 3 to Change password    |"<<endl;
                        break;

                    }
                }
            }
        break;
    }
        case 3:{
            i=0;
            cout<<"--------------------Change Password------------------"<<endl;
            ifstream of0;
            of0.open("file.txt");
            cout<<"Enter the old password :-";
            cin>>old;
            if(of0.is_open()){
                while (of0.eof()){
                    while(getline(of0,text)){
                        istringstream iss(text);
                        iss>>word1;
                        cp[i] == word1;
                        i++;
                    }
                    if(old==cp[1]){
                        of0.close();
                        ofstream of1;
                        if(of1.is_open()){
                            cout<<"Enter your new password :- "<<endl;
                            cin>>password1;
                            cout<<"Enter your password again :- "<<endl;
                            cin>>password1;
                            if(password1 == password2){
                                of1<<cp[0]<<"\n";
                                cout<<"Password change successdulluy "<<endl;


                            }
                            else{
                                of1<<cp[0]<<"\n";
                                of1<<old;
                                cout<<"Password do not match "<<endl;

                            }
                        }


                    }
                    else{
                        cout<<"Please enter a valid password"<<endl;
                        break;

                    }
                    
                }
                
             
                
            }
            break;

        }
            case 4: 
            {
                cout<<"_________________Thank You_____________________";
                break;

            }
             default:
                cout<<"Enter a valid choice ";

        }    
    }
    while(a!=4);
    return 0;

    

}