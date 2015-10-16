#include<GL/glut.h>

void display(void){
	glClearColor(1.0,1.0,1.0,0.0);
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0 ,0.0 ,1.0);
	glOrtho(-15.0,15.0,-15.0,15.0,-15.0,15.0);
	glPointSize(4.0);
		glBegin(GL_POINTS);
			glVertex2i(2,4);
		glEnd();

	
	glBegin(GL_LINE_LOOP);
		glVertex2f(0, 3);
		glVertex2f(0, -9);
		glVertex2f(-4, -9);
		glVertex2f(5, -2);
	glEnd();
	
	glBegin(GL_LINE_LOOP);
		glVertex2f(-2, 1);
		glVertex2f(0, -1);
	glEnd();

	glBegin(GL_LINE_LOOP);
		glVertex2f(-3, 12);
		glVertex2f(-3, 8);
		glVertex2f(1, 12);
	glEnd();
		
	glBegin(GL_LINE_LOOP);
		glVertex2f(-2, 9);
		glVertex2f(0, 7);
		glVertex2f(2, 9);
		glVertex2f(0, 11);
	glEnd();
	
	glBegin(GL_LINE_LOOP);
		glVertex2f(-2, 9);
		glVertex2f(-2, 1);
		glVertex2f(2, 5);
	glEnd();
	
	glBegin(GL_LINE_LOOP);
		glVertex2f(0, 3);
		glVertex2f(5, 3);
		glVertex2f(7, 5);
		glVertex2f(2, 5);
	glEnd();
	
	glutSwapBuffers();
}
int main(){
	glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(400,400);
	glutInitWindowPosition(100,100);
	glutCreateWindow("FIGURA BTS");
	glutDisplayFunc(display);
	glutMainLoop();
}
