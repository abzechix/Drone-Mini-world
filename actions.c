#include "actions.h"
#include "unistd.h"

extern GLfloat xrot;   
extern GLfloat yrot; 
extern int blend;
extern int light;

extern GLint eliceG ;
extern GLint eliceD ; 
extern GLint droneCamOn;
extern GLint move ;
extern GLint backAuto ;
  


extern GLfloat xDrone ;
extern GLfloat yDrone ;
extern GLfloat zDrone ; 

extern GLfloat rotSoa;
extern GLfloat rotSa;
extern int rotSx;
extern int rotSy;
extern int rotSz;

extern int rotSox;
extern int rotSoy;
extern int rotSoz;

extern GLfloat eyex ;
extern GLfloat eyey ;
extern GLfloat eyez; 
extern GLfloat pointx ;
extern GLfloat pointy ;
extern GLfloat pointz ;   
extern GLfloat axex;   
extern GLfloat axey ;
extern GLfloat axez ;

GLfloat vitesse = 0.05 ; 

void touche_pressee(unsigned char key, int x, int y) 
{
    usleep(100);

    switch (key) {    
    case ESCAPE: 
	   exit(1);                   	
	    break; 

    case ESPACE:
      xrot = 0.0f;
      yrot = 0.0f;
      break;

    case TOUCHE_MIN_B: 
    case TOUCHE_MAJ_B: 
      blend =  switch_blend(blend);  // changer l'etat de la transparence
      break;

    case TOUCHE_MIN_L: 
    case TOUCHE_MAJ_L: 
      light = switch_light(light);   // eteindre et allumer la lumiere 
      break; 

                                       //déplacer vers la droite 
   case TOUCHE_MIN_Q:
	eliceG = 1;
    if (move==1){
      if (xDrone >= -19.5)
      xDrone = xDrone - vitesse;
           else
       xDrone = -19.5 ;} 
	break;

                                    //déplacer vers la gauche

   case TOUCHE_MIN_D: 
      eliceD = 1;
       if (move==1){
       if (xDrone<=19.5)
      xDrone = xDrone + vitesse;
          else
       xDrone = 19.5; }
	break;

                               //déplacer vers le haut
   case TOUCHE_MIN_R:
   if (move==1 ){
     if (yDrone <= 19.5)
    yDrone = yDrone + vitesse;
    else 
       yDrone = 19.5; }                   
	break;

                            //déplacer vers le bas
   case TOUCHE_MIN_F:
      if (move==1 ) {
       if (yDrone >= -9 )
      yDrone = yDrone - vitesse;
       else 
       yDrone = -9;
	} break;

                        //déplacer vers l'exterieur 
   case TOUCHE_MIN_S:
   if (move==1 ){
      if (zDrone<=19.5) 
    zDrone = zDrone + vitesse;
      else 
    zDrone = 19.5; 
	}break;


   case TOUCHE_MIN_Z: // déplacer vers l'interieur
      if (move==1 ){
      if (zDrone>=-19.5)  
      zDrone = zDrone - vitesse;
       else 
      zDrone = -19.5 ;
	}break;

case 'e' :  //augmenter la vitesse si elle est inférieure de la vitesse maximale.
      if (vitesse < 0.2 )
   vitesse+=0.05;
   break;

  case 'a' :  //diminuer la vitesse si elle est supérieure de la vitesse minimale.
    if (vitesse >0.05) 
   vitesse-=0.05;
   break;

case 'x' : {  //rendre le drone à ça place initiale et desactiver l'éteindre.
     xDrone = 0.0;
     yDrone = -8.2;
     zDrone = 0.0;    
     eliceG=0;
     eliceD=0;
  }
	break;   

   //DroneCamera : 
   case 'v': {
	
         droneCamOn=1; }
	break; //Drone camera ON

   case 'g': {
         droneCamOn=0;
	xrot = 0.0f;
        yrot = 0.0f;}
	break; // Drone Camera OFF
   
   case 'w' : {   //rendre le drone à ça place initiale 
       backAuto=1;
  }
	break;
     
   
    

  
  
  }  	
   

}

