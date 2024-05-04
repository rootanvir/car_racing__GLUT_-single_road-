#include <windows.h> // for MS Windows
#include <GL/glut.h> // GLUT, include glu.h and gl.h
void renderBitmapString(float x, float y, float z, void* font,  char* string);
//GLfloat position = -0.88f;
bool isRed=true;
bool isBlue=true;

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
    if(ch=='1')
    {
        char ch1[]="01";
        renderBitmapString(-0.525f+x, -0.75f+y,0.0f, GLUT_BITMAP_TIMES_ROMAN_24, ch1);
    }
    else if(ch=='2')
    {
        char ch1[]="02";
        renderBitmapString(-0.525f+x, -0.75f+y,0.0f, GLUT_BITMAP_TIMES_ROMAN_24, ch1);
    }


}



void police_car(double x,double y)
{
    double r=0.302, g=0.302, b=0.302;
    //glColor3f(0.678, 0.678, 0.678);
    glColor3f(0.749, 0.749, 0.749);
    glBegin(GL_POLYGON);
    //glVertex2f(-0.56f+x, -0.88f+y);

    glVertex2f(-0.555f+x, -0.91f+y);

    glVertex2f(-0.475f+x, -0.91f+y);

    // glVertex2f(-0.45f+x, -0.88f+y);

    glVertex2f(-0.475f+x, -0.60f+y);

    glVertex2f(-0.48f+x, -0.54f+y);
    glColor3f(1.0, 1.0, 1.0);
    glVertex2f(-0.51f+x, -0.52f+y);
    //glColor3f(1.0,1.0,1.0);

    glVertex2f(-0.55f+x, -0.54f+y);

    glVertex2f(-0.555f+x, -0.60f+y);

    glEnd();


    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(-0.555f+x, -0.66f+y);
    glVertex2f(-0.545f+x, -0.71f+y);
    glColor3f(r,g,b);
    glVertex2f(-0.545f+x, -0.80f+y);

    glVertex2f(-0.555f+x, -0.75f+y);

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
    glVertex2f(-0.54f+x, -0.81f+y);
    glVertex2f(-0.49f+x, -0.81f+y);
    glVertex2f(-0.48f+x, -0.86f+y);
    glColor3f(r,g,b);
    //glVertex2f(-0.50f+x, -0.88f+y);
    //glVertex2f(-0.53f+x, -0.88f+y);
    glVertex2f(-0.55f+x, -0.86f+y);
    glEnd();




    ////siren
    if(isRed)
    {
        glColor3f(0.0f, 0.0f, 1.0f);
    }
    else
    {
        glColor3f(1.0f, 0.0f, 0.0f);
    }

    glBegin(GL_POLYGON);
    glVertex2f(-0.54f+x, -0.73f+y);
    glVertex2f(-0.52f+x, -0.73f+y);
    glVertex2f(-0.52f+x, -0.76f+y);
    glVertex2f(-0.54f+x, -0.76f+y);
    glEnd();

    if(isBlue)
    {
        glColor3f(1.0f, 0.0f, 0.0f);
    }
    else
    {
        glColor3f(0.0f, 0.0f, 1.0f);
    }

    glBegin(GL_POLYGON);
    glVertex2f(-0.51f+x, -0.73f+y);
    glVertex2f(-0.49f+x, -0.73f+y);
    glVertex2f(-0.49f+x, -0.76f+y);
    glVertex2f(-0.51f+x, -0.76f+y);
    glEnd();



    /*
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
        glEnd();*/


    glColor3f(0.969, 0.745, 0.024);
    glBegin(GL_LINE_STRIP);
    glVertex2f(-0.49f+x, -0.54f+y);
    glVertex2f(-0.48f+x, -0.58f+y);
    glEnd();


    glColor3f(0.969, 0.745, 0.024);
    glBegin(GL_LINE_STRIP);
    glVertex2f(-0.54f+x, -0.54f+y);
    glVertex2f(-0.55f+x, -0.58f+y);
    glEnd();


    glColor3f(1.0f, 0.0f, 0.0f);
    glBegin(GL_LINE_STRIP);
    glVertex2f(-0.55f+x, -0.89f+y);
    glVertex2f(-0.55f+x, -0.91f+y);
    glEnd();



    glColor3f(1.0f, 0.0f, 0.0f);
    glBegin(GL_LINE_STRIP);
    glVertex2f(-0.48f+x, -0.89f+y);
    glVertex2f(-0.48f+x, -0.91f+y);
    glEnd();
    //glPopMatrix();
}

