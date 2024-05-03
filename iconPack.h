#include <windows.h> // for MS Windows
#include <GL/glut.h> // GLUT, include glu.h and gl.h

GLfloat fuelX=0.0f;
GLfloat decrease=0.005f;





void iconFuel(double x,double y)
{
    glLineWidth(8);
    glBegin(GL_LINE_STRIP);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(0.68f+x, 0.96f+y);
    glVertex2f(0.67f+x, 0.99f+y);
    glEnd();



    glLineWidth(8);
    glBegin(GL_LINE_STRIP);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(0.66f+x, 0.97f+y);
    glVertex2f(0.67f+x, 0.99f+y);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f,0.0f,0.0f);
    glVertex2f(0.66f+x, 0.96f+y);
    glVertex2f(0.68f+x, 0.98f+y);
    glVertex2f(0.69f+x, 0.99f+y);
    glVertex2f(0.69f+x, 0.92f+y);
    glVertex2f(0.66f+x, 0.92f+y);
    glEnd();

    glLineWidth(8);
    glBegin(GL_LINE_STRIP);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(0.67f+x, 0.96f+y);
    glVertex2f(0.685f+x, 0.96f+y);
    glEnd();



}

void thunder(double x,double y)
{
    glBegin(GL_POLYGON);
    glColor3f(1.0f,1.0f,0.0f);
    glVertex2f(0.67f+x, 0.80f+y);
    glVertex2f(0.685f+x, 0.80f+y);
    glVertex2f(0.68f+x, 0.78f+y);
    glVertex2f(0.68f+x, 0.77f+y);
    glVertex2f(0.67f+x, 0.77f+y);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(1.0f,1.0f,0.0f);
    glVertex2f(0.68f+x, 0.78f+y);
    glVertex2f(0.69f+x, 0.78f+y);
    glVertex2f(0.67f+x, 0.73f+y);
    glEnd();
}

void heart(double x,double y)
{



    glBegin(GL_POLYGON);
    glColor3f(1.0f,0.0f,0.0f);
    glVertex2f(0.68f+x, 0.88f+y);
    glVertex2f(0.69f+x, 0.89f+y);
    glVertex2f(0.70f+x, 0.89f+y);
    glVertex2f(0.70f+x, 0.87f+y);
    glVertex2f(0.69f+x, 0.84f+y);
    glVertex2f(0.68f+x, 0.83f+y);
    glVertex2f(0.67f+x, 0.84f+y);
    glVertex2f(0.66f+x, 0.87f+y);
    glVertex2f(0.66f+x, 0.89f+y);
    glVertex2f(0.67f+x, 0.89f+y);
    glEnd();
}
void fuelStatus(double x,double y)
{
    glBegin(GL_POLYGON);
    glColor3f(0.0f,1.0f,0.0f);
    glVertex2f(0.72f+x, 0.985f+y);
    glVertex2f(0.72f+x, 0.92f+y);
    glVertex2f(0.99f+x+fuelX, 0.92f+y);
    glVertex2f(0.99f+x+fuelX, 0.985f+y);
    glEnd();
}

void updateFuel(int value)
{
    if(fuelX>-0.25f)
    {
        fuelX-=decrease;
    }
    else
    {
        fuelX=0.0f;
    }

    glutPostRedisplay();
    glutTimerFunc(500, updateFuel,0);
}

void allIcon() {

    iconFuel(0.0,0.0);
    thunder(0.0,0.0);
    heart(0.0,0.0);
    heart(0.05,0.0);
    heart(0.1,0.0);
    fuelStatus(0.0,0.0);
}
