// Wap to read content from the file name demo.txt and print number of words and number of lines available in the file.
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

int main() {
  ifstream inputFile("demo.txt");
  if (!inputFile.is_open()) {
    cerr << "Error opening file." << endl;
    return 1; 
  }
  int wordCount = 0;
  int lineCount = 0;
  string line;
  while (getline(inputFile, line)) {
    lineCount++; 
    stringstream ss(line);
    string word;
    while (ss >> word) {
      wordCount++;
    }
  }
  inputFile.close();
  cout << "Number of words in file : " << wordCount << endl;
  cout << "Number of lines in file : " << lineCount << endl;
  return 0;
}