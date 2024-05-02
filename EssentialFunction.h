#include <windows.h> // for MS Windows
#include <GL/glut.h>
#include <random>
using namespace std;

char* strToChar(const std::string& str) {
    char* ch = new char[str.size() + 1]; // +1 for null terminator
    for (size_t i = 0; i < str.size(); ++i) {
        ch[i] = str[i];
    }
    ch[str.size()] = '\0'; // Add null terminator
    return ch;
}

double printRandom(double start, double step, double end) {
    // Create a random device and a random number generator
    static std::random_device rd;
    static std::mt19937 gen(rd());

    // Calculate the number of steps within the range
    int numSteps = static_cast<int>((end - start) / step);

    // Create a uniform integer distribution between 0 and the number of steps
    std::uniform_int_distribution<int> dis(0, numSteps);

    // Generate a random integer representing the step
    int randomStep = dis(gen);

    // Calculate the random value within the specified range
    double randomValue = start + randomStep * step;

    return randomValue;
}





/*
double printRandom() {
    // Create a random device
    static random_device rd;
    // Create a random number generator
    static mt19937 gen(rd());
    // Create a uniform distribution between 0 and 1
    uniform_real_distribution<double> dis(0.0, 1.0);
    // Generate and return a random number
    return dis(gen);
}
*/
