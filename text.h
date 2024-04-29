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


