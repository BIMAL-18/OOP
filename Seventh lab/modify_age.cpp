// wap to modify the age of Shyam from 29 to 22 that is available in file student_records.txt
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
    ifstream inputFile("student_records.txt");
    ofstream tempFile("temp.txt");
    string line;
    if (!inputFile) {
        cerr << "Error opening student_records.txt." << endl;
    }

    while (getline(inputFile, line)) {
        if (line.find("Shyam") != string::npos) {
            line.replace(line.find("29"), 2, "22");
        }
        tempFile << line << endl;
    }

    inputFile.close(); 
    tempFile.close(); 
    remove("student_records.txt");
    rename("temp.txt", "student_records.txt");
    cout << "Age of Shyam has been modified to 22." << endl;

    return 0; 
}
