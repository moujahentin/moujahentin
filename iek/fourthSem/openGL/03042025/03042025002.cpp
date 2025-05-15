#include <GL/glut.h>

GLuint x1=10,y1=10;
GLuint x2=20,y2=20;

void display(){
	glClearColor(1,1,1,0);
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1,0,0);
	glRecti(x1,y1,x2,y2);
	glFlush();
	}
	
void specialKeys(int key,int x,int y){
	if(key ==GLUT_KEY_UP){
		y1++;
		y2++;
		}
	if(key ==GLUT_KEY_DOWN){
		y1--;
		y2--;
		}
	if(key ==GLUT_KEY_LEFT){
		x1--;
		x2--;
		}
	if(key ==GLUT_KEY_RIGHT){
		x1++;
		x2++;
		}
	glutPostRedisplay();
	}
int main(int argc,char** argv){
	glutInit(&argc,argv);
	glutInitWindowPosition(50,50);
	glutInitWindowSize(640,480);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutCreateWindow("Special key Events");
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(-5,35,-5,30);
	glutDisplayFunc(display);
	glutSpecialFunc(specialKeys);
	glutMainLoop();
	return 0;
	}
