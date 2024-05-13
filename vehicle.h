#include <windows.h> // for MS Windows
#include <GL/glut.h> // GLUT, include glu.h and gl.h
void renderBitmapString(float x, float y, float z, void* font,  char* string);
//GLfloat position = -0.88f;
bool isRed=true;
bool isBlue=true;


void truckSound();



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
    //truckSound();

    glColor3f(0.659, 0.506, 0.09); // Maroon color
    glBegin(GL_POLYGON);
    glVertex2f(-0.05f-0.5+x, 0.01f+y);
    glVertex2f(-0.05f-0.5+x, -0.04f+y);
    glVertex2f(0.04f-0.5+x, -0.05f+y);
    glVertex2f(0.04f-0.5+x, 0.02f+y);
    glEnd();

    glColor3f(0.984, 0.804, 0.318);
    glBegin(GL_POLYGON);
    glVertex2f(-0.08f-0.5+x, -0.01f+y);
    glVertex2f(0.06f-0.5+x, -0.01f+y);
    glColor3f(0.761, 0.561, 0.012);
    glVertex2f(0.06f-0.5+x, 0.15f+y);
    glVertex2f(0.04f-0.5+x, 0.17f+y);
    glVertex2f(-0.06f-0.5+x, 0.17f+y);
    glVertex2f(-0.08f-0.5+x, 0.15f+y);
    glEnd();

    glColor3f(0.933, 0.941, 0.937);
    glBegin(GL_POLYGON);
    glVertex2f(-0.08f-0.5+x, -0.51f+y);
    glColor3f(0.322, 0.322, 0.322);
    glVertex2f(0.06f-0.5+x, -0.51f+y);
    glVertex2f(0.06f-0.5+x, -0.02f+y);
    glVertex2f(-0.08f-0.5+x, -0.02f+y);
    glEnd();


    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(-0.07f-0.5+x, 0.01f+y);
    glVertex2f(-0.06f-0.5+x, 0.01f+y);
    glVertex2f(-0.06f-0.5+x, 0.08f+y);
    glColor3f(0.812, 0.812, 0.812);
    glVertex2f(-0.07f-0.5+x, 0.09f+y);
    glEnd();

    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(0.04f-0.5+x, 0.01f+y);
    glColor3f(0.812, 0.812, 0.812);
    glVertex2f(0.05f-0.5+x, 0.01f+y);
    glVertex2f(0.05f-0.5+x, 0.09f+y);
    glVertex2f(0.04f-0.5+x, 0.07f+y);
    glEnd();


    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(-0.06f-0.5+x, 0.14f+y);
    glVertex2f(0.04f-0.5+x, 0.14f+y);
    glVertex2f(0.03f-0.5+x, 0.11f+y);
    glColor3f(0.812, 0.812, 0.812);
    glVertex2f(-0.05f-0.5+x, 0.11f+y);
    glEnd();


    glLineWidth(5);
    glColor3f(1.0f, 1.0f, 1.0f);
    glBegin(GL_LINE_STRIP);
    glVertex2f(-0.06f-0.5+x, 0.16f+y);
    glVertex2f(-0.04f-0.5+x, 0.16f+y);
    glEnd();


    glLineWidth(5);
    glColor3f(1.0f, 1.0f, 1.0f);
    glBegin(GL_LINE_STRIP);
    glVertex2f(0.02f-0.5+x, 0.16f+y);
    glVertex2f(0.04f-0.5+x, 0.16f+y);
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

