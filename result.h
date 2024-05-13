#include<cstdio>
#include <bits/stdc++.h>
#include <GL/gl.h>
#include <GL/glut.h>
using namespace std;
int winner=0;
char* doubleToCharArray(double value);
double dis;
void tropy(double x, double y, double s)
{
    glBegin(GL_QUADS);
    glColor3f(235.0f, 205.0f, 0.0f);
    glVertex2f((0.0272f + x) * s, (0.2957f + y) * s);
    glVertex2f((0.0785f + x) * s, (0.2957f + y) * s);
    glVertex2f((0.0786f + x) * s, (0.2533f + y) * s);
    glVertex2f((0.0272f + x) * s, (0.2535f + y) * s);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(235.0f, 205.0f, 0.0f);
    glVertex2f((0.0272f + x) * s, (0.2535f + y) * s);
    glVertex2f((0.0786f + x) * s, (0.2533f + y) * s);
    glVertex2f((0.0656f + x) * s, (0.24f + y) * s);
    glVertex2f((0.0409f + x) * s, (0.24f + y) * s);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(235.0f, 205.0f, 0.0f);
    glVertex2f((0.0453f + x) * s, (0.24f + y) * s);
    glVertex2f((0.0624f + x) * s, (0.24f + y) * s);
    glVertex2f((0.06249f + x) * s, (0.1403f + y) * s);
    glVertex2f((0.0453f + x) * s, (0.1403f + y) * s);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(235.0f, 205.0f, 0.0f);
    glVertex2f((0.0453f + x) * s, (0.1403f + y) * s);
    glVertex2f((0.06249f + x) * s, (0.1403f + y) * s);
    glVertex2f((0.07197f + x) * s, (0.1305f + y) * s);
    glVertex2f((0.0375f + x) * s, (0.13f + y) * s);
    glEnd();

    glLineWidth(10.0f);
    glBegin(GL_LINE_STRIP);
    glColor3f(235.0f, 205.0f, 0.0f);
    glVertex2f((0.078f + x) * s, (0.27f + y) * s);
    glVertex2f((0.1f + x) * s, (0.27f + y) * s);
    glVertex2f((0.05f + x) * s, (0.15f + y) * s);
    glEnd();

    glLineWidth(10.0f);
    glBegin(GL_LINE_STRIP);
    glColor3f(235.0f, 205.0f, 0.0f);
    glVertex2f((0.078f + x) * s, (0.27f + y) * s);
    glVertex2f((-0.00006f + x) * s, (0.27f + y) * s);
    glVertex2f((0.05f + x) * s, (0.15f + y) * s);
    glEnd();
}



void resultDisplay()
{
    glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer (background)
    glClearColor(0.0f,0.0f,0.0f,0.0f); // Set background color to black and opaque
    tropy(0.0,-0.1,4.0f);
    if(winner==1)
    {
        char c[]="Player 1 won the race\n";
        glColor3f(1.0,1.0,1.0);
        renderBitmapString(0.0f, -0.2f, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24, c);
        for(double i=-1.0f;i<1.0f;i+=0.1)
        {
            renderBitmapString(-0.6f, i, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24, c);
            renderBitmapString(-0.3f, i, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24, c);
            renderBitmapString(-1.0f, i, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24, c);
            renderBitmapString(0.5f, i, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24, c);
        }
        car(0.7,0.0,0.0f,0.0f,1.0f,'1');
    }
    else
    {
        char c[]="Player 2 won the race\n";
        glColor3f(1.0,1.0,1.0);
        renderBitmapString(0.0f, -0.2f, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24, c);
        for(double i=-1.0f;i<1.0f;i+=0.1)
        {
            renderBitmapString(-0.6f, i, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24, c);
            renderBitmapString(-0.3f, i, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24, c);
            renderBitmapString(-1.0f, i, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24, c);
            renderBitmapString(0.5f, i, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24, c);
        }
        car(0.7,0.0,1.0f,0.0f,0.0f,'2');
    }

    char ch[]="Shift+x to exit";
    glColor3f(1.0,0.0,0.0);
    renderBitmapString(0.8f, .9f, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24, ch);
    glFlush();
}

void resultChecker(int value)
{
    if(winner==0)
    {
        if(heartCount1==0||heartCount2==0)
        {
            if(heartCount1==0)
            {
                winner=2;
            }
            else
            {
                winner=1;
            }

            PLAY=false;
            glutDisplayFunc(resultDisplay);
        }
        dis=distanceOfCar;
    }


    glutTimerFunc(100, resultChecker,0);
    glutPostRedisplay();
}
