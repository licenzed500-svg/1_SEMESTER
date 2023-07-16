//
//  FigurePos.h
//  Xcode_OpenGL
//
//  Created by Максим Мержев on 25.04.2023.
//

#ifndef FigurePos_h
#define FigurePos_h

#include <GLFW/glfw3.h>
#include <GLUT/GLUT.h>

struct Position
{
    GLfloat x = 0;
    GLfloat y = 0;
    const GLfloat z = 0;
    GLfloat angle = 0;
    GLfloat scaleX = 1;
    GLfloat scaleY = 1;
    GLfloat scaleZ = 1;
    
    
};

struct Figure
{
    short hp = 100;
    Position pos;
    bool isRight = false;
};

#endif /* FigurePos_h */
