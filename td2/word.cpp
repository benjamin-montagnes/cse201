#include <iostream>

bool isPunctuation(char character)
{   
    if (isalpha(character) | isalnum(character)) return false;
    return true;
}

bool findSecondWord(std::string input_str, std::string &second)
{
    int i=0;
    while (isPunctuation(input_str[i])==false || isPunctuation(input_str[i+1])==true)i++;
    int j=i+1;
    while (isPunctuation(input_str[j])==false){
        if (isPunctuation(input_str[j+1])==false) j++;
        if (isPunctuation(input_str[j+1]) & isPunctuation(input_str[j+2])) j++;
        else j+=2;
    }
    for (int x=i+1; x<j; x++) second+=input_str[x];
}


int main()
{
    std::string second;
    second = "";
    std::string str;
    std::getline(std::cin, str);
    findSecondWord(str, second);
    std::cout << second << " (" << second.length() << ")" << std::endl;
    return 0;
}