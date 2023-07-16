//
//  Knight.cpp
//  Xcode_OpenGL
//
//  Created by Максим Мержев on 19.05.2023.
//

#include "Knight.hpp"
#include <GLFW/glfw3.h>
#include <GLUT/GLUT.h>
#include "FigurePos.h"




void drawEyes()
{
    glBegin(GL_QUADS);
    //eyes
    glColor3ub(220, 20, 60);
    glVertex2f(590, 220);
    glVertex2f(590, 247);
    glVertex2f(497, 247);
    glVertex2f(497, 220);
    
    glEnd();
}

void drawKnight(Figure &knight)
{
    glPushMatrix();
    
    glTranslatef(knight.pos.x-250, knight.pos.y-50,knight.pos.z);
   // if(knight.isRight)
    //{
      //  glRotatef(180, 0,1,0);
    //}
    glBegin(GL_QUADS);
    
    
    
    glColor3ub(192, 192, 192);
    glVertex2f(419, 68);
    glVertex2f(430, 68);
    glVertex2f(430, 123);
    glVertex2f(419, 123);
    
    glColor3ub(192, 192, 192);
    glVertex2f(419, 123);
    glVertex2f(419, 192);
    glVertex2f(406, 192);
    glVertex2f(406, 123);
    
    glColor3ub(192, 192, 192);
    glVertex2f(430, 123);
    glVertex2f(443, 123);
    glVertex2f(443, 150);
    glVertex2f(430, 150);
    
    glColor3ub(192, 192, 192);
    glVertex2f(430, 150);
    glVertex2f(471, 150);
    glVertex2f(471, 164);
    glVertex2f(430, 164);
    
    glColor3ub(192, 192, 192);
    glVertex2f(443, 164);
    glVertex2f(458, 164);
    glVertex2f(458, 177);
    glVertex2f(443, 177);
    
    glColor3ub(192, 192, 192);
    glVertex2f(458, 177);
    glVertex2f(471, 177);
    glVertex2f(471, 192);
    glVertex2f(458, 192);
    
    glColor3ub(192, 192, 192);
    glVertex2f(471, 193);
    glVertex2f(484, 193);
    glVertex2f(484, 219);
    glVertex2f(471, 219);
    
    glColor3ub(192, 192, 192);
    glVertex2f(471, 137);
    glVertex2f(471, 150);
    glVertex2f(549, 150);
    glVertex2f(549, 137);
    
    glColor3ub(192, 192, 192);
    glVertex2f(549, 150);
    glVertex2f(549, 164);
    glVertex2f(577, 164);
    glVertex2f(577, 150);
    
    glColor3ub(192, 192, 192);
    glVertex2f(577, 164);
    glVertex2f(590, 164);
    glVertex2f(590, 177);
    glVertex2f(577, 177);
    
    glColor3ub(192, 192, 192);
    glVertex2f(590, 177);
    glVertex2f(604, 177);
    glVertex2f(604, 207);
    glVertex2f(590, 207);
    
    glColor3ub(192, 192, 192);
    glVertex2f(590, 207);
    glVertex2f(616, 207);
    glVertex2f(617, 234);
    glVertex2f(590, 234);
    
    glColor3ub(192, 192, 192);
    glVertex2f(616, 207);
    glVertex2f(630, 207);
    glVertex2f(630, 192);
    glVertex2f(616, 192);
    
    glColor3ub(192, 192, 192);
    glVertex2f(630, 192);
    glVertex2f(642, 192);
    glVertex2f(642, 137);
    glVertex2f(630, 137);
    
    glColor3ub(192, 192, 192);
    glVertex2f(630, 137);
    glVertex2f(630, 82);
    glVertex2f(616, 82);
    glVertex2f(616, 137);
    
    glColor3ub(192, 192, 192);
    glVertex2f(617, 137);
    glVertex2f(603, 137);
    glVertex2f(603, 177);
    glVertex2f(617, 177);
    
    glColor3ub(192, 192, 192);
    glVertex2f(417, 192);
    glVertex2f(430, 192);
    glVertex2f(430, 261);
    glVertex2f(417, 261);
    
    glColor3ub(192, 192, 192);
    glVertex2f(430, 234);
    glVertex2f(430, 207);
    glVertex2f(443, 207);
    glVertex2f(443, 234);
    
    glColor3ub(192, 192, 192);
    glVertex2f(443, 220);
    glVertex2f(443, 234);
    glVertex2f(471, 234);
    glVertex2f(471, 220);
    
    glColor3ub(192, 192, 192);
    glVertex2f(536, 247);
    glVertex2f(564, 247);
    glVertex2f(564, 303);
    glVertex2f(536, 303);
    
    glColor3ub(192, 192, 192);
    glVertex2f(484, 302);
    glVertex2f(484, 316);
    glVertex2f(590, 316);
    glVertex2f(590, 302);
    
    glColor3ub(192, 192, 192);
    glVertex2f(563, 316);
    glVertex2f(524, 316);
    glVertex2f(524, 330);
    glVertex2f(563, 330);
    
    glColor3ub(192, 192, 192);
    glVertex2f(458, 289);
    glVertex2f(458, 344);
    glVertex2f(484, 344);
    glVertex2f(484, 289);
    
    glColor3ub(192, 192, 192);
    glVertex2f(430, 261);
    glVertex2f(444, 261);
    glVertex2f(444, 289);
    glVertex2f(430, 289);
    
    glColor3ub(192, 192, 192);
    glVertex2f(406, 289);
    glVertex2f(406, 302);
    glVertex2f(484, 302);
    glVertex2f(484, 289);
    
    glColor3ub(192, 192, 192);
    glVertex2f(406, 302);
    glVertex2f(406, 316);
    glVertex2f(391, 316);
    glVertex2f(391, 302);
    
    glColor3ub(192, 192, 192);
    glVertex2f(378, 317);
    glVertex2f(391, 317);
    glVertex2f(391, 344);
    glVertex2f(378, 344);
    
    glColor3ub(192, 192, 192);
    glVertex2f(391, 344);
    glVertex2f(405, 344);
    glVertex2f(405, 358);
    glVertex2f(391, 358);
    
    glColor3ub(192, 192, 192);
    glVertex2f(338, 358);
    glVertex2f(338, 371);
    glVertex2f(458, 371);
    glVertex2f(458, 358);
    
    glColor3ub(192, 192, 192);
    glVertex2f(430, 344);
    glVertex2f(430, 358);
    glVertex2f(458, 358);
    glVertex2f(458, 344);
    
    glColor3ub(192, 192, 192);
    glVertex2f(443, 371);
    glVertex2f(458, 371);
    glVertex2f(458, 454);
    glVertex2f(443, 454);
    
    glColor3ub(192, 192, 192);
    glVertex2f(338, 358);
    glVertex2f(350, 358);
    glVertex2f(350, 454);
    glVertex2f(337, 454);
    
    glColor3ub(192, 192, 192);
    glVertex2f(350, 454);
    glVertex2f(365, 454);
    glVertex2f(365, 468);
    glVertex2f(350, 468);
    
    glColor3ub(192, 192, 192);
    glVertex2f(365, 468);
    glVertex2f(365, 482);
    glVertex2f(377, 482);
    glVertex2f(377, 468);
    
    glColor3ub(192, 192, 192);
    glVertex2f(378, 482);
    glVertex2f(418, 482);
    glVertex2f(418, 495);
    glVertex2f(378, 495);
    
    glColor3ub(192, 192, 192);
    glVertex2f(417, 482);
    glVertex2f(417, 468);
    glVertex2f(430, 468);
    glVertex2f(430, 482);
    
    glColor3ub(192, 192, 192);
    glVertex2f(430, 468);
    glVertex2f(430, 454);
    glVertex2f(443, 454);
    glVertex2f(443, 468);
    
    glColor3ub(192, 192, 192);
    glVertex2f(458, 454);
    glVertex2f(471, 454);
    glVertex2f(471, 482);
    glVertex2f(458, 482);
    
    glColor3ub(192, 192, 192);
    glVertex2f(458, 482);
    glVertex2f(458, 508);
    glVertex2f(444, 508);
    glVertex2f(444, 482);
    
    glColor3ub(192, 192, 192);
    glVertex2f(471, 468);
    glVertex2f(471, 454);
    glVertex2f(510, 454);
    glVertex2f(510, 468);
    
    glColor3ub(192, 192, 192);
    glVertex2f(497, 468);
    glVertex2f(510, 468);
    glVertex2f(510, 508);
    glVertex2f(497, 508);
    
    glColor3ub(192, 192, 192);
    glVertex2f(458, 508);
    glVertex2f(497, 508);
    glVertex2f(497, 523);
    glVertex2f(458, 523);
    
    glColor3ub(192, 192, 192);
    glVertex2f(458, 523);
    glVertex2f(444, 523);
    glVertex2f(444, 550);
    glVertex2f(458, 550);
    
    glColor3ub(192, 192, 192);
    glVertex2f(497, 523);
    glVertex2f(510, 523);
    glVertex2f(510, 550);
    glVertex2f(497, 550);
    
    glColor3ub(192, 192, 192);
    glVertex2f(510, 454);
    glVertex2f(510, 441);
    glVertex2f(524, 441);
    glVertex2f(524, 454);
    
    glColor3ub(192, 192, 192);
    glVertex2f(524, 454);
    glVertex2f(524, 536);
    glVertex2f(536, 536);
    glVertex2f(536, 454);
    
    glColor3ub(192, 192, 192);
    glVertex2f(536, 509);
    glVertex2f(536, 536);
    glVertex2f(549, 536);
    glVertex2f(549, 509);
    
    glColor3ub(192, 192, 192);
    glVertex2f(536, 536);
    glVertex2f(603, 536);
    glVertex2f(603, 550);
    glVertex2f(536, 550);
    
    glColor3ub(192, 192, 192);
    glVertex2f(590, 523);
    glVertex2f(603, 523);
    glVertex2f(603, 550);
    glVertex2f(590, 550);
    
    glColor3ub(192, 192, 192);
    glVertex2f(549, 523);
    glVertex2f(549, 509);
    glVertex2f(590, 509);
    glVertex2f(590, 523);
    
    glColor3ub(192, 192, 192);
    glVertex2f(577, 468);
    glVertex2f(590, 468);
    glVertex2f(590, 523);
    glVertex2f(577, 523);
    
    glColor3ub(192, 192, 192);
    glVertex2f(577, 468);
    glVertex2f(577, 454);
    glVertex2f(524, 454);
    glVertex2f(524, 468);
    
    glColor3ub(192, 192, 192);
    glVertex2f(577, 454);
    glVertex2f(577, 427);
    glVertex2f(590, 427);
    glVertex2f(590, 454);
    
    glColor3ub(192, 192, 192);
    glVertex2f(590, 441);
    glVertex2f(590, 427);
    glVertex2f(604, 427);
    glVertex2f(604, 441);
    
    glColor3ub(192, 192, 192);
    glVertex2f(603, 482);
    glVertex2f(616, 482);
    glVertex2f(616, 371);
    glVertex2f(603, 371);
    
    glColor3ub(192, 192, 192);
    glVertex2f(603, 371);
    glVertex2f(642, 371);
    glVertex2f(642, 386);
    glVertex2f(603, 386);
    
    glColor3ub(192, 192, 192);
    glVertex2f(642, 468);
    glVertex2f(642, 482);
    glVertex2f(603, 482);
    glVertex2f(603, 468);
    
    glColor3ub(192, 192, 192);
    glVertex2f(642, 386);
    glVertex2f(748, 386);
    glVertex2f(748, 399);
    glVertex2f(642, 399);
    
    glColor3ub(192, 192, 192);
    glVertex2f(748, 399);
    glVertex2f(762, 399);
    glVertex2f(762, 413);
    glVertex2f(748, 413);
    
    glColor3ub(192, 192, 192);
    glVertex2f(762, 413);
    glVertex2f(762, 441);
    glVertex2f(775, 441);
    glVertex2f(775, 413);
    
    glColor3ub(192, 192, 192);
    glVertex2f(762, 441);
    glVertex2f(748, 441);
    glVertex2f(748, 454);
    glVertex2f(762, 454);
    
    glColor3ub(192, 192, 192);
    glVertex2f(748, 399);
    glVertex2f(762, 399);
    glVertex2f(762, 413);
    glVertex2f(748, 413);
    
    glColor3ub(192, 192, 192);
    glVertex2f(748, 454);
    glVertex2f(642, 454);
    glVertex2f(642, 468);
    glVertex2f(748, 468);
    
    glColor3ub(192, 192, 192);
    glVertex2f(617, 371);
    glVertex2f(617, 345);
    glVertex2f(630, 345);
    glVertex2f(630, 371);
    
    glColor3ub(192, 192, 192);
    glVertex2f(590, 330);
    glVertex2f(590, 345);
    glVertex2f(642, 345);
    glVertex2f(642, 330);
    
    glColor3ub(192, 192, 192);
    glVertex2f(642, 330);
    glVertex2f(642, 302);
    glVertex2f(656, 302);
    glVertex2f(656, 330);
    
    glColor3ub(192, 192, 192);
    glVertex2f(642, 302);
    glVertex2f(642, 289);
    glVertex2f(630, 289);
    glVertex2f(630, 302);
    
    glColor3ub(192, 192, 192);
    glVertex2f(590, 247);
    glVertex2f(590, 303);
    glVertex2f(603, 303);
    glVertex2f(603, 247);
    
    glColor3ub(192, 192, 192);
    glVertex2f(603, 275);
    glVertex2f(630, 275);
    glVertex2f(630, 289);
    glVertex2f(603, 289);
    
    glColor3ub(192, 192, 192);
    glVertex2f(577, 302);
    glVertex2f(577, 399);
    glVertex2f(590, 399);
    glVertex2f(590, 302);
    drawEyes();
    
    glEnd();
    
    glPopMatrix();
}
