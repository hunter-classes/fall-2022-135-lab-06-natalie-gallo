#include <iostream>
#include <string>

#include "decrypt.h"

//decrypt functions

std::string decryptCaesar(std::string ciphertext, int rshift){
  char c;
  std::string message;
  for (int i = 0; i < ciphertext.length(); i++){
    c = ciphertext[i]; //store character into char c
    rshift = -rshift;
    message = message + shiftChar(c, rshift);
    //have a variable called message to store encrypted letters
    //do c plus whatever number character shift (refer to lab)
    //add that (not replace) to encrypted message variable
  }
  return message;
}

std::string decryptVigenere(std::string ciphertext, std::string keyword){
  char key_c;
  int shift;
  char c;
  std::string message;
  int counter = 0;
  int i = 0;

  while (counter != ciphertext.length()){ //execute until read thru all of plaintext
    key_c = keyword[i]; //get i character from keyword
    shift = (int)key_c - 97; //calculate what letter in the alphabet keyword char is
    shift = -shift;
    c = ciphertext[counter]; //starting at 0, store character from plaintext into c
    if (!isalpha(c)){ //if c is NOT a letter, dont modify it and move to the next character
      message = message + c;
      counter = counter + 1;
    } else { //if c is a letter, shift the character accordingly, move to the next character of the text and keyword
      message = message + shiftChar(c, shift);
      counter = counter + 1;
      i = i + 1;
    }
    if (i == keyword.length()){ //if the keyword has been read, start again/loop
      i = 0;
    }
  }
  return message;
}

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
