#include <iostream>
#include <fstream>
using namespace std;

int main () {
//  ofstream myfile;
//  myfile.open ("example.txt");
//  myfile << "Writing this to a file.\n";
//  string g;
//  myfile >> g ;
//  cout << g;
//  myfile.close();
//  return 0;
  string line;
  ifstream myfile ("example.txt");
  if (myfile.is_open())
  {
    while ( getline (myfile,line) )
    {
      cout << line << '\n';
    }
    myfile.close();
  }

  else cout << "Unable to open file";

  return 0;
}