void truck(double x,double y)
{

    glColor3f(0.659, 0.506, 0.09); // Maroon color
    glBegin(GL_POLYGON);
    glVertex2f(-0.05f+x, 0.01f+y);
    glVertex2f(-0.05f+x, -0.04f+y);
    glVertex2f(0.04f+x, -0.05f+y);
    glVertex2f(0.04f+x, 0.02f+y);
    glEnd();

    glColor3f(0.984, 0.804, 0.318);
    glBegin(GL_POLYGON);
    glVertex2f(-0.08f+x, -0.01f+y);
    glVertex2f(0.06f+x, -0.01f+y);
    glColor3f(0.761, 0.561, 0.012);
    glVertex2f(0.06f+x, 0.15f+y);
    glVertex2f(0.04f+x, 0.17f+y);
    glVertex2f(-0.06f+x, 0.17f+y);
    glVertex2f(-0.08f+x, 0.15f+y);
    glEnd();

    glColor3f(0.933, 0.941, 0.937);
    glBegin(GL_POLYGON);
    glVertex2f(-0.08f+x, -0.51f+y);
    glColor3f(0.322, 0.322, 0.322);
    glVertex2f(0.06f+x, -0.51f+y);
    glVertex2f(0.06f+x, -0.02f+y);
    glVertex2f(-0.08f+x, -0.02f+y);
    glEnd();


    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(-0.07f+x, 0.01f+y);
    glVertex2f(-0.06f+x, 0.01f+y);
    glVertex2f(-0.06f+x, 0.08f+y);
    glColor3f(0.812, 0.812, 0.812);
    glVertex2f(-0.07f+x, 0.09f+y);
    glEnd();

    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(0.04f+x, 0.01f+y);
    glColor3f(0.812, 0.812, 0.812);
    glVertex2f(0.05f+x, 0.01f+y);
    glVertex2f(0.05f+x, 0.09f+y);
    glVertex2f(0.04f+x, 0.07f+y);
    glEnd();


    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(-0.06f+x, 0.14f+y);
    glVertex2f(0.04f+x, 0.14f+y);
    glVertex2f(0.03f+x, 0.11f+y);
    glColor3f(0.812, 0.812, 0.812);
    glVertex2f(-0.05f+x, 0.11f+y);
    glEnd();


    glLineWidth(5);
    glColor3f(1.0f, 1.0f, 1.0f);
    glBegin(GL_LINE_STRIP);
    glVertex2f(-0.06f+x, 0.16f+y);
    glVertex2f(-0.04f+x, 0.16f+y);
    glEnd();


    glLineWidth(5);
    glColor3f(1.0f, 1.0f, 1.0f);
    glBegin(GL_LINE_STRIP);
    glVertex2f(0.02f+x, 0.16f+y);
    glVertex2f(0.04f+x, 0.16f+y);
    glEnd();


    /*
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f(-0.04+x, 0.09f+y);
    glVertex2f(-0.04+x, 0.03f+y);
    glColor3f(1.0, 1.0, 1.0);
    glVertex2f(0.03f+x, 0.03f+y);
    glVertex2f(0.03f+x, 0.09f+y);
    glEnd();        */


}




void normal_car(double x,double y)
{
    double r=0.302, g=0.302, b=0.302;
    //glColor3f(0.678, 0.678, 0.678);
    glColor3f(1.0f, 1.0f, 0.0f);
    glBegin(GL_POLYGON);
    //glVertex2f(-0.56f+x, -0.88f+y);

    glVertex2f(-0.555f+x, -0.91f+y);

    glVertex2f(-0.475f+x, -0.91f+y);

    // glVertex2f(-0.45f+x, -0.88f+y);

    glVertex2f(-0.475f+x, -0.60f+y);

    glVertex2f(-0.48f+x, -0.54f+y);
    glColor3f(1.0, 1.0, 1.0);
    glVertex2f(-0.51f+x, -0.52f+y);
    //glColor3f(1.0,1.0,1.0);

    glVertex2f(-0.55f+x, -0.54f+y);

    glVertex2f(-0.555f+x, -0.60f+y);

    glEnd();


    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(-0.555f+x, -0.66f+y);
    glVertex2f(-0.545f+x, -0.71f+y);
    glColor3f(r,g,b);
    glVertex2f(-0.545f+x, -0.80f+y);

    glVertex2f(-0.555f+x, -0.75f+y);

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
    glVertex2f(-0.54f+x, -0.81f+y);
    glVertex2f(-0.49f+x, -0.81f+y);
    glVertex2f(-0.48f+x, -0.86f+y);
    glColor3f(r,g,b);
    //glVertex2f(-0.50f+x, -0.88f+y);
    //glVertex2f(-0.53f+x, -0.88f+y);
    glVertex2f(-0.55f+x, -0.86f+y);
    glEnd();








    /*
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
        glEnd();*/


    glColor3f(0.969, 0.745, 0.024);
    glBegin(GL_LINE_STRIP);
    glVertex2f(-0.49f+x, -0.54f+y);
    glVertex2f(-0.48f+x, -0.58f+y);
    glEnd();


    glColor3f(0.969, 0.745, 0.024);
    glBegin(GL_LINE_STRIP);
    glVertex2f(-0.54f+x, -0.54f+y);
    glVertex2f(-0.55f+x, -0.58f+y);
    glEnd();


    glColor3f(1.0f, 0.0f, 0.0f);
    glBegin(GL_LINE_STRIP);
    glVertex2f(-0.55f+x, -0.89f+y);
    glVertex2f(-0.55f+x, -0.91f+y);
    glEnd();



    glColor3f(1.0f, 0.0f, 0.0f);
    glBegin(GL_LINE_STRIP);
    glVertex2f(-0.48f+x, -0.89f+y);
    glVertex2f(-0.48f+x, -0.91f+y);
    glEnd();
    //glPopMatrix();
}

