// Wap to append contents in the filename demo.txt
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
  ifstream inputFile("student_records.txt");
  fstream outputFile("demo.txt", ios::app);

  string line;
  while (getline(inputFile, line)) {
    outputFile << line << endl; 
  }
  inputFile.close();
  outputFile.close();

  cout << "Content from student_records.txt appended to demo.txt" << endl;

  return 0;
}