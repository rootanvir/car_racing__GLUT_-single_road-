#include <bits/stdc++.h>
#include <windows.h> // for MS Windows
#include <GL/glut.h> // GLUT, include glu.h and gl.h
#include <cstdio>


#include "road.h"
#include "tree.h"
#include "lake.h"
#include "building.h"
#include "lampost.h"
#include "car.h"
#include "animation.h"
#include "text.h"
#include "carKeyboard.h"
#include "scoreBoard.h"
#include "iconPack.h"
#include "EssentialFunction.h"
#include "group.h"
#include "StartingPage.h"
#include "sound.h"

using namespace std;

void display()
{
    glClearColor(0.156f,0.61f,0.337f, 0.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer (background)
    roadSurface();
    scenarioAnimation();
    car1();
    car2();
    police();
    scoreBoard();
    glFlush();
}

void startDisplay()
{
    glClearColor(0.156f,0.61f,0.337f, 0.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer (background)
    startingPage();
    glFlush();
}

/* Main function: GLUT runs as a console application starting at main() */
int main(int argc, char** argv)
{

initMenuSound();
    /////////////
    glutInit(&argc, argv);
    cout<<"Loading...."<<endl;
    Sleep(1000);
    cout<<"glut initialized"<<endl;
    Sleep(200);
    glutInitWindowSize(640, 480); // Set the window's initial width & height
    glutInitWindowPosition(300, 300);  // Set the window's initial position according to the monitor
    glutCreateWindow("Car Racing"); // Create a window with the given title
    // Register display callback handler for window re-paint
    if(isInStart)
    {

        glutDisplayFunc(startDisplay);
        glutTimerFunc(300,updateMovingCarInStart,0);
        glutSpecialFunc(specialKeysStart);
        glutKeyboardFunc(keyboard);
        isInStart=true;

    }
   else
    {
        cout<<"2nsd"<<endl;
        glutDisplayFunc(display);
        glutTimerFunc(100, update, 0);
        glutTimerFunc(100, update2, 0);
        glutTimerFunc(100, carUpdate, 0);
        glutTimerFunc(300, updatePolice, 0);
        glutTimerFunc(300, updateObstacle, 0);
        glutTimerFunc(300, updateFuel, 0);
        glutTimerFunc(300,updateDistance,0);
        glutTimerFunc(100, updateCarControl1, 0);
        glutTimerFunc(100, updateCarControl2, 0);
        glutSpecialFunc(specialKeys);
        glutKeyboardFunc(handleKeypress);
        isInStart=false;
    }
    Sleep(200);
    cout<<"display initialized"<<endl;
    glutMainLoop();



    return 0;
}
