// wap to read contenets and display in console from file student_records.txt/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
  ifstream inputFile("student_records.txt");
  if (!inputFile.is_open()) {
    cerr << "Error opening file student_records.txt" << endl;
    return 1; 
  }
  string line;
  while (getline(inputFile, line)) {
    cout << line << endl;
  }
  inputFile.close();

  return 0;
}