#pragma once

std::string decryptCaesar(std::string ciphertext, int rshift);
std::string decryptVigenere(std::string ciphertext, std::string keyword);
char shiftChar(char c, int rshift);
