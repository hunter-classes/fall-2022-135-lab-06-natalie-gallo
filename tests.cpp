#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "caesar.h"
#include "vigenere.h"
#include "decrypt.h"

// add your tests here

//lab 6 note: TASK A has NO tests

//TASK B TESTS
TEST_CASE("Caesar Cipher Case") {
  CHECK(encryptCaesar("Hello, World!", 10) == "Rovvy, Gybvn!");
  CHECK(encryptCaesar("Way to Go!", 5) == "Bfd yt Lt!");
}


//TASK C TESTS
TEST_CASE("Vigenere Cipher Case") {
  CHECK(encryptVigenere("Hello, World!", "cake") == "Jevpq, Wyvnd!");
  CHECK(encryptVigenere("Way to Go!", "ball") == "Xaj ep Gz!");
}

//TASK D TESTS
TEST_CASE("Decrypt Cipher Case") {
  CHECK(decryptCaesar("Rovvy, Gybvn!", 10) == "Hello, World!");
  CHECK(decryptVigenere("Jevpq, Wyvnd!", "cake") == "Hello, World!");
}

