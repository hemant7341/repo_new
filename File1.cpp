#include<iostream>
#include<fstream>
using namespace std;
int main()
{
  ofstream fout;
  fout.open("File1.txt");
  fout<<"First file is created now.";
  fout.close();	
}
