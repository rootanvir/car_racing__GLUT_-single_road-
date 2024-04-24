#include <windows.h> // for MS Windows
#include <GL/glut.h> // GLUT, include glu.h and gl.h
#include "road.h"
#include "tree.h"
#include "lake.h"
#include "building.h"
#include "lampost.h"
#include "car.h"
#include "animation.h"
#include "merging.h"
#include "text.h"
#include "carKeyboard.h"

using namespace std;



void display()
{
    glClearColor(0.156f,0.61f,0.337f, 0.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer (background)
    roadSurface();
    scenarioAnimation();
    car1();
    car2();
    glFlush();
}

/* Main function: GLUT runs as a console application starting at main() */
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitWindowSize(640, 480); // Set the window's initial width & height
    glutInitWindowPosition(80, 50);  // Set the window's initial position according to the monitor
    glutCreateWindow("Car Racing"); // Create a window with the given title
    glutDisplayFunc(display); // Register display callback handler for window re-paint
    glutTimerFunc(100, update, 0);
    glutTimerFunc(100, update2, 0);
    glutTimerFunc(100, carUpdate, 0);

    glutTimerFunc(100, updateCarControl1, 0);
    glutTimerFunc(100, updateCarControl2, 0);

    glutSpecialFunc(specialKeys);
    glutKeyboardFunc(handleKeypress);

    glutMainLoop(); // Enter the event-processing loop
    return 0;
}
