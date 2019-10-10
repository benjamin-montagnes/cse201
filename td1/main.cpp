#include <iostream>

int main() {
    std::cout << "Input a letter word" << std::endl;
    std::string mystring;
    std::string final;
    std::cin >> mystring;
    for (int x=0; x<mystring.length(); x+=1){
        if(mystring[x] == mystring[mystring.length()-(1+x)]) final+=mystring[x];
    }
    if(final == mystring) std::cout << "It is a palindrome" << std::endl;
    if(final != mystring) std::cout << "It is not a palindrome"<< std::endl;
    return 0;
}