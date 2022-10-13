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
  std::cout << "Ciphertext: " << result << std::endl;

  //task c
  result = encryptVigenere("Hello, World!", "cake");
  std::cout << "Ciphertext: " << result << std::endl;

  //task d
  std::string result = decryptCaesar("Rovvy, Gybvn!", 10);
  std::cout << "Decrypted: " << result << std::endl;
  result = decryptVigenere("Jevpq, Wyvnd!", "cake");
  std::cout << "Decrypted: " << result << std::endl;
  
  return 0;
}
