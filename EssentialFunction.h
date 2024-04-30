#include <bits/stdc++.h>
#include <GL/glut.h>
#include<bits/stdc++.h>
using namespace std;

char* strToChar(const std::string& str) {
    char* ch = new char[str.size() + 1]; // +1 for null terminator
    for (size_t i = 0; i < str.size(); ++i) {
        ch[i] = str[i];
    }
    ch[str.size()] = '\0'; // Add null terminator
    return ch;
}
