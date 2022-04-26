#include <iostream>
#include <ctime>
#include <iomanip>
#include <cstring>

using namespace std;
#ifndef ASDLAB6_2_LIST_H
#define ASDLAB6_2_LIST_H


struct Data {
    char name[10];
    char complexity[10];
    char utility[10];
    Data()
    {
        string StringName = "Bubble";
        string StringComplexity = "O(n^2)";
        string StringUtility = "good";
        strcpy(name, StringName.c_str());
        strcpy(complexity, StringComplexity.c_str());
        strcpy(utility, StringUtility.c_str());
    }
    };
    struct HashNode {
        Data Algorithm;
        long long key{};
    };


#endif //ASDLAB6_2_LIST_H
