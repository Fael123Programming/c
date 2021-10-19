#include <iostream>
#include <string>
#include <cctype>
#include <cstdlib>

using namespace std;
typedef struct validation {
    bool isInvalidOpt(string opt, int from, int to) {
        int optNum = atoi(opt.c_str());
        return optNum < from || optNum > to; 
    }

    bool isInvalidNumber(string number) {
        for (int i = 0; i < number.length(); i++) {
            if (!isdigit(number[i]) && number[i] != '.') return true;
        }
        return false;
    }
}validation;