#include <iostream>

#include "vigenere.h"

//function
//assume keyword is only lowercase letters a-z (97 - 122)
std::string encryptVigenere(std::string plaintext, std::string keyword){
  /*read thru each character of keyword
  convert the character to its ascii interger and do int - 97(a) to find how many times need to shift
  set that value to rshift
  read plaintext and extract each character into a variable
  for the first character, shift according to the keyword's letter value
  store this character into a message variable*/
  
  char key_c;
  int shift;
  char c;
  std::string message;
  int counter = 0;
  int i = 0;

  while (counter != plaintext.length()){ //execute until read thru all of plaintext
    key_c = keyword[i]; //get i character from keyword
    shift = (int)key_c - 97; //calculate what letter in the alphabet keyword char is
    c = plaintext[counter]; //starting at 0, store character from plaintext into c
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
