// wap to read content from filename demo.txt and print number of character available in the file.
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
  ifstream inputFile("demo.txt");
  if (!inputFile.is_open()) {
    cerr << "Error opening file demo.txt" << endl;
    return 1; 
  }
  int charCount = 0;
  char ch;
  while (inputFile.get(ch)) {
    charCount++;
  }
  inputFile.close();
  cout << "Number of characters in the file : " << charCount << endl;

  return 0;
}