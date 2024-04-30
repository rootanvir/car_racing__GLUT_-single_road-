#include <windows.h> // for MS Windows
#include <GL/glut.h> // GLUT, include glu.h and gl.h
#include<bits/stdc++.h>
#include<string.h>
using namespace std;
char* strToChar(const std::string& str);
void iconFuel(double x,double y);
void heart(double x,double y);
void thunder(double x,double y);
void fuelStatus(double x,double y);

char chDistance[10]="0.0 km";

GLfloat distanceCar=0.0f;
GLfloat displacement =0.1f;

void BoardLeft()
{
    glBegin(GL_POLYGON);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(0.65f,1.0f);
    glVertex2f(1.0f,1.0f);
    glVertex2f(1.0f,0.7f);
    glVertex2f(0.65f,0.7f);
    glEnd();
}
void BoardRight(){
    glBegin(GL_POLYGON);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-0.65f,1.0);
    glVertex2f(-1.0f,1.0f);
    glVertex2f(-1.0f,0.7);
    glVertex2f(-0.65f,0.7);
    glEnd();
}
void leftScoreBoard()
{
    BoardLeft();
    iconFuel(0.0,0.0);
    thunder(0.0,0.0);
    heart(0.0,0.0);
    heart(0.05,0.0);
    heart(0.1,0.0);
    fuelStatus(0,0);
    char c[]="Distance: ";
    renderBitmapString(0.81,0.75,0.0,GLUT_BITMAP_TIMES_ROMAN_24,c);
    renderBitmapString(0.92,0.75,0.0,GLUT_BITMAP_TIMES_ROMAN_24,chDistance);

}
void rightScoreBoard(double x,double y)
{
    BoardRight();
    iconFuel(x,y);
    thunder(x,y);
    heart(x,y);
    heart(x,y);
    heart(x,y);
    fuelStatus(x,y);
}
void updateDistance(int value)
{
    distanceCar+=displacement;
    //chDistance=strToChar("1");

    glutPostRedisplay();
    glutTimerFunc(800, updateDistance, 0);

}
void scoreBoard()
{
    leftScoreBoard();
    rightScoreBoard(-1.65,0.0);
    //scoreBoardRight();
}
