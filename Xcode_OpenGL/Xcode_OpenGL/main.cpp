#include <GLFW/glfw3.h>
#include <GLUT/GLUT.h>
#include "Swordsman.hpp"
#include "Knight.hpp"
#include "Archer.hpp"
#include "battleBackground.hpp"
#include "Swordsman.hpp"
#include "FigurePos.h"
#include <array>
#include <cmath>
#include <ctime>
#include <iostream>
#include <unistd.h>

Figure heroKnight;
Figure heroArch;
Figure heroArcher;
Figure heroSwordsman;
clock_t curTime;

short PERSON_CHOICE = 0;
bool YOUR_STEP = true;

void Atack(unsigned char key);


void PersonChoice()
{
    std::cout << "choice person 1.Knight, 2.Archer, 3.Swordsman :";
    std::cin >> PERSON_CHOICE;
    std::cout << "\n";
}


void renderScene(void) {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    
   //double cnvCoordX(double x);
    //double cnvCoordY(double y);
    
    glMatrixMode(GL_PROJECTION); // выбираем матрицу проекции
    glLoadIdentity(); // загружаем единичную матрицу
    glOrtho(0.0f, 1600, 900, 0.0f, 0.0f, 1.0f); // задаем параметры ортографической проекции
    //plotGraph();
    drawKnight(heroKnight);
    //drawSwordsman();
    
    drawArcher(heroArcher);
    drawArch(heroArch);
    drawSwordsman(heroSwordsman);
    renderBackgroundScene();
    //glTranslatef(-175, -210,0);
    //drawArcher(figure);
    glutSwapBuffers();
}

void delay(float secs)
{
    //float end = clock() / CLOCKS_PER_SEC + secs;
    //while ((clock() / CLOCKS_PER_SEC) < end);
    glutPostRedisplay();
        //glutTimerFunc(1000, delay, v);
}


void animateScene(int value){
    if(PERSON_CHOICE == 1)
    {
        if(value==1)
        {
            glutPostRedisplay();
            heroKnight.pos.x+=1;
            heroSwordsman.pos.x-=1;
            //heroKnight.pos.y+=0.5;
        }
        else
        {
            glutPostRedisplay();
            heroKnight.pos.x-=1;
            heroSwordsman.pos.x+=1;
        }
        if(heroKnight.pos.x == heroArch.pos.x)
        {
            heroArch.hp-=20;
            std::cout << "Arch hp:" << heroArch.hp << "\n";
        }
        //PERSON_CHOICE = 2;
    }
    if(PERSON_CHOICE == 2)
    {
        if(value==1)
        {
            if(heroArch.isRight == false)
            {
                glutPostRedisplay();
                heroArch.pos.x-=1;
                heroSwordsman.pos.x-=1;
            }
            else if(heroArch.isRight == true)
            {
                glutPostRedisplay();
                heroArch.pos.x+=1;
                heroKnight.pos.x+=1;
            }
        }
        else
        {
            if(heroArch.isRight == true)
            {
                //knightBack();
                heroArch.pos.x = 1150;
                heroSwordsman.pos.x = 0;
                heroKnight.pos.x = 0;
                glutPostRedisplay();
            }
            else
            {
                //knightBack();
                
                heroKnight.pos.x = 0;
                heroArch.pos.x=0;
                heroSwordsman.pos.x = 0;
                glutPostRedisplay();
            }
            //knightBack();
           
        }
        if(heroArch.pos.x == heroKnight.pos.x)
        {
            heroKnight.hp-=10;
            std::cout << "Knight hp:" << heroKnight.hp << "\n";
           // PersonChoice();
        }
        if(heroArch.pos.x == heroSwordsman.pos.x)
        {
            heroSwordsman.hp-=10;
            std::cout << "Swordsman hp:" << heroKnight.hp << "\n";
           // PersonChoice();
        }
        if(heroSwordsman.pos.x == heroArcher.pos.x)
        {
            heroArcher.hp-=10;
            std::cout << "Archer hp:" << heroKnight.hp << "\n";
        }
        if(heroArcher.hp < 0)
        {
            heroArcher.pos.x = 2000;
            heroArch.pos.x = 2000;
        }
        if(heroKnight.hp < 0)
        {
            heroKnight.pos.x = 2000;
            heroKnight.pos.x = 2000;
        }
        if(heroKnight.hp < 0)
        {
            heroKnight.pos.x = 2000;
            heroKnight.pos.x = 2000;
        }
        
        //knightBack();
    }
}

