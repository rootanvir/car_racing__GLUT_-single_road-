#include <windows.h> // for MS Windows
#include <GL/glut.h> // GLUT, include glu.h and gl.h



void pineTree(double rootx,double rooty)
{

    glColor3f(0.561f, 0.376f, 0.125f);
    glBegin(GL_POLYGON);
    glVertex2f(rootx-0.01f, rooty);
    glVertex2f(rootx+0.01f, rooty);
    glVertex2f(rootx+0.01f, rooty+0.15f);
    glVertex2f(rootx-0.01f, rooty+0.15f);
    glEnd();

    glColor3f(0.075f,0.231f, 0.004f);
    glBegin(GL_POLYGON);
    glVertex2f(rootx+0.01f, rooty+0.15f);
    glVertex2f(rootx+0.1f, rooty+0.15f);
    glVertex2f(rootx, rooty+0.3f);
    glVertex2f(rootx-0.1f, rooty+0.15f);
    glEnd();

    glColor3f(0.122f, 0.38f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(rootx+0.01f, rooty+0.2f);
    glVertex2f(rootx+0.1f, rooty+0.2f);
    glVertex2f(rootx, rooty+0.4f);
    glVertex2f(rootx-0.1f, rooty+0.2f);
    glEnd();

    glColor3f(0.259f, 0.82f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(rootx+0.01f, rooty+0.25f);
    glVertex2f(rootx+0.1f, rooty+0.25f);
    glVertex2f(rootx, rooty+0.5f);
    glVertex2f(rootx-0.1f, rooty+0.25f);
    glEnd();

    glColor3f(0.337f,1.0f,0.004f);
    glBegin(GL_POLYGON);
    glVertex2f(rootx+0.01f, rooty+0.3f);
    glVertex2f(rootx+0.1f, rooty+0.3f);
    glVertex2f(rootx, rooty+0.55f);
    glVertex2f(rootx-0.1f, rooty+0.3f);
    glEnd();


}
