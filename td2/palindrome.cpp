#include <iostream>

bool isPalindromeAux(std::string &str, int start, int end)
{   
    if (start==end) return true;
    if (str[start] != str[end]) return false;
    if (start < end+1) return isPalindromeAux(str, start+1, end-1);
    return true;
}

bool isPalindrome(std::string &str)
{
    int n = str.length();
    if (n==0) return true;
    int tof = isPalindromeAux(str,0,n-1);
    if (tof == 0) std::cout << "Not a palindrome" << std::endl;
    else std::cout << "It is a palindrome" << std::endl;
    return 0;
}


int main()
{
    std::string str;
    std::cin >> str;
    isPalindrome(str);
    return 0;
}