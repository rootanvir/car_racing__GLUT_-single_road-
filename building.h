#include <windows.h> // for MS Windows
#include <GL/glut.h> // GLUT, include glu.h and gl.h

void building(double centerx,double centery)
{
    //left
    glColor3f(0.804f,0.8f, 0.8f);
    glBegin(GL_POLYGON);
    glVertex2f(centerx, centery);
    glVertex2f(centerx+0.1f, centery+0.1f);
    glVertex2f(centerx+0.1f, centery+0.6f);
    glVertex2f(centerx, centery+0.5f);
    glEnd();

    //right
    glColor3f(0.502f,0.502f, 0.502f);
    glBegin(GL_POLYGON);
    glVertex2f(centerx, centery);
    glVertex2f(centerx-0.1f, centery+0.1f);
    glVertex2f(centerx-0.1f, centery+0.6f);
    glVertex2f(centerx, centery+0.5f);
    glEnd();

    //top
    glColor3f(0.914f,0.91f,0.89f);
    glBegin(GL_POLYGON);
    glVertex2f(centerx+0.1f, centery+0.6f);
    glVertex2f(centerx, centery+0.5f);
    glVertex2f(centerx-0.1f, centery+0.6f);
    glVertex2f(centerx, centery+0.7f);
    glEnd();

    //top--
    glColor3f(0.6f,0.6f,0.6f);
    glBegin(GL_POLYGON);
    glVertex2f(centerx, centery+0.65f);
    glVertex2f(centerx+0.05f, centery+0.6f);
    glVertex2f(centerx, centery+0.55f);
    glVertex2f(centerx-0.05f, centery+0.6f);
    glEnd();



    {
        double in1=0.45f,in2=0.51f,in3=0.47f,in4=0.41f;

        for(int i=0; i<6; i++)
        {
            glColor3f(0.502f,0.502f,0.502f);
            glBegin(GL_POLYGON);

            glVertex2f(centerx+0.02f, centery+in1);
            glVertex2f(centerx+0.09f, centery+in2);
            glVertex2f(centerx+0.09f, centery+in3);
            glVertex2f(centerx+0.02f, centery+in4);

            in1-=0.06f;
            in2-=0.06f;
            in3-=0.06f;
            in4-=0.06f;

            glEnd();
        }
    }

        {
        double in1=0.45f,in2=0.51f,in3=0.47f,in4=0.41f;

        for(int i=0; i<6; i++)
        {
            glColor3f(0.306f,0.302f,0.302f);
            glBegin(GL_POLYGON);

            glVertex2f(centerx-0.02f, centery+in1);
            glVertex2f(centerx-0.09f, centery+in2);
            glVertex2f(centerx-0.09f, centery+in3);
            glVertex2f(centerx-0.02f, centery+in4);

            in1-=0.06f;
            in2-=0.06f;
            in3-=0.06f;
            in4-=0.06f;

            glEnd();
        }
    }



}
