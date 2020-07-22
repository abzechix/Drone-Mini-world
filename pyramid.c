

#define	AVA	0
#define	ARR	1
#define	DRO	2
#define	GAU	3
#define	DOU	4


#include "stdio.h"
#include "stdlib.h"
#include "math.h"
#include "GL/gl.h"
#include "GL/glu.h"
#include "GL/glut.h"


#include <stdio.h>

typedef struct { //coordonnee
    GLfloat x,y,z;
}coordonnee;

typedef struct { //sommet
    coordonnee coordonnees;
}sommet;

typedef struct { //couleur
    float r,g,b,a;
}couleur;

typedef struct { //face
    couleur couleur;
    coordonnee normale;
}face;

typedef struct { //pyramid
    float longueur_arete;
    sommet * sommets[5];
    face * faces[5];
    coordonnee centre;
    coordonnee axe;
    GLfloat angleRot;
}pyr;

static int faces[][4]=
{

    { 0 , 1 , 4 , 0 },// triangle0     : 0
    { 1 , 2 , 4 , 0 },// triangle1     : 1
    { 2 , 3 , 4 , 0 },// triangle2     : 2
    { 3 , 0 , 4 , 0 },// triangle3     : 3
    { 0 , 1 , 2 , 3 },// base          : 4


};

static	int	sommets[][3]=
{

    { AVA , GAU , DOU },
    { AVA , DRO , DOU },
    { ARR , DRO , DOU },
    { ARR , GAU , DOU }

};





pyr * creer_pyramid(float longueur_arete);
void affiche_pyramid(pyr * c);

////////////////////////////////////////////////////////////////////////////// main



////////////////////////////////////////////////////////////////////////////// functions



pyr * creer_pyramid(float l)
{
    pyr * c = (pyr*) malloc(sizeof(pyr));
    c->longueur_arete=l;
    {
        int i;
        for(i=0 ; i<5 ; i++)
            c->sommets[i] = (sommet *) malloc(sizeof(sommet));
    }
    {
        int i;
        for(i=0 ; i<5 ; i++)
            c->faces[i] = (face *) malloc(sizeof(face));
    }



    c->sommets[0]->coordonnees.x = -l/2;
    c->sommets[0]->coordonnees.y = 0.0f;
    c->sommets[0]->coordonnees.z = -l/2;

    c->sommets[1]->coordonnees.x = l/2;
    c->sommets[1]->coordonnees.y = 0;
    c->sommets[1]->coordonnees.z = -l/2;

    c->sommets[2]->coordonnees.x = l/2;
    c->sommets[2]->coordonnees.y = 0;
    c->sommets[2]->coordonnees.z = l/2;

    c->sommets[3]->coordonnees.x = -l/2;
    c->sommets[3]->coordonnees.y = 0;
    c->sommets[3]->coordonnees.z = l/2;

    c->sommets[4]->coordonnees.x = 0;
    c->sommets[4]->coordonnees.y = l;
    c->sommets[4]->coordonnees.z = 0;


    c->faces[0]->couleur.r = 1.0f;
    c->faces[0]->couleur.g = 0.0f;
    c->faces[0]->couleur.b = 0.0f;
    c->faces[0]->couleur.a = 0.0f;

    c->faces[1]->couleur.r = 0.0f;
    c->faces[1]->couleur.g = 1.0f;
    c->faces[1]->couleur.b = 0.0f;
    c->faces[1]->couleur.a = 0.0f;

    c->faces[2]->couleur.r = 0.0f;
    c->faces[2]->couleur.g = 0.0f;
    c->faces[2]->couleur.b = 1.0f;
    c->faces[2]->couleur.a = 0.0f;

    c->faces[3]->couleur.r = 1.0f;
    c->faces[3]->couleur.g = 1.0f;
    c->faces[3]->couleur.b = 0.0f;
    c->faces[3]->couleur.a = 0.0f;

    c->faces[4]->couleur.r = 1.0f;
    c->faces[4]->couleur.g = 1.0f;
    c->faces[4]->couleur.b = 1.0f;
    c->faces[4]->couleur.a = 0.0f;

    return c;
}

void affiche_pyramid(pyr * c)
{
         // printf("11111111");
    glPushMatrix();
    glBegin(GL_QUADS);
    {
        int j;
        for(j=4 ; j <5 ; j++)
        {
            glColor4f	(
                        c->faces[j]->couleur.r,
                        c->faces[j]->couleur.g,
                        c->faces[j]->couleur.b,
                        c->faces[j]->couleur.a
                        );
            {
                int i;
                for(i=0 ; i<4 ; i++)
                {
                    glVertex3f(
                                c->sommets[faces[j][i]]->coordonnees.x,
                                c->sommets[faces[j][i]]->coordonnees.y,
                                c->sommets[faces[j][i]]->coordonnees.z
                            );
                }
            }
        }

          }glEnd();
          glPopMatrix();
          //printf("22222222");
          glPushMatrix();
	glBegin(GL_TRIANGLES);
          {


        int j;
        for(j=0 ; j <5 ; j++)
        {
            glColor4f	(
                        c->faces[j]->couleur.r,
                        c->faces[j]->couleur.g,
                        c->faces[j]->couleur.b,
                        c->faces[j]->couleur.a
                        );
            {
                int i;
                for(i=0 ; i<3 ; i++)
                {
                    glVertex3f(
                                c->sommets[faces[j][i]]->coordonnees.x,
                                c->sommets[faces[j][i]]->coordonnees.y,
                                c->sommets[faces[j][i]]->coordonnees.z
                            );
                }
            }
        }
       } glEnd();



    glPopMatrix();
}




