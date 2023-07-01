#pragma once
class String
{
private:
    char* data;
    int length;

public:
    String();
    String(const char* str);
    String(const String& other);
    ~String();

    String& operator=(const String& other);
    char& operator[](int index);
    int operator()(char c) const;
    operator int() const;

    void print() const;
};

