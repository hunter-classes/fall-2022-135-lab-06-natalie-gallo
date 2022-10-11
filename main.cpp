#include <iostream>


#include "caesar.h"

int main()
{
  std::string result = encryptCaesar("Way to Go!", 5);
  std::cout << "encryptCaesar("Way to Go!", 5); == " << result << std::endl;
  
  return 0;
}
