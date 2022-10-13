#include <iostream>
#include <string>

//#include "caesar.h"
#include "vigenere.h"

int main()
{
  //task b
  std::string result = encryptCaesar("Way to Go!", 5);
  std::cout << "Ciphertext: " << result << std::endl;

  //task c
  std::string result = encryptVigenere("Hello, World!", "cake");
  std::cout << "Ciphertext: " << result << std::endl;
  
  return 0;
}
