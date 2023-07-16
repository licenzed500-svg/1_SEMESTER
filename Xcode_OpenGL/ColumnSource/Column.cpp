//
//  Column.cpp
//  Xcode_OpenGL
//
//  Created by Максим Мержев on 19.05.2023.
//

#include "Column.hpp"
#include <GLFW/glfw3.h>
#include <GLUT/GLUT.h>

void drawColumn()
{
    glPushMatrix();
    glBegin(GL_QUADS);
    
    //40,40,45 - grey
    
    //grey elements
    glColor3ub(40, 40, 45);
    glVertex2f(517, 228);
    glVertex2f(543, 228);
    glVertex2f(543, 408);
    glVertex2f(517, 408);
    
    glColor3ub(40, 40, 45);
    glVertex2f(543, 236);
    glVertex2f(551, 236);
    glVertex2f(551, 392);
    glVertex2f(543, 392);
    
    glColor3ub(40, 40, 45);
    glVertex2f(551, 294);
    glVertex2f(560, 294);
    glVertex2f(560, 384);
    glVertex2f(551, 384);
    
    glColor3ub(40, 40, 45);
    glVertex2f(517, 236);
    glVertex2f(508, 236);
    glVertex2f(508, 293);
    glVertex2f(517, 293);
    
    glColor3ub(40, 40, 45);
    glVertex2f(508, 236);
    glVertex2f(500, 236);
    glVertex2f(500, 269);
    glVertex2f(508, 269);
    
    glColor3ub(40, 40, 45);
    glVertex2f(508, 302);
    glVertex2f(517, 302);
    glVertex2f(517, 417);
    glVertex2f(508, 417);
    
    glColor3ub(40, 40, 45);
    glVertex2f(508, 310);
    glVertex2f(500, 310);
    glVertex2f(500, 326);
    glVertex2f(508, 326);
    
    glColor3ub(40, 40, 45);
    glVertex2f(509, 408);
    glVertex2f(526, 408);
    glVertex2f(526, 417);
    glVertex2f(509, 417);
    
    glColor3ub(40, 40, 45);
    glVertex2f(517, 417);
    glVertex2f(534, 417);
    glVertex2f(534, 425);
    glVertex2f(517, 425);
    
    glColor3ub(40, 40, 45);
    glVertex2f(526, 425);
    glVertex2f(535, 425);
    glVertex2f(535, 491);
    glVertex2f(526, 491);
    
    glColor3ub(40, 40, 45);
    glVertex2f(526, 450);
    glVertex2f(517, 450);
    glVertex2f(517, 491);
    glVertex2f(526, 491);
    
    glColor3ub(40, 40, 45);
    glVertex2f(535, 425);
    glVertex2f(543, 425);
    glVertex2f(543, 483);
    glVertex2f(535, 483);
    
    glColor3ub(40, 40, 45);
    glVertex2f(543, 425);
    glVertex2f(551, 425);
    glVertex2f(551, 474);
    glVertex2f(543, 474);
    
    glColor3ub(40, 40, 45);
    glVertex2f(551, 434);
    glVertex2f(560, 434);
    glVertex2f(560, 466);
    glVertex2f(551, 466);
    
    glColor3ub(40, 40, 45);
    glVertex2f(560, 434);
    glVertex2f(568, 434);
    glVertex2f(568, 458);
    glVertex2f(560, 458);
    
    glColor3ub(40, 40, 45);
    glVertex2f(552, 401);
    glVertex2f(560, 401);
    glVertex2f(560, 417);
    glVertex2f(552, 417);
    
    glColor3ub(40, 40, 45);
    glVertex2f(560, 393);
    glVertex2f(568, 393);
    glVertex2f(568, 425);
    glVertex2f(560, 425);
    
    glColor3ub(40, 40, 45);
    glVertex2f(517, 500);
    glVertex2f(466, 500);
    glVertex2f(466, 507);
    glVertex2f(517, 507);
    
    glColor3ub(40, 40, 45);
    glVertex2f(526, 228);
    glVertex2f(526, 220);
    glVertex2f(534, 220);
    glVertex2f(534, 228);
    
    glColor3ub(40, 40, 45);
    glVertex2f(526, 508);
    glVertex2f(526, 515);
    glVertex2f(534, 515);
    glVertex2f(534, 508);
    
    glColor3ub(40, 40, 45);
    glVertex2f(534, 507);
    glVertex2f(534, 500);
    glVertex2f(542, 500);
    glVertex2f(542, 507);
    
    glColor3ub(40, 40, 45);
    glVertex2f(517, 500);
    glVertex2f(466, 500);
    glVertex2f(466, 507);
    glVertex2f(517, 507);
    
    glColor3ub(40, 40, 45);
    glVertex2f(543, 499);
    glVertex2f(543, 491);
    glVertex2f(551, 491);
    glVertex2f(551, 499);
    
    glColor3ub(40, 40, 45);
    glVertex2f(551, 491);
    glVertex2f(551, 483);
    glVertex2f(560, 483);
    glVertex2f(560, 491);
    
    glColor3ub(40, 40, 45);
    glVertex2f(517, 549);
    glVertex2f(526, 549);
    glVertex2f(526, 573);
    glVertex2f(517, 573);
    
    glColor3ub(40, 40, 45);
    glVertex2f(526, 533);
    glVertex2f(534, 533);
    glVertex2f(534, 565);
    glVertex2f(526, 565);
    
    glColor3ub(40, 40, 45);
    glVertex2f(534, 516);
    glVertex2f(534, 557);
    glVertex2f(543, 557);
    glVertex2f(543, 516);
    
    glColor3ub(40, 40, 45);
    glVertex2f(543, 508);
    glVertex2f(543, 549);
    glVertex2f(552, 549);
    glVertex2f(552, 508);
    
    glColor3ub(40, 40, 45);
    glVertex2f(552, 500);
    glVertex2f(552, 540);
    glVertex2f(560, 540);
    glVertex2f(560, 500);
    
    glColor3ub(40, 40, 45);
    glVertex2f(560, 492);
    glVertex2f(560, 532);
    glVertex2f(568, 532);
    glVertex2f(568, 492);
    
    glColor3ub(40, 40, 45);
    glVertex2f(406, 458);
    glVertex2f(415, 458);
    glVertex2f(415, 500);
    glVertex2f(406, 500);
    
    glColor3ub(40, 40, 45);
    glVertex2f(406, 499);
    glVertex2f(380, 499);
    glVertex2f(380, 490);
    glVertex2f(406, 490);
    
    glColor3ub(40, 40, 45);
    glVertex2f(449, 285);
    glVertex2f(458, 285);
    glVertex2f(458, 293);
    glVertex2f(449, 293);
    
    
    //light-grey elements
    
    glColor3ub(65, 62, 66);
    glVertex2f(372, 466);
    glVertex2f(381, 466);
    glVertex2f(381, 376);
    glVertex2f(372, 376);
    
    glColor3ub(65, 62, 66);
    glVertex2f(381, 475);
    glVertex2f(389, 475);
    glVertex2f(389, 220);
    glVertex2f(381, 220);
    
    glColor3ub(65, 62, 66);
    glVertex2f(388, 228);
    glVertex2f(398, 228);
    glVertex2f(398, 475);
    glVertex2f(389, 475);
    
    glColor3ub(65, 62, 66);
    glVertex2f(398, 236);
    glVertex2f(406, 236);
    glVertex2f(406, 466);
    glVertex2f(398, 466);
    
    glColor3ub(65, 62, 66);
    glVertex2f(406, 244);
    glVertex2f(415, 244);
    glVertex2f(415, 425);
    glVertex2f(406, 425);
    
    glColor3ub(65, 62, 66);
    glVertex2f(406, 442);
    glVertex2f(414, 442);
    glVertex2f(414, 458);
    glVertex2f(406, 458);
    
    glColor3ub(65, 62, 66);
    glVertex2f(415, 351);
    glVertex2f(423, 351);
    glVertex2f(423, 425);
    glVertex2f(415, 425);
    
    glColor3ub(65, 62, 66);
    glVertex2f(415, 253);
    glVertex2f(423, 253);
    glVertex2f(423, 318);
    glVertex2f(415, 318);
    
    glColor3ub(65, 62, 66);
    glVertex2f(406, 524);
    glVertex2f(414, 524);
    glVertex2f(414, 565);
    glVertex2f(406, 565);
    
    glColor3ub(65, 62, 66);
    glVertex2f(406, 516);
    glVertex2f(406, 557);
    glVertex2f(397, 557);
    glVertex2f(397, 516);
    
    glColor3ub(65, 62, 66);
    glVertex2f(397, 508);
    glVertex2f(389, 508);
    glVertex2f(389, 548);
    glVertex2f(397, 548);
    
    glColor3ub(65, 62, 66);
    glVertex2f(389, 500);
    glVertex2f(380, 500);
    glVertex2f(380, 540);
    glVertex2f(389, 540);
    
    glColor3ub(65, 62, 66);
    glVertex2f(380, 492);
    glVertex2f(372, 492);
    glVertex2f(372, 532);
    glVertex2f(380, 532);
    
    
    //haki elements
    
    glColor3ub(85, 85, 85);
    glVertex2f(414, 532);
    glVertex2f(414, 573);
    glVertex2f(518, 573);
    glVertex2f(518, 532);
    
    glColor3ub(85, 85, 85);
    glVertex2f(414, 524);
    glVertex2f(414, 516);
    glVertex2f(518, 516);
    glVertex2f(518, 524);
    
    glColor3ub(85, 85, 85);
    glVertex2f(414, 532);
    glVertex2f(414, 573);
    glVertex2f(518, 573);
    glVertex2f(518, 532);
    
    glColor3ub(85, 85, 85);
    glVertex2f(406, 516);
    glVertex2f(406, 508);
    glVertex2f(518, 508);
    glVertex2f(518, 516);
    
    glColor3ub(85, 85, 85);
    glVertex2f(526, 524);
    glVertex2f(526, 549);
    glVertex2f(518, 549);
    glVertex2f(518, 524);
    
    glColor3ub(85, 85, 85);
    glVertex2f(527, 524);
    glVertex2f(527, 516);
    glVertex2f(535, 516);
    glVertex2f(535, 524);
    
    glColor3ub(85, 85, 85);
    glVertex2f(535, 516);
    glVertex2f(535, 508);
    glVertex2f(544, 508);
    glVertex2f(544, 516);
    
    glColor3ub(85, 85, 85);
    glVertex2f(544, 508);
    glVertex2f(544, 500);
    glVertex2f(552, 500);
    glVertex2f(552, 508);
    
    glColor3ub(85, 85, 85);
    glVertex2f(552, 499);
    glVertex2f(552, 491);
    glVertex2f(561, 491);
    glVertex2f(561, 499);
    
    glColor3ub(85, 85, 85);
    glVertex2f(561, 491);
    glVertex2f(561, 483);
    glVertex2f(569, 483);
    glVertex2f(569, 491);
    
    glColor3ub(85, 85, 85);
    glVertex2f(501, 236);
    glVertex2f(423, 236);
    glVertex2f(423, 499);
    glVertex2f(501, 499);
    
    //olive elemnts 128, 128, 0
    
    glColor3ub(128, 128, 0);
    glVertex2f(518, 507);
    glVertex2f(518, 491);
    glVertex2f(535, 491);
    glVertex2f(535, 507);
    
    glColor3ub(128, 128, 0);
    glVertex2f(535, 499);
    glVertex2f(535, 483);
    glVertex2f(543, 483);
    glVertex2f(543, 499);
    
    glColor3ub(128, 128, 0);
    glVertex2f(544, 491);
    glVertex2f(544, 475);
    glVertex2f(552, 475);
    glVertex2f(552, 491);
    
    glColor3ub(128, 128, 0);
    glVertex2f(552, 483);
    glVertex2f(552, 467);
    glVertex2f(560, 467);
    glVertex2f(560, 483);
    
    glColor3ub(128, 128, 0);
    glVertex2f(527, 409);
    glVertex2f(527, 417);
    glVertex2f(552, 417);
    glVertex2f(552, 409);
    
    glColor3ub(128, 128, 0);
    glVertex2f(535, 417);
    glVertex2f(561, 417);
    glVertex2f(561, 425);
    glVertex2f(535, 425);
    
    glColor3ub(128, 128, 0);
    glVertex2f(553, 425);
    glVertex2f(569, 425);
    glVertex2f(569, 433);
    glVertex2f(553, 433);
    
    
    //grey writing
    glColor3ub(40, 40, 45);
    glVertex2f(449, 285);
    glVertex2f(458, 285);
    glVertex2f(458, 293);
    glVertex2f(449, 293);
    
    glColor3ub(40, 40, 45);
    glVertex2f(449, 310);
    glVertex2f(449, 326);
    glVertex2f(457, 326);
    glVertex2f(457, 310);
    
    glColor3ub(40, 40, 45);
    glVertex2f(457, 318);
    glVertex2f(483, 318);
    glVertex2f(483, 326);
    glVertex2f(457, 326);
    
    glColor3ub(40, 40, 45);
    glVertex2f(449, 360);
    glVertex2f(475, 360);
    glVertex2f(475, 367);
    glVertex2f(449, 367);
    
    glColor3ub(40, 40, 45);
    glVertex2f(484, 376);
    glVertex2f(492, 376);
    glVertex2f(492, 392);
    glVertex2f(484, 392);
    
    glColor3ub(40, 40, 45);
    glVertex2f(484, 360);
    glVertex2f(492, 360);
    glVertex2f(492, 367);
    glVertex2f(484, 367);
    
    glColor3ub(40, 40, 45);
    glVertex2f(484, 343);
    glVertex2f(492, 343);
    glVertex2f(492, 351);
    glVertex2f(484, 351);
    
    glColor3ub(40, 40, 45);
    glVertex2f(458, 401);
    glVertex2f(466, 401);
    glVertex2f(466, 409);
    glVertex2f(458, 409);
    
    glColor3ub(40, 40, 45);
    glVertex2f(466, 409);
    glVertex2f(475, 409);
    glVertex2f(475, 425);
    glVertex2f(466, 425);
    
    glColor3ub(40, 40, 45);
    glVertex2f(458, 409);
    glVertex2f(449, 409);
    glVertex2f(449, 425);
    glVertex2f(458, 425);
    
    //stand
    glColor3ub(85, 85, 85);
    glVertex2f(397, 235);
    glVertex2f(397, 228);
    glVertex2f(518, 228);
    glVertex2f(518, 235);
    
    glColor3ub(85, 85, 85);
    glVertex2f(397, 203);
    glVertex2f(397, 220);
    glVertex2f(535, 220);
    glVertex2f(535, 203);
    
    glColor3ub(85, 85, 85);
    glVertex2f(388, 220);
    glVertex2f(388, 228);
    glVertex2f(526, 228);
    glVertex2f(526, 220);
    
    glColor3ub(85, 85, 85);
    glVertex2f(535, 203);
    glVertex2f(535, 178);
    glVertex2f(510, 178);
    glVertex2f(510, 203);
    
    glColor3ub(85, 85, 85);
    glVertex2f(510, 187);
    glVertex2f(501, 187);
    glVertex2f(501, 203);
    glVertex2f(510, 203);
    
    glColor3ub(85, 85, 85);
    glVertex2f(406, 195);
    glVertex2f(440, 195);
    glVertex2f(440, 203);
    glVertex2f(406, 203);
    
    glEnd();
    glPopMatrix();
}

