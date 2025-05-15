#include<GL/glut.h>
void drawString(void *font,float x,float y,char *str){
	char *ch;
	glRasterPos3f(x,y,0.0);
	for(ch=str;*ch;ch++){
	glutBitmapCharacter(font,(int)*ch);}
	}
void display(void){
	glClearColor(1.0,0.0,1.0,0.0);
	glClear(GL_COLOR_BUFFER_BIT);
	glRasterPos3f(60.0,40.0,0.0);
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,122);
	drawString(GLUT_BITMAP_HELVETICA_18,30.0,100.0,"This is a text");
	glFlush();
}
int main(int argc, char **argv){
	glutInit(&argc,argv);
	glutInitWindowSize(500,500);
	glutInitWindowPosition(100,100);
	glutCreateWindow("Text openGL-GLUT");
	glutDisplayFunc(display);
	glOrtho(0.0,500,0.0,500,-1.0,1.0);
	glutMainLoop();
	return 0;	
}
