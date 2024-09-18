// wap to delete record of sita from the file student_records.txt and display the remaining rows
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
  ifstream inputFile("student_records.txt");
  ofstream outputFile("updated_records.txt");

  string line;
  while (getline(inputFile, line)) {
    // Skip the line if 
    if (line.find("Sita") == string::npos) {
      outputFile << line << endl;
    }
  }

  inputFile.close();
  outputFile.close();
    remove("student_records.txt");
    rename("updated_records.txt", "student_records.txt"); 
  cout << "Remaining records :" << endl;
  inputFile.open("student_records.txt");
  while (getline(inputFile, line)) {
    cout << line << endl;
  }
  inputFile.close();

  cout << "Record of Sita deleted from student_records.txt" << endl;

  return 0;
}