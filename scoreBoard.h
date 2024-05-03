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
bool car2Collision();

GLfloat obstaclePosX = 0.5f;
GLfloat obstaclePosY = 2.0f;



double distanceOfCar=0.0f;
double displacement =0.02f;
char numString[10];

int heartCount=3;


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
void BoardRight()
{
    glBegin(GL_POLYGON);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-0.65f,1.0);
    glVertex2f(-1.0f,1.0f);
    glVertex2f(-1.0f,0.7);
    glVertex2f(-0.65f,0.7);
    glEnd();
}
void rightScoreBoard()
{
    BoardLeft();
    iconFuel(0.0,0.0);
    thunder(0.0,0.0);
    double pos=0.0f; // Move the declaration outside of the loop
    if(heartCount>3)
    {
        heartCount=3;
    }


    for(int i=0; i<heartCount; i++)
    {
        heart(pos,0.0f);
        pos+=0.05f; // Update the position here

    }


    fuelStatus(0,0);
    char c[]="Distance ";
    char km[]="km";

    renderBitmapString(0.78,0.75,0.0,GLUT_BITMAP_TIMES_ROMAN_24,c);
    renderBitmapString(0.88,0.75,0.0,GLUT_BITMAP_TIMES_ROMAN_24,numString);
    renderBitmapString(0.96,0.75,0.0,GLUT_BITMAP_TIMES_ROMAN_24,km);

}
void leftScoreBoard(double x,double y)
{
    BoardRight();
    iconFuel(x,y);
    thunder(x,y);
    heart(x,y);
    fuelStatus(x,y);


}
void updateDistance(int value)
{
    distanceOfCar += displacement; // Increment distanceOfCar by displacement

    sprintf(numString, "%.2f", distanceOfCar);
    //cout << numString << endl;
    glutPostRedisplay();

    // Call glutTimerFunc again to keep updating the distance periodically
    glutTimerFunc(500, updateDistance, 0);

}
void scoreBoardUpdate(int value)
{
//cout<<obstaclePosY<<" "<<heartCount<<""<<(obstaclePosY<0.0f)<<endl;
    if(obstaclePosY==-1.45f)
    {
        heartCount--;
    }

    glutPostRedisplay();
    glutTimerFunc(300, scoreBoardUpdate, 0);

}
void scoreBoard()
{
    rightScoreBoard();
    leftScoreBoard(-1.65,0.0);
    //scoreBoardRight();
}
