#include <GL/glut.h>

void  bts(){
	glClear(GL_COLOR_BUFFER_BIT);
	
	glColor3f(1.0f,1.0f,1.0f); //color
	glBegin(GL_LINE_LOOP);
		glVertex2f(100, 520);
		glVertex2f(40, 460);
		glVertex2f(100, 400);
		glVertex2f(220, 400);
		glVertex2f(280, 460);
		glVertex2f(220, 520);
	glEnd();
	
	glColor3f(0.50f,0.60f,0.0f); //color
	glBegin(GL_LINE_LOOP);
		glVertex2f(490, 600);
		glVertex2f(360, 360);
		glVertex2f(620, 360);
	glEnd();
	
	glColor3f(0.1f,0.1f,1.0f); //color
	glBegin(GL_LINE_STRIP);
		glVertex2f(40, 280);
		glVertex2f(40, 80);
		glVertex2f(120, 80);
		glVertex2f(120, 280);
	glEnd();
	
	
	glColor3f(0.1f,0.1f,1.0f); //color
	glBegin(GL_LINE_STRIP);
		glVertex2f(240, 280);
		glVertex2f(160, 280);
		glVertex2f(160, 80);
		glVertex2f(240, 80);
		glVertex2f(240, 180);
		glVertex2f(200, 180);
	glEnd();
	
	
	
	glColor3f(0.1f,0.3f,8.0f);
    glPointSize(10.0f);
    glBegin(GL_POINTS); 
    	glVertex2f(400, 280);
		glVertex2f(600, 280);
		glVertex2f(600, 120);
	glEnd();
	glutSwapBuffers();
}

int main(int argc, char** argv){
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);
	glutInitWindowSize(640, 640);
	glutCreateWindow("BTS");
	glutDisplayFunc(bts);
	gluOrtho2D(0, 640, 0, 640);
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glutMainLoop();      
	
	return 0;
}
