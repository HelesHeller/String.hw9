#include<iostream>
#include <Windows.h>
#include<cstring>
#include"String.h"


using namespace std;


int main() {


    String str("Hello");
    str.print();

    cout << "Length: " << static_cast<int>(str) << endl;

    char& c = str[1];
    cout << "Character at index 1: " << c << endl;

    int index = str('e');
    if (index != -1)
        cout << "Index of 'e': " << index << endl;
    else
        cout << "'e' not found in the string" << endl;

    return 0;






}