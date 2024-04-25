#include <bits/stdc++.h>
#include <GL/glut.h>

void renderBitmapString(float x, float y, float z, void *font, char *string)
{
    char *c;
    glRasterPos3f(x, y,z);
    for (c=string; *c != '\0'; c++)
    {
        glutBitmapCharacter(font, *c);
    }
}
void addText(float x, float y, float z, void *font, char *string, float size)
{
    char *c;
    glPushMatrix();
    glScalef(size, size, size); // Scale the text size
    glRasterPos3f(x, y, z);
    for (c = string; *c != '\0'; c++)
    {
        glutBitmapCharacter(font, *c);
    }
    glPopMatrix();
}

/*
void groupInfo()
{
    glColor3f(1.0,0.0,0.0);
    renderBitmapString(-0.4f, 0.9f, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24, "American International University - Bangladesh (AIUB)");
    renderBitmapString(-0.3f, 0.8f, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24, "Course Name : Computer Graphics");
    renderBitmapString(-0.19f, 0.7f, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24, "Section :[H]");
    renderBitmapString(-0.3f, 0.6f, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24, "Project Title : Retro Car Racing 2.0");
    renderBitmapString(-0.7f, 0.5f, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24, "Group members");
    renderBitmapString(-0.7f, 0.4f, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24, "-------------------------------------------------------------------------");
    renderBitmapString(-0.7f, 0.3f, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24, "Name                                                                                      ID");
    renderBitmapString(-0.7f, 0.2f, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24, "AYAN PAUL                                                                22-47172-1");
    renderBitmapString(-0.7f, 0.1f, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24, "SAYAN KUMAR ROY                                                22-46538-1 ");
    renderBitmapString(-0.7f, 0.0f, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24, "TANVIR AHMED TUHIN                                         22-46475-1 ");
    renderBitmapString(-0.7f, -0.1f, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24,"KANIJ FATEMA BORSA                                          22-46144-1 ");
    renderBitmapString(-0.7f, -0.2f, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24,"MOJIBUL HOQUE JIHAD                                        21-45954-3  ");
    renderBitmapString(-0.7f, -0.3f, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24, "--------------------------------------------------------------------------");
    renderBitmapString(0.1f, -0.4f, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24, " Supervised by ");
    renderBitmapString(0.1f, -0.5f, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24, " Mahfujur Rahman ");
    renderBitmapString(0.1f, -0.6f, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24, " Lecturer,");
    renderBitmapString(0.1f, -0.7f, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24, " Department of Computer Science");
    renderBitmapString(0.1f, -0.8f, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24, " Faculty of Science and Technology ");
    renderBitmapString(0.1f, -0.9f, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24, " American International University - Bangladesh (AIUB)");


} */
