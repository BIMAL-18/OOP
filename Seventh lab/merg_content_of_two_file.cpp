// wap to create files named file1.txt and file2.txt with same text in those files. Also merge the 
// contents of those two files into the file name file3.txt
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
  ofstream file1("file1.txt");
  ofstream file2("file2.txt");
  if (!file1.is_open() || !file2.is_open()) {
    cerr << "Error creating files." << endl;
    return 1;
  }
  string text = "It's a Last lab. \n";
  string text1 = "Chin Tapak Dum Dum \n";
  file1 << text;
  file2 << text1;

  file1.close();
  file2.close();

  cout << "File1.txt and file2.txt created Successfully." << endl;
  ifstream inputFile1("file1.txt");
  ifstream inputFile2("file2.txt");
  ofstream outputFile("file3.txt");

  if (!inputFile1.is_open() || !inputFile2.is_open() || !outputFile.is_open()) {
    cerr << "Error opening files for merging." << endl;
    return 1;
  }
  string line;
  while (getline(inputFile1, line)) {
    outputFile << line << endl;
  }
  while (getline(inputFile2, line)) {
    outputFile << line << endl;
  }
  inputFile1.close();
  inputFile2.close();
  outputFile.close();

  cout << "File1.txt and file2.txt merged into file3.txt Successfully." << endl;

  return 0;
}