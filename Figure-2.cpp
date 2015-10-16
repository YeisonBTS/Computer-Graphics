#include<GL/glut.h>

void bts(void){
	glClearColor(1.0,1.0,1.0,0.0);
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0 ,0.0 ,1.0);
	glOrtho(-10.0,10.0,-10.0,10.0,-10.0,10.0);
	
	glBegin(GL_LINE_LOOP);
		glVertex2f(-9.5, 3.5);
		glVertex2f(-7.5, 1.5);
		glVertex2f(-5.5, 3.5);
		glVertex2f(-7.5, 6);
	glEnd();
	
	glBegin(GL_LINE_LOOP);
		glVertex2f(-7.5, 6);
		glVertex2f(-3, 6);
	glEnd();

	glBegin(GL_LINE_LOOP);
		glVertex2f(-3, 6);
		glVertex2f(-6, 3);
		glVertex2f(0, 3);
	glEnd();
		
	glBegin(GL_LINE_LOOP);
		glVertex2f(-6, 3);
		glVertex2f(0, -5);
		glVertex2f(6, -5);
		glVertex2f(0, 3);
	glEnd();
	
	glBegin(GL_LINE_LOOP);
		glVertex2f(0, -5);
		glVertex2f(-3, -8);
		glVertex2f(3, -8);
	glEnd();
	
	glBegin(GL_LINE_LOOP);
		glVertex2f(4, -5);
		glVertex2f(7, -8);
		glVertex2f(9, -8);
		glVertex2f(6, -5);
	glEnd();
	
	glutSwapBuffers();
}
int main(){
	glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(400,400);
	glutInitWindowPosition(100,100);
	glutCreateWindow("FIGURA 2 BTS");
	glutDisplayFunc(bts);
	glutMainLoop();
}
