// Wap to create a file name student_records.txt and insert the content to it.
// content
// 1 Ram 30
// 2 Shyam 29
// 3 sita 25

#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
  ofstream outputFile("student_records.txt");

  if (!outputFile.is_open()) {
    cerr << "Error creating file student_records.txt" << endl;
  }

  outputFile << "1 Ram 30" <<endl;
  outputFile << "2 Shyam 29" <<endl;
  outputFile << "3 Sita 25" << endl;
  outputFile.close();

  cout << "Content inserted into student_records.txt" << endl;

  return 0;
}


