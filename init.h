#ifndef __INIT
#define __INIT

#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <unistd.h>
#include <stdio.h> 
#include <stdlib.h> 
#include "touches.h"
#include "lumiere.h"
#include "actions.h"


GLvoid InitGL(GLsizei Width, GLsizei Height);	// We call this right after our OpenGL window is
GLvoid ReSizeGLScene(GLsizei Width, GLsizei Height);
void specialKeyPressed(int key, int x, int y);
int notre_init(int argc, char** argv, void (*DrawGLScene)());
#endif
