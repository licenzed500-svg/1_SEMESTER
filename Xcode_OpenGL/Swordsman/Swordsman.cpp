//
//  Swordsman.cpp
//  Xcode_OpenGL
//
//  Created by Максим Мержев on 19.05.2023.
//

#include "Swordsman.hpp"

#include <GLFW/glfw3.h>
#include <GLUT/GLUT.h>
#include "FigurePos.h"


void drawSwordsman(Figure &swordsman)
{
    glPushMatrix();
    
    glTranslatef(swordsman.pos.x+850, swordsman.pos.y -100, swordsman.pos.z);
    
    glBegin(GL_QUADS);
    
    glColor3ub(128, 128, 128);
    glVertex2f(385, 121);
    glVertex2f(397, 121);
    glVertex2f(397,321);
    glVertex2f(385, 321);
    
    glColor3ub(128, 128, 128);
    glVertex2f(397, 110);
    glVertex2f(409, 110);
    glVertex2f(409,121);
    glVertex2f(397, 121);
    
    
    glColor3ub(128, 128, 128);
    glVertex2f(409, 98);
    glVertex2f(420, 98);
    glVertex2f(420,321);
    glVertex2f(409, 321);
    
    
    glColor3ub(128, 128, 128);
    glVertex2f(443, 321);
    glVertex2f(443, 332);
    glVertex2f(362 ,321);
    glVertex2f(362, 332);
    
    glColor3ub(128, 128, 128);
    glVertex2f(362, 332);
    glVertex2f(362, 344);
    glVertex2f(350, 344);
    glVertex2f(350, 332);
    
    
    glColor3ub(128, 128, 128);
    glVertex2f(362, 344);
    glVertex2f(385, 344);
    glVertex2f(385, 356);
    glVertex2f(362, 356);
    
    glColor3ub(128, 128, 128);
    glVertex2f(444, 332);
    glVertex2f(455, 332);
    glVertex2f(455, 344);
    glVertex2f(444, 344);
    
    glColor3ub(128, 128, 128);
    glVertex2f(444, 344);
    glVertex2f(444, 356);
    glVertex2f(420, 356);
    glVertex2f(420, 344);
    
    glColor3ub(128, 128, 128);
    glVertex2f(385, 121);
    glVertex2f(397, 121);
    glVertex2f(397,321);
    glVertex2f(385, 321);
    
    glColor3ub(128, 128, 128);
    glVertex2f(432, 356);
    glVertex2f(432, 367);
    glVertex2f(385, 367);
    glVertex2f(385, 356);
    
    glColor3ub(128, 128, 128);
    glVertex2f(397, 367);
    glVertex2f(385, 367);
    glVertex2f(385, 414);
    glVertex2f(397, 414);
    
    glColor3ub(128, 128, 128);
    glVertex2f(397, 414);
    glVertex2f(409, 414);
    glVertex2f(409, 426);
    glVertex2f(397, 426);
    
    glColor3ub(128, 128, 128);
    glVertex2f(420, 403);
    glVertex2f(409, 403);
    glVertex2f(409, 414);
    glVertex2f(420, 414);
    
    glColor3ub(128, 128, 128);
    glVertex2f(409, 380);
    glVertex2f(432, 380);
    glVertex2f(432, 402);
    glVertex2f(409, 402);
    
    //body
    
    glColor3ub(128, 128, 128);
    glVertex2f(432, 391);
    glVertex2f(432, 402);
    glVertex2f(467, 402);
    glVertex2f(467, 391);
    
    glColor3ub(128, 128, 128);
    glVertex2f(467, 367);
    glVertex2f(467, 379);
    glVertex2f(432, 379);
    glVertex2f(432, 367);
    
    glColor3ub(128, 128, 128);
    glVertex2f(479, 379);
    glVertex2f(467, 391);
    glVertex2f(479, 391);
    glVertex2f(467, 379);
    
    
    glColor3ub(128, 128, 128);
    glVertex2f(467, 356);
    glVertex2f(479, 356);
    glVertex2f(479, 367);
    glVertex2f(467, 367);
    
    glColor3ub(128, 128, 128);
    glVertex2f(479, 356);
    glVertex2f(526, 356);
    glVertex2f(526,344);
    glVertex2f(479, 344);
    
    glColor3ub(128, 128, 128);
    glVertex2f(526, 332);
    glVertex2f(526, 321);
    glVertex2f(479, 321);
    glVertex2f(479, 332);
    
    glColor3ub(128, 128, 128);
    glVertex2f(513, 321);
    glVertex2f(513, 310);
    glVertex2f(503, 310);
    glVertex2f(503, 321);
    
    glColor3ub(128, 128, 128);
    glVertex2f(490, 321);
    glVertex2f(490, 310);
    glVertex2f(479, 310);
    glVertex2f(479, 321);
    
    glColor3ub(128, 128, 128);
    glVertex2f(479, 309);
    glVertex2f(467, 309);
    glVertex2f(467, 262);
    glVertex2f(479, 262);
    
    glColor3ub(128, 128, 128);
    glVertex2f(479, 262);
    glVertex2f(479, 250);
    glVertex2f(491, 250);
    glVertex2f(491, 262);
    
    glColor3ub(128, 128, 128);
    glVertex2f(491, 250);
    glVertex2f(491, 239);
    glVertex2f(537, 239);
    glVertex2f(537, 250);
    
    glColor3ub(128, 128, 128);
    glVertex2f(538, 250);
    glVertex2f(549, 250);
    glVertex2f(549, 262);
    glVertex2f(538, 262);
    
    glColor3ub(128, 128, 128);
    glVertex2f(549, 262);
    glVertex2f(561, 262);
    glVertex2f(561, 297);
    glVertex2f(549, 297);
    
    glColor3ub(128, 128, 128);
    glVertex2f(549, 297);
    glVertex2f(549, 309);
    glVertex2f(538, 309);
    glVertex2f(538, 297);
    
    glColor3ub(128, 128, 128);
    glVertex2f(538, 309);
    glVertex2f(538, 320);
    glVertex2f(526, 320);
    glVertex2f(526, 309);
    
    glColor3ub(128, 128, 128);
    glVertex2f(526, 321);
    glVertex2f(561, 321);
    glVertex2f(561, 367);
    glVertex2f(526, 367);
    
    glColor3ub(128, 128, 128);
    glVertex2f(526, 356);
    glVertex2f(537, 356);
    glVertex2f(537, 402);
    glVertex2f(526, 402);
    
    glColor3ub(128, 128, 128);
    glVertex2f(538, 402);
    glVertex2f(503, 402);
    glVertex2f(503, 391);
    glVertex2f(538, 391);
    
    glColor3ub(128, 128, 128);
    glVertex2f(502, 391);
    glVertex2f(502, 414);
    glVertex2f(514, 414);
    glVertex2f(514, 391);
    
    glColor3ub(128, 128, 128);
    glVertex2f(514, 414);
    glVertex2f(514, 426);
    glVertex2f(549, 426);
    glVertex2f(549, 414);
    
    glColor3ub(128, 128, 128);
    glVertex2f(549, 426);
    glVertex2f(561, 426);
    glVertex2f(561, 438);
    glVertex2f(549, 438);
    
    glColor3ub(128, 128, 128);
    glVertex2f(549, 438);
    glVertex2f(514, 438);
    glVertex2f(514, 449);
    glVertex2f(549, 449);
    
    glColor3ub(128, 128, 128);
    glVertex2f(526, 449);
    glVertex2f(514, 449);
    glVertex2f(514, 473);
    glVertex2f(526, 473);
    
    glColor3ub(128, 128, 128);
    glVertex2f(514, 461);
    glVertex2f(502, 461);
    glVertex2f(502, 496);
    glVertex2f(514, 496);
    
    glColor3ub(128, 128, 128);
    glVertex2f(502, 485);
    glVertex2f(502, 543);
    glVertex2f(491, 543);
    glVertex2f(491, 485);
    
    glColor3ub(128, 128, 128);
    glVertex2f(502, 532);
    glVertex2f(479, 532);
    glVertex2f(479, 543);
    glVertex2f(502, 543);
    
    glColor3ub(128, 128, 128);
    glVertex2f(479, 543);
    glVertex2f(467, 543);
    glVertex2f(467, 567);
    glVertex2f(479, 567);
    
    glColor3ub(128, 128, 128);
    glVertex2f(478, 555);
    glVertex2f(514, 555);
    glVertex2f(514, 567);
    glVertex2f(478, 567);
    
    glColor3ub(128, 128, 128);
    glVertex2f(514, 496);
    glVertex2f(526, 496);
    glVertex2f(526, 555);
    glVertex2f(514, 555);
    
    glColor3ub(128, 128, 128);
    glVertex2f(526, 473);
    glVertex2f(538, 473);
    glVertex2f(538, 496);
    glVertex2f(526, 496);
    
    glColor3ub(128, 128, 128);
    glVertex2f(538, 461);
    glVertex2f(538, 473);
    glVertex2f(573, 473);
    glVertex2f(573, 461);
    
    glColor3ub(128, 128, 128);
    glVertex2f(561, 473);
    glVertex2f(573, 473);
    glVertex2f(573, 485);
    glVertex2f(561, 485);
    
    glColor3ub(128, 128, 128);
    glVertex2f(561, 485);
    glVertex2f(561, 508);
    glVertex2f(549, 508);
    glVertex2f(549, 485);
    
    glColor3ub(128, 128, 128);
    glVertex2f(561, 508);
    glVertex2f(573, 508);
    glVertex2f(573, 520);
    glVertex2f(561, 520);
    
    glColor3ub(128, 128, 128);
    glVertex2f(573, 520);
    glVertex2f(584, 520);
    glVertex2f(584, 543);
    glVertex2f(573, 543);
    
    glColor3ub(128, 128, 128);
    glVertex2f(573, 543);
    glVertex2f(561, 543);
    glVertex2f(561, 567);
    glVertex2f(573, 567);
    
    glColor3ub(128, 128, 128);
    glVertex2f(573, 555);
    glVertex2f(573, 567);
    glVertex2f(608, 567);
    glVertex2f(608, 555);
    
    glColor3ub(128, 128, 128);
    glVertex2f(608, 532);
    glVertex2f(608, 555);
    glVertex2f(620, 555);
    glVertex2f(620, 532);
    
    glColor3ub(128, 128, 128);
    glVertex2f(608, 532);
    glVertex2f(608, 520);
    glVertex2f(596, 520);
    glVertex2f(596, 532);
    
    glColor3ub(128, 128, 128);
    glVertex2f(596, 520);
    glVertex2f(596, 508);
    glVertex2f(584, 508);
    glVertex2f(584, 520);
    
    glColor3ub(128, 128, 128);
    glVertex2f(585, 485);
    glVertex2f(585, 508);
    glVertex2f(573, 508);
    glVertex2f(573, 485);
    
    glColor3ub(128, 128, 128);
    glVertex2f(596, 485);
    glVertex2f(596, 461);
    glVertex2f(584, 461);
    glVertex2f(584, 485);
    
    glColor3ub(128, 128, 128);
    glVertex2f(538, 250);
    glVertex2f(549, 250);
    glVertex2f(549, 262);
    glVertex2f(538, 262);
    
    glColor3ub(128, 128, 128);
    glVertex2f(584, 449);
    glVertex2f(631, 449);
    glVertex2f(631, 461);
    glVertex2f(584, 461);
    
    glColor3ub(128, 128, 128);
    glVertex2f(631, 438);
    glVertex2f(643, 438);
    glVertex2f(643, 449);
    glVertex2f(631, 449);
    
    glColor3ub(128, 128, 128);
    glVertex2f(643, 438);
    glVertex2f(643, 426);
    glVertex2f(655, 426);
    glVertex2f(655, 438);
    
    glColor3ub(128, 128, 128);
    glVertex2f(655, 426);
    glVertex2f(666, 426);
    glVertex2f(666, 356);
    glVertex2f(655, 356);
    
    glColor3ub(128, 128, 128);
    glVertex2f(655, 344);
    glVertex2f(655, 356);
    glVertex2f(643, 356);
    glVertex2f(643, 344);
    
    glColor3ub(128, 128, 128);
    glVertex2f(643, 344);
    glVertex2f(643, 332);
    glVertex2f(631, 332);
    glVertex2f(631, 344);
    
    glColor3ub(128, 128, 128);
    glVertex2f(631, 332);
    glVertex2f(631, 321);
    glVertex2f(597, 321);
    glVertex2f(597, 332);
    
    glColor3ub(128, 128, 128);
    glVertex2f(596, 332);
    glVertex2f(596, 344);
    glVertex2f(585, 344);
    glVertex2f(585, 332);
    
    glColor3ub(128, 128, 128);
    glVertex2f(538, 250);
    glVertex2f(549, 250);
    glVertex2f(549, 262);
    glVertex2f(538, 262);
    
    glColor3ub(128, 128, 128);
    glVertex2f(584, 344);
    glVertex2f(573, 344);
    glVertex2f(573, 356);
    glVertex2f(584, 356);
    
    glColor3ub(128, 128, 128);
    glVertex2f(572, 344);
    glVertex2f(572, 426);
    glVertex2f(561, 426);
    glVertex2f(561, 344);
    
    glColor3ub(128, 128, 128);
    glVertex2f(573, 426);
    glVertex2f(584, 426);
    glVertex2f(584, 449);
    glVertex2f(573, 449);
    
    glColor3ub(210, 43, 43);
    glVertex2f(609, 367);
    glVertex2f(609, 414);
    glVertex2f(643, 414);
    glVertex2f(643, 367);
    
    glColor3ub(210, 43, 43);
    glVertex2f(479, 274);
    glVertex2f(490, 274);
    glVertex2f(490, 285);
    glVertex2f(479, 285);
    
    glColor3ub(210, 43, 43);
    glVertex2f(502, 274);
    glVertex2f(513, 274);
    glVertex2f(513, 285);
    glVertex2f(502, 285);
    
    glColor3ub(128, 128, 128);
    glVertex2f(479, 286);
    glVertex2f(490, 286);
    glVertex2f(490, 297);
    glVertex2f(479, 297);
    
    glColor3ub(128, 128, 128);
    glVertex2f(503, 287);
    glVertex2f(513, 287);
    glVertex2f(513, 296);
    glVertex2f(503, 296);
    
    glEnd();
    
    glPopMatrix();
}


