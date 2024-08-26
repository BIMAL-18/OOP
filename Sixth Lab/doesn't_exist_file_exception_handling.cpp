// Create a program that attempts to open a file named "input.txt" for reading. Use exception handling to catch and handle 
// the case when the file does not exist

#include <iostream>
#include <fstream>
using namespace std;
int main() {    
    string filename = "input.txt";
    cout<<"Filename : "<<filename<<endl;
    ifstream file(filename);
    try {
        if (!file.is_open()) {
            throw runtime_error("File does not exist or could not be opened.");
}
        cout << "File opened successfully." << endl;
        string line;
        while (getline(file, line)) {
            cout << line << endl;
        }
        file.close();

    } catch (const runtime_error& e) {
        cout <<"Exception : "<< e.what() << endl;
    }
    return 0;
}
