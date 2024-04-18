#include <windows.h> // for MS Windows
#include <GL/glut.h> // GLUT, include glu.h and gl.h


void lake()
{


    glColor3f(0.29f,0.71f, 0.91f);
    glBegin(GL_POLYGON);
    glVertex2f(-1.00f, -0.91f);
    glVertex2f(-0.92f, -0.89f);
    glVertex2f(-0.85f, -0.75f);
    glVertex2f(-0.84f, -0.55f);
    glVertex2f(-0.89f, -0.36f);
    glVertex2f(-1.00f, -0.32f);
    glEnd();

    glColor3f(0.29f,0.71f, 0.91f);
    glBegin(GL_POLYGON);
    glVertex2f(1.00f, 0.88f);
    glVertex2f(0.93f, 0.84f);
    glVertex2f(0.87f, 0.75f);
    glVertex2f(0.86f, 0.63f);
    glVertex2f(0.86f, 0.48f);
    glVertex2f(0.89f, 0.36f);
    glVertex2f(0.95f, 0.33f);
    glVertex2f(1.00f, 0.30f);
    glEnd();

        glColor3f(0.0f,0.0f, 0.0f);
    glBegin(GL_LINE_STRIP);
    glVertex2f(1.00f, 0.88f);
    glVertex2f(0.93f, 0.84f);
    glVertex2f(0.87f, 0.75f);
    glVertex2f(0.86f, 0.63f);
    glVertex2f(0.86f, 0.48f);
    glVertex2f(0.89f, 0.36f);
    glVertex2f(0.95f, 0.33f);
    glVertex2f(1.00f, 0.30f);
    glEnd();

}
