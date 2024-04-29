#include <windows.h> // for MS Windows
#include <GL/glut.h> // GLUT, include glu.h and gl.h

//GLfloat position = -0.88f;


void car(double x,double y,double R,double G,double B,char ch)
{
    //glPushMatrix();
    //glTranslatef(0.0f,position, 0.0f);

    double r=0.302, g=0.302, b=0.302;
    glColor3f(R, G, B);
    glBegin(GL_POLYGON);
    glVertex2f(-0.57f+x, -0.88f+y);

    glVertex2f(-0.55f+x, -0.91f+y);

    glVertex2f(-0.47f+x, -0.91f+y);

    glVertex2f(-0.46f+x, -0.88f+y);

    glVertex2f(-0.465f+x, -0.60f+y);
    if(ch=='1')
    {
        glColor3f(0.345, 0.62, 0.949);
    }
    else if(ch=='2')
    {
        glColor3f(1, 0.541, 0.541);
    }
    else
    {
        glColor3f(0.467, 1, 0.537);
    }

    glVertex2f(-0.48f+x, -0.54f+y);
    glVertex2f(-0.51f+x, -0.51f+y);
    glVertex2f(-0.55f+x, -0.54f+y);
    glVertex2f(-0.56f+x, -0.60f+y);
    glEnd();


    //LEFT

    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(-0.555f+x, -0.66f+y);
    glVertex2f(-0.545f+x, -0.71f+y);
    glColor3f(r,g,b);
    glVertex2f(-0.545f+x, -0.80f+y);
    glVertex2f(-0.555f+x, -0.75f+y);
    glEnd();




    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(-0.54f+x, -0.70f+y);
    glVertex2f(-0.49f+x, -0.70f+y);
    glColor3f(r,g,b);
    glVertex2f(-0.49f+x, -0.77f+y);
    glVertex2f(-0.54f+x, -0.77f+y);
    glEnd();

//RIGHTT

    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(-0.475f+x, -0.66f+y);
    glVertex2f(-0.485f+x, -0.71f+y);
    glColor3f(r,g,b);
    glVertex2f(-0.485f+x, -0.80f+y);
    glVertex2f(-0.475f+x, -0.75f+y);
    glEnd();


    //FRONT


    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(-0.49f+x, -0.69f+y);
    glVertex2f(-0.54f+x, -0.69f+y);
    glVertex2f(-0.55f+x, -0.65f+y);
    glColor3f(r,g,b);
    glVertex2f(-0.54f+x, -0.62f+y);
    glVertex2f(-0.52f+x, -0.60f+y);
    glVertex2f(-0.49f+x, -0.61f+y);
    glVertex2f(-0.48f+x, -0.64f+y);
    glEnd();


    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(-0.54f+x, -0.79f+y);
    glVertex2f(-0.49f+x, -0.79f+y);
    glVertex2f(-0.49f+x, -0.84f+y);
    glColor3f(r,g,b);
    glVertex2f(-0.50f+x, -0.88f+y);
    glVertex2f(-0.53f+x, -0.88f+y);
    glVertex2f(-0.54f+x, -0.84f+y);
    glEnd();



    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(-0.56f+x, -0.80f+y);
    glVertex2f(-0.56f+x, -0.88f+y);
    glVertex2f(-0.54f+x, -0.88f+y);
    glEnd();

    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(-0.47f+x, -0.79f+y);
    glVertex2f(-0.49f+x, -0.88f+y);
    glVertex2f(-0.47f+x, -0.87f+y);
    glEnd();

    glColor3f(1.0f, 1.0f, 1.0f);
    glBegin(GL_LINE_STRIP);
    glVertex2f(-0.49f+x, -0.54f+y);
    glVertex2f(-0.48f+x, -0.58f+y);
    glEnd();

    glColor3f(1.0f, 1.0f, 1.0f);
    glBegin(GL_LINE_STRIP);
    glVertex2f(-0.54f+x, -0.54f+y);
    glVertex2f(-0.55f+x, -0.58f+y);
    glEnd();


    glColor3f(1.0f, 1.0f, 1.0f);
    glBegin(GL_LINE_STRIP);
    glVertex2f(-0.55f+x, -0.89f+y);
    glVertex2f(-0.55f+x, -0.91f+y);
    glEnd();



    glColor3f(1.0f, 1.0f, 1.0f);
    glBegin(GL_LINE_STRIP);
    glVertex2f(-0.48f+x, -0.89f+y);
    glVertex2f(-0.48f+x, -0.91f+y);
    glEnd();
    //glPopMatrix();


}
