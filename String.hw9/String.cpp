#include "String.h"
#include <iostream>
#include <cstring>

using namespace std;

String::String() : data(nullptr), length(0) {}

String::String(const char* str) {
    length = strlen(str);
    data = new char[length + 1];
    strcpy_s(data, length + 1, str);
}

String::String(const String& other) {
    length = other.length;
    data = new char[length + 1];
    strcpy_s(data, length + 1, other.data);
}

String::~String() {
    delete[] data;
}

String& String::operator=(const String& other) {
    if (this != &other) {
        delete[] data;
        length = other.length;
        data = new char[length + 1];
        strcpy_s(data, length + 1, other.data);
    }
    return *this;
}

char& String::operator[](int index) {
    if (index >= 0 && index < length)
        return data[index];
    else
        throw std::out_of_range("Index out of range");
}

int String::operator()(char c) const {
    for (int i = 0; i < length; i++) {
        if (data[i] == c)
            return i;
    }
    return -1;
}

String::operator int() const {
    return length;
}

void String::print() const {
    cout << data << endl;
}
