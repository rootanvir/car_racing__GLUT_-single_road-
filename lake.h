#include <windows.h> // for MS Windows
#include <GL/glut.h> // GLUT, include glu.h and gl.h



void lake1(double x,double y)
{
    glColor3f(0.29f,0.71f, 0.91f);
    glBegin(GL_POLYGON);
    glVertex2f(-1.00f+x, -0.91f+y);
    glVertex2f(-0.92f+x, -0.89f+y);
    glVertex2f(-0.85f+x, -0.75f+y);
    glVertex2f(-0.84f+x, -0.55f+y);
    glVertex2f(-0.89f+x, -0.36f+y);
    glVertex2f(-1.00f+x, -0.32f+y);
    glEnd();
    glLineWidth(5.0f);
        glColor3f(0.0f,0.0f, 0.0f);
    glBegin(GL_LINE_STRIP);
    glVertex2f(-1.00f+x, -0.91f+y);
    glVertex2f(-0.92f+x, -0.89f+y);
    glVertex2f(-0.85f+x, -0.75f+y);
    glVertex2f(-0.84f+x, -0.55f+y);
    glVertex2f(-0.89f+x, -0.36f+y);
    glVertex2f(-1.00f+x, -0.32f+y);
    glEnd();



}
void lake2(double x,double y)
{


        glColor3f(0.29f,0.71f, 0.91f);
    glBegin(GL_POLYGON);
    glVertex2f(1.00f, 0.88f+y);
    glVertex2f(0.93f, 0.84f+y);
    glVertex2f(0.87f, 0.75f+y);
    glVertex2f(0.86f, 0.63f+y);
    glVertex2f(0.86f, 0.48f+y);
    glVertex2f(0.89f, 0.36f+y);
    glVertex2f(0.95f, 0.33f+y);
    glVertex2f(1.00f, 0.30f+y);
    glEnd();


    glLineWidth(5.0f);
    glColor3f(0.0f,0.0f, 0.0f);
    glBegin(GL_LINE_STRIP);
    glVertex2f(1.00f, 0.88f+y);
    glVertex2f(0.93f, 0.84f+y);
    glVertex2f(0.87f, 0.75f+y);
    glVertex2f(0.86f, 0.63f+y);
    glVertex2f(0.86f, 0.48f+y);
    glVertex2f(0.89f, 0.36f+y);
    glVertex2f(0.95f, 0.33f+y);
    glVertex2f(1.00f, 0.30f+y);
    glEnd();

}
