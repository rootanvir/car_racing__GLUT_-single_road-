#include <windows.h> // for MS Windows
#include <GL/glut.h>
#include <random>

char* strToChar(const std::string& str) {
    char* ch = new char[str.size() + 1]; // +1 for null terminator
    for (size_t i = 0; i < str.size(); ++i) {
        ch[i] = str[i];
    }
    ch[str.size()] = '\0'; // Add null terminator
    return ch;
}

double printRandom() {
    // Create a random device
    std::random_device rd;
    // Create a random number generator
    std::mt19937 gen(rd());
    // Create a uniform distribution between 0 and 1
    std::uniform_real_distribution<double> dis(0.0, 1.0);
    // Generate and return a random number
    return dis(gen);
}
