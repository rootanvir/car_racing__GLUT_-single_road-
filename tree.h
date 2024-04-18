#include <windows.h> // for MS Windows
#include <GL/glut.h> // GLUT, include glu.h and gl.h

void tree(double root)
{

    glColor3f(1.0f, 1.0f, 1.0f);
    glBegin(GL_POLYGON);
    glVertex2f(-0.86f, -0.92f);
    glVertex2f(-0.83f, -0.92f);
    glVertex2f(-0.83f, -0.80f);
    glVertex2f(-0.86f, -0.80f);
    glEnd();


    glColor3f(1.0f, 1.0f, 1.0f);
    glBegin(GL_POLYGON);
    glVertex2f(-0.90f, -0.80f);
    glVertex2f(-0.79f, -0.80f);
    glVertex2f(-0.84f, -0.62f);
    glEnd();
}