void roadBlock(double x, double y, double scale)
{
    glBegin(GL_QUADS);
    glColor3f(0.3f,0.0f,0.0f);
    glVertex2f(-0.088f* scale + x,0.101f * scale + y);
    glVertex2f(0.10478f* scale + x,0.101652f * scale + y);
    glVertex2f(0.109f* scale + x,0.06768f * scale + y);
    glVertex2f(-0.09377f* scale + x,0.069234f * scale + y);
    glEnd();


    glBegin(GL_QUADS);
    glColor3f(235.0f,205.0f,0.0f);
    glVertex2f(-0.0698f* scale + x,0.11214f * scale + y);
    glVertex2f(-0.0635f* scale + x,0.11199f * scale + y);
    glVertex2f(-0.0834f* scale + x,-0.0901f * scale + y);
    glVertex2f(-0.0933f* scale + x,-0.0891f * scale + y);
    glEnd();


    glBegin(GL_QUADS);
    glColor3f(235.0f,205.0f,0.0f);
    glVertex2f(-0.0615f* scale + x,0.069f * scale + y);
    glVertex2f(-0.0536f* scale + x,0.06894f * scale + y);
    glVertex2f(-0.05f* scale + x,-0.08f * scale + y);
    glVertex2f(-0.0592f* scale + x,-0.0791f * scale + y);
    glEnd();


    glBegin(GL_QUADS);
    glColor3f(235.0f,205.0f,0.0f);
    glVertex2f(0.06641f* scale + x,0.11207f * scale + y);
    glVertex2f(0.0769f* scale + x,0.1115f * scale + y);
    glVertex2f(0.107f* scale + x,-0.0899f * scale + y);
    glVertex2f(0.0985f* scale + x,-0.0904f * scale + y);
    glEnd();



    glBegin(GL_QUADS);
    glColor3f(235.0f,205.0f,0.0f);
    glVertex2f(0.0734f* scale + x,0.0679f * scale + y);
    glVertex2f(0.06269f* scale + x,0.06805f * scale + y);
    glVertex2f(0.0657f* scale + x,-0.0894f * scale + y);
    glVertex2f(0.0787f* scale + x,-0.0914f * scale + y);
    glEnd();


    glBegin(GL_QUADS);
    glColor3f(7.0f,0.0f,0.0f);
    glVertex2f(-0.08886f* scale + x,0.101f * scale + y);
    glVertex2f(-0.075f* scale + x,0.101 * scale + y);
    glVertex2f(-0.0786f* scale + x,0.0691f * scale + y);
    glVertex2f(-0.0912f* scale + x,0.06923f * scale + y);
    glEnd();


    glBegin(GL_QUADS);
    glColor3f(235.0f,205.0f,0.0f);
    glVertex2f(-0.075f* scale + x,0.101f * scale + y);
    glVertex2f(-0.0452f* scale + x,0.1014f * scale + y);
    glVertex2f(-0.05365f* scale + x,0.0689f * scale + y);
    glVertex2f(-0.0786f* scale + x,0.0691f * scale + y);
    glEnd();


    glBegin(GL_QUADS);
    glColor3f(255.0f,0.0f,0.0f);
    glVertex2f(-0.0452f* scale + x,0.1014f * scale + y);
    glVertex2f(-0.01902f* scale + x,0.101f * scale + y);
    glVertex2f(-0.0253f* scale + x,0.0700161f * scale + y);
    glVertex2f(-0.05365f* scale + x,0.0689f * scale + y);
    glEnd();


    glBegin(GL_QUADS);
    glColor3f(235.0f,205.0f,0.0f);
    glVertex2f(-0.01902f* scale + x,0.101f * scale + y);
    glVertex2f(0.010072f* scale + x,0.10154f * scale + y);
    glVertex2f(0.0042f* scale + x,0.068502f * scale + y);
    glVertex2f(-0.0253f* scale + x,0.0700161f * scale + y);
    glEnd();


    glBegin(GL_QUADS);
    glColor3f(255.0f,0.0f,0.0f);
    glVertex2f(0.010072f* scale + x,0.10154f * scale + y);
    glVertex2f(0.0382f* scale + x,0.10157f * scale + y);
    glVertex2f(0.0333f* scale + x,0.06827f * scale + y);
    glVertex2f(0.0042f* scale + x,0.068502f * scale + y);
    glEnd();


    glBegin(GL_QUADS);
    glColor3f(235.0f,205.0f,0.0f);
    glVertex2f(0.0382f* scale + x,0.10157f * scale + y);
    glVertex2f(0.0631f* scale + x,0.1016f * scale + y);
    glVertex2f(0.06008f* scale + x,0.06833f * scale + y);
    glVertex2f(0.0333f* scale + x,0.06827f * scale + y);
    glEnd();


    glBegin(GL_QUADS);
    glColor3f(255.0f,0.0f,0.0f);
    glVertex2f(0.0631f* scale + x,0.1016f * scale + y);
    glVertex2f(0.0908f* scale + x,0.10163f * scale + y);
    glVertex2f(0.08932f* scale + x,0.06787f * scale + y);
    glVertex2f(0.06008f* scale + x,0.06833f * scale + y);
    glEnd();


    glBegin(GL_QUADS);
    glColor3f(235.0f,205.0f,0.0f);
    glVertex2f(0.0908f* scale + x,0.10163f * scale + y);
    glVertex2f(0.104f* scale + x,0.1016f * scale + y);
    glVertex2f(0.10925f* scale + x,0.0676f * scale + y);
    glVertex2f(0.08932f* scale + x,0.06787f * scale + y);
    glEnd();


    glBegin(GL_QUADS);
    glColor3f(235.0f,205.0f,0.0f);
    glVertex2f(-0.0783f* scale + x,-0.03885f * scale + y);
    glVertex2f(-0.06048f* scale + x,-0.03848f * scale + y);
    glVertex2f(-0.0601f* scale + x,-0.0482f * scale + y);
    glVertex2f(-0.0792f* scale + x,-0.04826f * scale + y);
    glEnd();


    glBegin(GL_QUADS);
    glColor3f(235.0f,205.0f,0.0f);
    glVertex2f(0.07706f* scale + x,-0.039954f * scale + y);
    glVertex2f(0.09045f* scale + x,-0.039177f * scale + y);
    glVertex2f(0.09179f* scale + x,-0.04759f * scale + y);
    glVertex2f(0.0773f* scale + x,-0.048704f * scale + y);
    glVertex2f(0.0773f* scale + x,-0.048704f * scale + y);
    glEnd();
}
