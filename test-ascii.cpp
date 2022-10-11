#include <iostream>
#include <cctype>
using namespace std;

int main()
{
  string s;
  char c;

  cout << "Input: \n";
  getline(cin, s);
  for (int i = 0; i < s.length(); i++){
    c = s[i];
    cout << c << " " << (int)c << endl;
  }
  return 0;
}
  
