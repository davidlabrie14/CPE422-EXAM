#include <iostream>
#include <sstream>
#include <fstream>
#include <unistd.h>
#include <string>
using namespace std;

#define FILE_PATH "/home/debian/IoTexam/Question2/temperatures.txt"


int main(int argc, char* argv[]){
  std::fstream fs;
  string line;
  fs.open((FILE_PATH), std::fstream::in);
  int i = 0;
  string b;
  string c;
  for(i = 0; i < 10 ; i ++)
  {
      getline(fs,line);
      b = b + line + " ";
      if(i == 6){
          c = line;
      } 
  }
  cout << c  << endl;
//  line = line/10;
  fs.close();
 }
 

