#include <iostream>
#include <string>

#include "caesar.h"
#include "vigenere.h"
#include "decrypt.h"

int main()
{
  //task b
  std::string result;
  result = encryptCaesar("Hello, World!", 10);
  std::cout << "Caesar Ciphertext: " << result << std::endl;

  //task c
  result = encryptVigenere("Hello, World!", "cake");
  std::cout << "Vigenere Ciphertext: " << result << std::endl;

  //task d
  result = decryptCaesar("Rovvy, Gybvn!", 10);
  std::cout << "Caesar Decrypted: " << result << std::endl;
  result = decryptVigenere("Jevpq, Wyvnd!", "cake");
  std::cout << "Vigenere Decrypted: " << result << std::endl;
  
  return 0;
}
