// gcc main.c axes.o init.c lumiere.o switch_blend.o switch_light.o VM_init.o -lm -lGL -no-pie -lGLU -lglut -o drone.exe

#include <GL/glut.h>    
#include <GL/gl.h>	
#include "./axes.h"	

	
#include "./actions.c"	
#include "./VM_init.h"
#include <stdio.h>
#include <math.h>
#include "./drone.c"
#include "./environement.c"

#define LUMIERE_POSITIONNELLE 1.0
#define LUMIERE_DIRECTIONNELLE 0.0

GLfloat rotationG =0.0;
GLfloat rotationD =0.0;


GLint eliceG = 0;
GLint eliceD = 0;
GLint droneCamOn = 0;
GLint move = 0;

GLint backAuto = 0;
 //le retour auto 

  
int window;

GLfloat xDrone = 0.0;
GLfloat yDrone = -8.2;
GLfloat zDrone = 0.0; 


GLfloat xrot = 0.0;
GLfloat yrot = 0.0;
GLfloat z = -5.0; 
GLfloat angle = 0.0f; 





GLvoid Modelisation()
{
  VM_init();
  
if (eliceG==1 && eliceD==1) //Activation du movement du drone aprés le lancement des quatre elices 
    move=1;

if (eliceG==1){ //rotation elices gauches
if (rotationG>360)
  rotationG=0;
  rotationG=rotationG+50;
}

if (eliceD==1){ //rotation elices droites
if (rotationD>360)
  rotationD=0;
  rotationD=rotationD+50;
}

 

if ( backAuto==1 ) { //le retour du Drone à sa position initial  
     xDrone = 0.0;
     yDrone = -8.2;
     zDrone = 0.0; 
     backAuto =0;
     }

                  
 //rajouter les lumieres + un mouvement dans les cercles


      

glPushMatrix();
{
 if (droneCamOn==0) 

{   if ( yDrone<=0 ){
    gluLookAt(xDrone,0,zDrone+5,xDrone,yDrone,zDrone, 0 , 0, -1); 
      } 
    else 
    gluLookAt(xDrone,0,zDrone+5,xDrone,yDrone,zDrone, 0, 0, 1); 
 } else {	z=1.5;
			xrot = 90;
			glTranslatef(-xDrone,-yDrone,-zDrone); } 
   glPushMatrix();
{
	
	glPushMatrix();
	{
	glPushMatrix();
	{	glTranslatef(xDrone,yDrone,zDrone);
		corp();		
		Ailes(rotationG,rotationD);
	}
  	glPopMatrix();
	axes();
	env(); 
        
 	 glutSwapBuffers();
	}
  	glPopMatrix();
}
  glPopMatrix();
  
  glPopMatrix();
env();
}  
  
} 

int main(int argc, char **argv) 
{  
  return notre_init(argc, argv, &Modelisation);
}



