//
//  Archer.cpp
//  Xcode_OpenGL
//
//  Created by Максим Мержев on 19.05.2023.
//

#include "Archer.hpp"
#include "FigurePos.h"
#include <GLFW/glfw3.h>
#include <GLUT/GLUT.h>


void drawArch(Figure &arch)
{
    glPushMatrix();
    glTranslatef(arch.pos.x+250, arch.pos.y-50, arch.pos.z);
    glScalef(arch.pos.scaleX*0.9, arch.pos.scaleY, arch.pos.scaleZ);
    glBegin(GL_QUADS);
    
    glColor3ub(210, 105, 30);
    glVertex2f(616, 260);
    glVertex2f(616, 249);
    glVertex2f(506, 249);
    glVertex2f(506, 260);
    
    glColor3ub(192, 192, 192);
    glVertex2f(506, 238);
    glVertex2f(506, 271);
    glVertex2f(495, 271);
    glVertex2f(495, 238);
    
    glColor3ub(192, 192, 192);
    glVertex2f(484, 249);
    glVertex2f(495, 249);
    glVertex2f(495, 260);
    glVertex2f(484, 260);
    
    glEnd();
    glPopMatrix();
}

void drawArcher(Figure &archer)
{
    
    glPushMatrix();
    glDisable(GL_NORMALIZE);
    
    glTranslatef(archer.pos.x+200, archer.pos.y-50, 0);
    glScalef(archer.pos.scaleX, archer.pos.scaleY, archer.pos.scaleZ);
    //glTranslatef(archer.pos.x-1250, archer.pos.y*0, 0);
    glBegin(GL_QUADS);
    
    glColor3ub(192, 192, 192);
    glVertex2f(594, 193);
    glVertex2f(605, 193);
    glVertex2f(605, 204);
    glVertex2f(594, 204);
    
    glColor3ub(192, 192, 192);
    glVertex2f(605, 193);
    glVertex2f(605, 183);
    glVertex2f(616, 183);
    glVertex2f(616, 193);
    
    glColor3ub(192, 192, 192);
    glVertex2f(616, 171);
    glVertex2f(624, 171);
    glVertex2f(624, 193);
    glVertex2f(616, 193);
    
    glColor3ub(192, 192, 192);
    glVertex2f(624, 160);
    glVertex2f(635, 160);
    glVertex2f(635, 193);
    glVertex2f(624, 193);
    
    glColor3ub(192, 192, 192);
    glVertex2f(635, 171);
    glVertex2f(650, 171);
    glVertex2f(650, 193);
    glVertex2f(635, 193);
    
    glColor3ub(192, 192, 192);
    glVertex2f(650, 182);
    glVertex2f(661, 182);
    glVertex2f(661, 193);
    glVertex2f(650, 193);
    
    glColor3ub(192, 192, 192);
    glVertex2f(594, 193);
    glVertex2f(672, 193);
    glVertex2f(672, 204);
    glVertex2f(594, 204);
    
    glColor3ub(192, 192, 192);
    glVertex2f(605, 204);
    glVertex2f(661, 204);
    glVertex2f(661, 215);
    glVertex2f(605, 215);
    
    glColor3ub(192, 192, 192);
    glVertex2f(650, 215);
    glVertex2f(650, 249);
    glVertex2f(661, 249);
    glVertex2f(661, 215);
    
    glColor3ub(178, 34, 34);
    glVertex2f(627, 249);
    glVertex2f(694, 249);
    glVertex2f(694, 260);
    glVertex2f(627, 260);
    
    glColor3ub(178, 34, 34);
    glVertex2f(661, 260);
    glVertex2f(683, 260);
    glVertex2f(683, 271);
    glVertex2f(661, 271);
    
    glColor3ub(192, 192, 192);
    glVertex2f(661, 271);
    glVertex2f(672, 271);
    glVertex2f(672, 338);
    glVertex2f(661, 338);
    
    glColor3ub(192, 192, 192);
    glVertex2f(616, 260);
    glVertex2f(661, 260);
    glVertex2f(661, 338);
    glVertex2f(616, 338);
    
    glColor3ub(192, 192, 192);
    glVertex2f(605, 272);
    glVertex2f(616, 272);
    glVertex2f(616, 338);
    glVertex2f(605, 338);
    
    glColor3ub(192, 192, 192);
    glVertex2f(594, 283);
    glVertex2f(605, 283);
    glVertex2f(605, 338);
    glVertex2f(594, 338);
    
    glColor3ub(222, 184, 135);
    glVertex2f(594, 338);
    glVertex2f(672, 338);
    glVertex2f(672, 349);
    glVertex2f(594, 349);
    
    //???
    glColor3ub(192, 192, 192);
    glVertex2f(594, 350);
    glVertex2f(672, 350);
    glVertex2f(672, 383);
    glVertex2f(594, 383);
    
    //left leg
    glColor3ub(192, 192, 192);
    glVertex2f(594, 383);
    glVertex2f(616, 383);
    glVertex2f(616, 394);
    glVertex2f(594, 394);
    
    glColor3ub(192, 192, 192);
    glVertex2f(594, 394);
    glVertex2f(605, 394);
    glVertex2f(605, 450);
    glVertex2f(594, 450);
    
    //right leg
    glColor3ub(192, 192, 192);
    glVertex2f(650, 383);
    glVertex2f(672, 383);
    glVertex2f(672, 394);
    glVertex2f(650, 394);
    
    glColor3ub(192, 192, 192);
    glVertex2f(661, 394);
    glVertex2f(672, 394);
    glVertex2f(672, 450);
    glVertex2f(661, 450);
    
    //face
    glColor3ub(139, 69, 19);
    glVertex2f(639, 249);
    glVertex2f(639, 215);
    glVertex2f(650, 215);
    glVertex2f(650, 249);
    
    glColor3ub(255, 222, 173);
    glVertex2f(627, 249);
    glVertex2f(627, 227);
    glVertex2f(639, 227);
    glVertex2f(639, 249);
    
    glColor3ub(255, 222, 173);
    glVertex2f(616, 215);
    glVertex2f(627, 215);
    glVertex2f(627, 260);
    glVertex2f(616, 260);
    
    glColor3ub(255, 222, 173);
    glVertex2f(605, 227);
    glVertex2f(616, 227);
    glVertex2f(616, 237);
    glVertex2f(605, 237);
    
    
    //weapon
    glColor3ub(218, 165, 32);
    glVertex2f(605, 238);
    glVertex2f(616, 238);
    glVertex2f(616, 249);
    glVertex2f(605, 249);
    
    glColor3ub(218, 165, 32);
    glVertex2f(605, 238);
    glVertex2f(605, 227);
    glVertex2f(594, 227);
    glVertex2f(594, 238);
    
    glColor3ub(218, 165, 32);
    glVertex2f(594, 227);
    glVertex2f(594, 216);
    glVertex2f(583, 216);
    glVertex2f(583, 227);
    
    glColor3ub(218, 165, 32);
    glVertex2f(583, 216);
    glVertex2f(583, 205);
    glVertex2f(572, 205);
    glVertex2f(572, 216);
    
    glColor3ub(218, 165, 32);
    glVertex2f(572, 204);
    glVertex2f(572, 193);
    glVertex2f(561, 193);
    glVertex2f(561, 204);
    
    glColor3ub(139, 69, 19);
    glVertex2f(561, 193);
    glVertex2f(561, 182);
    glVertex2f(550, 182);
    glVertex2f(550, 193);
    
    glColor3ub(139, 69, 19);
    glVertex2f(550, 193);
    glVertex2f(550, 205);
    glVertex2f(539, 205);
    glVertex2f(539, 193);
    
    glColor3ub(139, 69, 19);
    glVertex2f(539, 205);
    glVertex2f(539, 227);
    glVertex2f(528, 227);
    glVertex2f(528, 205);
    
    glColor3ub(139, 69, 19);
    glVertex2f(528, 227);
    glVertex2f(528, 249);
    glVertex2f(517, 249);
    glVertex2f(517, 227);
    
    glColor3ub(139, 69, 19);
    glVertex2f(528, 272);
    glVertex2f(528, 305);
    glVertex2f(517, 305);
    glVertex2f(517, 272);
    
    glColor3ub(139, 69, 19);
    glVertex2f(539, 305);
    glVertex2f(528, 305);
    glVertex2f(528, 327);
    glVertex2f(539, 327);
    
    glColor3ub(139, 69, 19);
    glVertex2f(539, 327);
    glVertex2f(539, 338);
    glVertex2f(550, 338);
    glVertex2f(550, 327);
    
    glColor3ub(218, 165, 32);
    glVertex2f(550, 316);
    glVertex2f(561, 316);
    glVertex2f(561, 327);
    glVertex2f(550, 327);
    
    glColor3ub(218, 165, 32);
    glVertex2f(561, 305);
    glVertex2f(572, 305);
    glVertex2f(572, 316);
    glVertex2f(561, 316);
    
    glColor3ub(218, 165, 32);
    glVertex2f(572, 294);
    glVertex2f(583, 294);
    glVertex2f(583, 305);
    glVertex2f(572, 305);
    
    glColor3ub(218, 165, 32);
    glVertex2f(583, 294);
    glVertex2f(583, 283);
    glVertex2f(594, 283);
    glVertex2f(594, 294);
    
    glColor3ub(218, 165, 32);
    glVertex2f(594, 283);
    glVertex2f(594, 272);
    glVertex2f(605, 272);
    glVertex2f(605, 283);
    
    glColor3ub(218, 165, 32);
    glVertex2f(606, 261);
    glVertex2f(616, 260);
    glVertex2f(616, 273);
    glVertex2f(606, 273);
    
    glColor3ub(178, 34, 34);
    glVertex2f(605, 261);
    glVertex2f(605, 271);
    glVertex2f(528, 271);
    glVertex2f(528, 261);
    
    
    //drawArch(f);
    
    glEnd();
    
    glPopMatrix();
}
