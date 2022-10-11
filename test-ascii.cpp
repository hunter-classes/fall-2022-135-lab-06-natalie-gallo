#include <iostream>
#include <cctype>
using namespace std;

int main()
{
  string s;

  cout << "Input: \n";
  getline(cin, s);
  for (int i = 0; i < s.length(); i++){
    cout << s[i] << endl;
  }
}
  
