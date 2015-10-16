#include<GL/glut.h>

void bts(void){
	glClearColor(1.0,1.0,1.0,0.0);
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0 ,0.0 ,1.0);
	glOrtho(-1.0,1.0,-1.0,1.0,-1.0,1.0);
	
	glBegin(GL_TRIANGLES);
		glColor3f(1.0, 0.0, 0.0);
		glVertex2f(-0.5, -0.5);
		glColor3f(1.0, 1.0, 0.0);
		glVertex2f(0.5, -0.5);
		glColor3f(0.0, 0.0, 1.0);
		glVertex2f(0.0, 0.5);
	glEnd();	
	
	glutSwapBuffers();
}

int main(){
	glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(400,400);
	glutInitWindowPosition(100,100);
	glutCreateWindow("TRIANGLE BTS");
	glutDisplayFunc(bts);
	glutMainLoop();
}
