#include <windows.h> // for MS Windows
#include <GL/glut.h> // GLUT, include glu.h and gl.h
#include<cstdio>
#include "merging.h"

GLfloat position = 1.0f;
GLfloat speed = 0.05f;

GLfloat position2 = 0.0f;
GLfloat speed2 = 0.05f;

GLfloat carPos = 0.0f;
GLfloat carSpeed = 0.003f;

void update(int value)
{
    if(position < -1.0f)
        position = 1.0f;
    position -= speed;

    glutPostRedisplay();
    glutTimerFunc(50, update, 0);
}
void update2(int value)
{
    if(position2 < -3.01f)
        position2 = 0.0f;
    position2 -= speed2;

    glutPostRedisplay();
    glutTimerFunc(50, update2,0);
}
void carUpdate(int value)
{
    if(carPos > 0.03f)
        carPos -= carSpeed;
    else if(carPos>-0.03f)
        carPos += carSpeed;


    glutPostRedisplay();
    glutTimerFunc(100, carUpdate,0);
}

void scenarioAnimation()
{
    glPushMatrix();
    glTranslatef(0.0f, position, 0.0f);
    roadDashed();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.0f, position, 0.0f);
    roadSide();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.0f, position, 0.0f);
    lamps();
    glPopMatrix();

////left
    glPushMatrix();
    glTranslatef(0.0f, position2, 0.0f);
    lake1(0.0,0.0);


    building(-0.96,0.8f);
    building(-0.90,0.4f);
    building(-0.95,0.0f);

    building(-0.96,3.83f);
    building(-0.90,3.43f);
    building(-0.95,3.03f);
    lake1(0.0,3.03);
    pineTree(-0.97f, 2.727);
    pineTree(-0.8f, 2.25);
    pineTree(-0.95f, 2.05);
    pineTree(-0.8f, -0.77f);
    pineTree(-0.95f, -0.97f);
    pineTree(-0.97f, -0.3f);
    glPopMatrix();


////right
////right
    glPushMatrix();
    glTranslatef(0.0f, position2, 0.0f);
    lake2(0.0, 1.8);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0.0f, position2, 0.0f);

    building(0.96,0.8f);
    building(0.90,0.4f);
    building(0.95,0.0f);

    building(0.96,3.83f);
    building(0.90,3.43f);
    building(0.95,3.03f);
    lake2(0.0, -1.255f);
    pineTree(0.97f, 2.727);
    pineTree(0.8f, 2.25);
    pineTree(0.95f, 2.05);
    pineTree(0.8f, -0.77f);
    pineTree(0.95f, -0.97f);
    pineTree(0.97f, -0.3f);


    glPopMatrix();


}
void carShaking()
{
    glPushMatrix();
    glTranslatef(carPos,0.0f, 0.0f);
    car(0.0f,0.0f,0.173, 0.043, 0.671,'1');
    car(0.5f,0.0f,1, 0, 0,'2');
    car(1.0f,0.0,0.024, 0.722, 0.114,'3');

    glPopMatrix();
}
