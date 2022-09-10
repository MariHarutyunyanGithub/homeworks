//Palindrome Permutation: Given a string, write a function to check if
//it is a permutation of a palindrome. A palindrome is a word or phrase
//that is the same forwards and backwards. A permutation is a rearrangement
//of letters. The palindrome does not need to be limited to just dictionary words.

#include <iostream>
#include <unordered_map>

bool is_permutation_of_palindrome(std::string str)
{
    std::unordered_map<char, int> myMap;
    for (int i{}; i < str.size(); ++i) {
        myMap[str[i]]++;
    }
    int odd_count{};
    for (const auto chars : myMap) {
        if (chars.first != ' ' && chars.second % 2) {
            ++odd_count;
        }
    }
    bool answer{true};
    if (odd_count > 1) {
        answer = false;
    }
    return answer;
}

int main() {
    std::string a = {"taco   taco  jh"};
    std::cout << is_permutation_of_palindrome(a) << std::endl;
    return 0;
}