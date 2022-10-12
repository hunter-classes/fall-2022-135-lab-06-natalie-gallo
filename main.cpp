#include <iostream>
#include <string>

#include "caesar.h"

int main()
{
  std::string result = encryptCaesar("Way to Go!", 5);
  std::cout << "Ciphertext: " << result << std::endl;
  
  return 0;
}
