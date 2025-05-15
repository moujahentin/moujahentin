#include <GL/glut.h>
GLuint listID;
void Boat(GLsizei displayListID){
	glNewList(displayListID,GL_COMPILE);
	glColor3f(0.5,0.5,0.5);
    glBegin(GL_POLYGON);
    glVertex2f(15, 10);
    glVertex2f(20, 15);
    glVertex2f(3, 15);
    glVertex2f(5, 10);
    glEnd();
    glColor3f(1,1,1);
	glBegin(GL_TRIANGLES);
    glVertex2f(14, 16);
    glVertex2f(10, 30);
    glVertex2f(10, 16);
    glEnd();
    glEndList();
	}
void display(){
	glClearColor(0,0,0,0);
	glClear(GL_COLOR_BUFFER_BIT);
	glCallList(listID);
	glFlush();
	}
int main(int argc, char** argv){
    glutInit(&argc, argv);
    glutInitWindowPosition(100, 100);
    glutInitWindowSize(640, 480);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("Using display lists");
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0,25,0,35);
	listID=glGenLists(1);
	Boat(listID);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
