#include <GL/glut.h>

GLint vertexArray[]={0,0,10,0,0,5,10,5,0,10,10,10,0,15,10,15};
GLfloat colorArray[]={1,0,0,0,1,0,0,0,1,1,0,0,0,1,0,0,0,1,1,0,0,0,1,0};
GLuint vertexIndex[]={0,1,2,3,4,5,6,7};

void display(){
	glClearColor(1,1,1,0);
	glClear(GL_COLOR_BUFFER_BIT);
	glEnableClientState(GL_VERTEX_ARRAY);
	glEnableClientState(GL_COLOR_ARRAY);	
	glVertexPointer(2,GL_INT,0,vertexArray);
	glColorPointer(3,GL_FLOAT,0,colorArray);
	glPolygonMode(GL_FRONT_AND_BACK,GL_LINE);
	glDrawElements(GL_TRIANGLE_STRIP,8,GL_UNSIGNED_INT,vertexIndex);
	glFlush();	
	}
int main(int argc,char** argv){
	glutInit(&argc,argv);
	glutInitWindowPosition(50,50);
	glutInitWindowSize(640,480);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutCreateWindow("vertex Array Example");
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(-5,15,-5,20);
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
	}
