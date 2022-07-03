#include "bmp.h"

int main() {
    BMP image;
    image.readBMP("in");

    std::string word;
    std::cout << "enter the word to encrypt: ";
    std::cin >> word;
    image.encrypt(word);
    image.writeBMP("out1");
    image.decrypt();

    image.writeBMP("out2");

    return 0;
}