void Atack(unsigned char key)
{
    curTime = clock();
    float phi = curTime*0.001;
    //PersonChoice();
    if(PERSON_CHOICE == 1)
    {
        if(key == 'd')
        {
            int status = 1;
            for(auto i = 0; i<450;i++)
            {
                glutSwapBuffers();
                glutTimerFunc(10, animateScene, status);
            }
            status = 0;
            for(auto i = 450; i!=0;i--)
            {
                glutSwapBuffers();
                glutTimerFunc(10, animateScene, status);
            }
        //    PERSON_CHOICE = 2;
            
        }
        else if(key == 'f')
        {
            int status = 1;
            for(auto i = 0; i<950;i++)
            {
                glutSwapBuffers();
                glutTimerFunc(10, animateScene, status);
            }
            status = 0;
            for(auto i = 950; i!=0;i--)
            {
                glutSwapBuffers();
                glutTimerFunc(10, animateScene, status);
            }
          //   PERSON_CHOICE = 2;
        }
        if(key == 'x')
        {
            int status = 4;
            heroKnight.hp = 0;
            for(auto i = 0; i<950;i++)
            {
                //glutSwapBuffers();
                glutTimerFunc(10, animateScene, status);
            }
        }
       // PERSON_CHOICE = 2;
    }
    else if(PERSON_CHOICE == 2)
    {
        if(key == 'a')
        {
            heroArcher.pos.scaleX = 1;
            heroArcher.pos.x = 0;
            heroArcher.isRight = false;
            heroArch.isRight = false;
            heroArch.pos.scaleX = 1;
            heroArch.pos.x = 0;
            int status = 1;
            for(auto i = 0; i<450;i++)
            {
                //glutSwapBuffers();
                glutTimerFunc(10, animateScene, status);
            }
            status = 0;
        
            //glutSwapBuffers();
            glutTimerFunc(10, animateScene, status);
            //sleep(2);
            //PERSON_CHOICE = 1;
            //knightAtack();
           // PERSON_CHOICE = 1;
        }
        else if(key == 'd')
        {
            heroArcher.pos.scaleX = -1;
            heroArcher.pos.x = 1250;
            heroArcher.isRight = true;
            heroArch.isRight = true;
            heroArch.pos.scaleX = -1;
            heroArch.pos.x = 1250;
           // glutSwapBuffers();
            glutPostRedisplay();
            int status = 1;
            for(auto i = 0; i<450;i++)
            {
                glutSwapBuffers();
                glutTimerFunc(10, animateScene, status);
            }
            status = 0;
        
            glutSwapBuffers();
            glutTimerFunc(10, animateScene, status);
            //knightBack();
            //sleep(2);
            //PERSON_CHOICE = 1;
            //knightAtack();
           // PERSON_CHOICE = 1;
        }
    }
    //knightAtack();
    
}



void processKey(unsigned char key, int x, int y)
{
    Atack(key);
    glutPostRedisplay();
    
}



int main(int argc, char* argv[])
{
    PersonChoice();
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
    glutInitWindowPosition(100,100);
    glutInitWindowSize(1920,1080);
    glutCreateWindow("OpenGL Start Application");
    glutDisplayFunc(renderScene);
    glutTimerFunc(0, animateScene, 0);
    glutKeyboardFunc(processKey);
    glutMainLoop();
    return 0;
}


