#include <iostream>

#include "vigenere.h"

//function
//assume keyword is only lowercase letters a-z (97 - 122)
std::string encryptVigenere(std::string plaintext, std::string keyword){
  //read thru each character of keyword
  //convert the character to its ascii interger and do int - 97(a) to find how many times need to shift
  //set that value to rshift
  //read plaintext and extract each character into a variable
  //for the first character, shift according to the keyword's letter value
  //store this character into a message variable
  char key_c;
  int shift;
  char c;
  std::string message;
  int counter = 0;
  bool read = true;

  while (read){
  for (int i = 0; i < keyword.length(); i++){
    if (counter == plaintext.length()){
      read = false;
    } else {
      key_c = keyword[i];
      shift = (int)key_c - 97;
    }
      c = plaintext[counter];
      message = message + shiftChar(c, shift);
      counter = counter + 1;
    }
  }
  return message;  
}
  
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
