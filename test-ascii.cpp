#include <iostream>
#include <cctype>
using namespace std;

int main()
{
  string s;
  char c;

  cout << "Input: \n";
  getline(cin, s); //reads and stores entire input including spaces

  //iterate through each character at index i of string s
  for (int i = 0; i < s.length(); i++){ 
    c = s[i]; //store character into char c
    cout << c << " " << (int)c << endl; //print c, and print ascii #
  }
  return 0;
}
  
