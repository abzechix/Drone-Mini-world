



GLvoid corp() {
       //corp
      // le cube
  glPushMatrix();
  {
  glColor3f(0.2,0.2,0.2);
  glScalef(0.4,0.2,1.0);
  glutSolidCube(1);
  //glutSolidSphere(0.6,20,20);
  }
  glPopMatrix();
  
    //le sphere
  glPushMatrix();
  {
  glColor3f(0.2,0.2,0.2);
  glScalef(0.29,0.13,0.57);
  //glutSolidCube(1);
  glutSolidSphere(1,20,20);
  }
  glPopMatrix();

	//la cam  
 glPushMatrix();{
  glTranslatef(0.0,-0.07,0.0);
  glColor3f(0.7,0.7,0.7);
  glScalef(0.12,0.12,0.12);
  glutSolidSphere(1,20,20);
 		}
 	
  glPopMatrix();
}

//------------------------------------

GLvoid Ailes(GLfloat rotationG,GLfloat rotationD){


//BRAS diagonal : 1
glPushMatrix();
{
	
	        glRotatef(45,0,1,0);
                glColor3f(0.2,0.2,0.2);
		glScalef(1.3,0.09,0.09);
		glutSolidCube(1);
		
	
  	
}
  glPopMatrix();


//BRAS diagonal : 2
glPushMatrix();
{
	
	        glRotatef(-45,0,1,0);
                glColor3f(0.2,0.2,0.2);
		glScalef(1.2,0.09,0.09);
		glutSolidCube(1);
		
	
		
	
  	
}
  glPopMatrix();


//support vertical 1
glPushMatrix();
                {      
		          glColor3f(0.0,0.0,0.0);
			glTranslatef(0.4,0.0,0.4);
			glRotatef(45,0,1,0);
		        glScalef(0.05,0.6,0.05);
			glutSolidCube(1);
			
		}
glPopMatrix();

//helice 1
glPushMatrix();
{
	//glTranslatef(1.75,0.0,-0.9);
        glTranslatef(0.4,0.3,0.4);
	glRotatef(rotationD,0,1,0);
	glPushMatrix();
	{
  glColor3f(0.2,0.2,0.2);
		glScalef(0.3,0.01,0.05);
		glutSolidCube(1);

		}
		glPopMatrix();

	
}
  glPopMatrix();



//support vertical 2
glPushMatrix();
                {      
		          glColor3f(0.0,0.0,0.0);
			glTranslatef(-0.4,0.0,0.4);
			glRotatef(45,0,1,0);
		        glScalef(0.05,0.6,0.05);
			glutSolidCube(1);
		}
glPopMatrix();

//helice 2
glPushMatrix();
{
	//glTranslatef(1.75,0.0,-0.9);
        glTranslatef(0.4,0.3,-0.4);
	glRotatef(rotationD,0,1,0);
	glPushMatrix();
	{
  glColor3f(0.2,0.2,0.2);
		glScalef(0.3,0.01,0.05);
		glutSolidCube(1);

		}
		glPopMatrix();

	
}
  glPopMatrix();

//support horisontal1

glPushMatrix();
  {
  glColor3f(0.2,0.2,0.2);
  glTranslatef(0.4,-0.3,0.0);
  glScalef(0.05,0.05,1);
  glutSolidCube(1);
  }
  glPopMatrix();




//support vertical 3
glPushMatrix();
                {      
		          glColor3f(0.0,0.0,0.0);
			glTranslatef(0.4,0.0,-0.4);
			glRotatef(45,0,1,0);
		        glScalef(0.05,0.6,0.05);
			glutSolidCube(1);
		}
glPopMatrix();

//helice3
glPushMatrix();
{
	//glTranslatef(1.75,0.0,-0.9);
        glTranslatef(-0.4,0.3,-0.4);
	glRotatef(rotationG,0,1,0);
	glPushMatrix();
	{
  glColor3f(0.2,0.2,0.2);
		glScalef(0.3,0.01,0.05);
		glutSolidCube(1);

		}
		glPopMatrix();

	
}
  glPopMatrix();

//support vertical 2
glPushMatrix();
                {      
		          glColor3f(0.0,0.0,0.0);
			glTranslatef(-0.4,0.0,-0.4);
			glRotatef(45,0,1,0);
		        glScalef(0.05,0.6,0.05);
			glutSolidCube(1);
		}
glPopMatrix();


//helice 4
glPushMatrix();
{
	//glTranslatef(1.75,0.0,-0.9);
        glTranslatef(-0.4,0.3,0.4);
	glRotatef(rotationG,0,1,0);
	glPushMatrix();
	{
  glColor3f(0.2,0.2,0.2);
		glScalef(0.3,0.01,0.05);
		glutSolidCube(1);

		}
		glPopMatrix();

	
}
  glPopMatrix();


//support horisontal2

glPushMatrix();
  {
  glColor3f(0.2,0.2,0.2);
  glTranslatef(-0.4,-0.3,0.0);
  glScalef(0.05,0.05,1);
  glutSolidCube(1);
  }
  glPopMatrix();

}




















