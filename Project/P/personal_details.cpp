#include<iostream>
#include<fstream>
using namespace std;

int main(){
   int age;
   string name , address;
    

   fstream in("input.txt",ios::in);
   string line;
        cout<<"                  'WELCOME TO BIMAL SERVER'                 " <<endl<<endl;  
        cout<<" -------------------------------------------------------------"<<endl;
        cout<<"|                      | PERSONAL DETAILS |                   |"<<endl;
        cout<<"|-------------------------------------------------------------|"<<endl;
        cout<<"|                                                             |"<<endl;
   while(getline(in,line)){
        cout<<"  "<<line<<endl;

   }
        cout<<"|_____________________________________________________________|"<<endl;


    in.close();
    // out.close();




}

//    fstream out("input.txt",ios::out);
//     cout<<"Enter the name :";
//     cin>>name;
//     cout<<"Enter the age :";
//     cin>>age;
//     cout<<"Enter the address :";
//     cin>>address;

//     out<<"Name : "<<name<<endl;
//     out<<"AGe : "<<age<<endl;
//     out<<"Address : "<<address<<endl;