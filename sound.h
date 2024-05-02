#include <windows.h> // for MS Windows
#include <GL/glut.h>
#include <bits/stdc++.h>
#include<cstdio>
void menu1Sound()
{
        PlaySound("resources/menu_sound/menu1.wav", NULL,SND_ASYNC|SND_FILENAME);
}
void menu2Sound()
{
        PlaySound("resources/menu_sound/menu2.wav", NULL,SND_ASYNC|SND_FILENAME);
}
void carEngineStart()
{
        PlaySound("resources/car/car_engine_start.wav", NULL,SND_ASYNC|SND_FILENAME);
}



void initMenuSound()
{
    menu1Sound();
    menu2Sound();
}
