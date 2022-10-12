#include <iostream>

#include "caesar.h"

//add functions here

//rshift is the magnitude of right shift (0 <= rshift <= 25)

char shiftChar(char c, int rshift){
  int c_shift = 0;
  int dec_c = int(c);
  int loop = rshift - 1;
  if (dec_c <= 90 && dec_c >= 90 - loop){ //loop through capitals
    rshift = rshift - (90 - dec_c);
    c_shift = 64 + rshift;
  } else if (dec_c <= 122 && dec_c >= 122 - loop) { //loop through lowercase
    rshift = rshift - (122 - dec_c);
    c_shift = 96 + rshift;
  } else if ((dec_c < 65) || (dec_c > 90 && dec_c < 97) || (dec_c > 122)){
    c_shift = dec_c;
  } else {
    c_shift = dec_c + rshift;
  }
  return (char)c_shift;
}

std::string encryptCaesar(std::string plaintext, int rshift){
  char c;
  std::string message;
  for (int i = 0; i < plaintext.length(); i++){
    c = plaintext[i]; //store character into char c
    message = message + shiftChar(c, rshift);
    //have a variable called message to store encrypted letters
    //do c plus whatever number character shift (refer to lab)
    //add that (not replace) to encrypted message variable
  }
  return message;
}


