
void env(){
      
  
 //backGround
  glBegin(GL_QUADS);{
  glColor3ub(224,255,255);
  glVertex3f (-20.0f, -10.0f, -20.0f);//4
  glVertex3f (20.0f, -10.0f, -20.0f);//3
  glVertex3f (20.0f, 20.0f, -20.0f);//6
  glVertex3f (-20.0f, 20.0f, -20.0f);}//5
  glEnd();
//floor
  glBegin(GL_QUADS);{
  glColor3ub(80,220,100);
  glVertex3f (-20.0f, -10.0f, 20.0f);//1
  glVertex3f (20.0f, -10.0f, 20.0f); //2
  glVertex3f (20.0f, -10.0f, -20.0f);//3
  glVertex3f (-20.0f, -10.0f, -20.0f);}//4
  glEnd(); 

//droite 

glBegin(GL_QUADS);{
  glColor3ub(224,255,255);
  glVertex3f (20.0f, -10.0f, 20.0f); //2
  glVertex3f (20.0f, -10.0f, -20.0f);//3
  glVertex3f (20.0f, 20.0f, -20.0f);//6
  glVertex3f (20.0f, 20.0f, 20.0f);} //7
  glEnd(); 

//gauche 

glBegin(GL_QUADS);{
  glColor3ub(224,255,255);
  glVertex3f (-20.0f, -10.0f, -20.0f);//4
  glVertex3f (-20.0f, 20.0f, -20.0f);//5
  glVertex3f (-20.0f, 20.0f, 20.0f);//8
  glVertex3f (-20.0f, -10.0f, 20.0f);}//1}
  glEnd(); 

//ciel
glBegin(GL_QUADS);{
 glColor3ub(224,255,255);
  glVertex3f (20.0f, 20.0f, 20.0f);//7
  glVertex3f (20.0f, 20.0f, -20.0f);//6
  glVertex3f (-20.0f, 20.0f, -20.0f);//5
  glVertex3f (-20.0f, 20.0f, 20.0f);}//8
  glEnd(); 
  
//face
  glBegin(GL_QUADS);{
  glColor3ub(224,255,255);
  glVertex3f (-20.0f, 20.0f, 20.0f);//8
  glVertex3f (20.0f, 20.0f, 20.0f);//7
  glVertex3f (20.0f, -10.0f, 20.0f); //2
  glVertex3f (-20.0f, -10.0f, 20.0f);}//1}
  glEnd(); 

glPushMatrix();
{	
	glColor3ub(150,150,150);
	glTranslatef(0.0,-9.0,0.0);
	glutSolidCube(1);
	
}
glPopMatrix();

glPushMatrix();
{
glTranslatef(0.0,-7.5,0.0);



glTranslatef(2.0,0.,0.0);
glPushMatrix();
{
 for (GLint i= 0 ; i<7 ;i++ )
	{
	glColor3ub(222,184,135);
	glTranslatef(0,0,-2);       
	glutSolidCube(1);
	}

}
glPopMatrix();

glPushMatrix();
{
 for (GLint i= 0 ; i<7 ;i++ )
	{
	glColor3ub(222,184,135);
	glTranslatef(0,0,2);
	glutSolidCube(1);
	}

}
glPopMatrix();

}
glPopMatrix();
//





glPushMatrix();
{
 for (GLint i= 0 ; i<7 ;i++ )
	{
	glColor3ub(49+5*i,19+5*i,150+5*i);
	glTranslatef(0,0,-2);
	glutSolidTorus( 0.7+1/4,
                    1.5+i/4,
                    10,12);
	}
}
glPopMatrix();





/*glPushMatrix();
{	
	glColor3ub(0,150,150);
	glTranslatef(10,-9.0,0.0);
	glutSolidCube(1);
	
}
glPopMatrix();

glPushMatrix();
{	
	glColor3ub(150,0,150);
	glTranslatef(7,-9.0,3.0);
	glutSolidSphere(1,30,30);
	
}
glPopMatrix();


glPushMatrix();
{	
	glColor3ub(150,0,150);
	glTranslatef(16,-9.0,0.0);
	//glRotatef(45,0,1,0);
        //glScalef(0.05,0.6,0.05);
	glutSolidCube(1);
	
}
glPopMatrix();

glPushMatrix();
{	
	glColor3ub(49,19,150);
	glTranslatef(12.0,-9.0,-8.0);
	glutSolidSphere(2,20,20);
	
}
glPopMatrix();

glPushMatrix();
{
 for (GLint i= 0 ; i<7 ;i++ )
	{
	glColor3ub(49+5*i,19+5*i,150+5*i);
	glTranslatef(0,0,-2);
	//glRotatef(45,0,1,0);
        //glScalef(0.05,0.6,0.05);
	glutSolidTorus( 0.7+1/4,
                    1.5+i/4,
                    10,12);
	}
}
glPopMatrix();

glutSolidTorus(GLdouble innerRadius,
                    GLdouble outerRadius,
                    GLint nsides, GLint rings);*/
	
  }
 
