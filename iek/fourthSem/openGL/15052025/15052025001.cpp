#include <GL/glut.h>

int windowWidth=640,windowHeight=480;
int xwmin=-50;
int ywmin=-50;
int xwmax=50;
int ywmax=50;

GLfloat xw1=10,yw1=10;
GLfloat xw2=xw1+100,yw2=yw1+100;
void display(){
	glClearColor(1,1,1,0);
	glColor3f(0,0,1);
	glClear(GL_COLOR_BUFFER_BIT);
	glRectf(xw1,yw1,xw2,yw2);
	glFlush();
	}
void mousePassiveMotion(int x,int y){

		xw1=(float)(xwmin+(float)(x)*(float)(xwmax-xwmin)/(float)(windowWidth));
		yw1=(float)(ywmin+(float)(windowHeight-y)*(float)(ywmax-ywmin)/(float)(windowHeight));
		xw2=xw1+20;
		yw2=yw1+20;
		glutPostRedisplay();
	}

int main(int argc,char** argv){
	glutInit(&argc,argv);
	glutInitWindowPosition(50,50);
	glutInitWindowSize(640,480);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutCreateWindow("Mouse passive motion Events");
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(xwmin,xwmax,ywmin,ywmax);
	glutDisplayFunc(display);
	glutPassiveMotionFunc(mousePassiveMotion);
	glutMainLoop();
	return 0;
	}
