#include <GL/gl.h>
#include <GL/glut.h>
#include<math.h>
void display(void)
{

glClear (GL_COLOR_BUFFER_BIT);
glColor3f (0.0, 1.0, 0.0);

//sky..........................
	glBegin(GL_QUADS); //home..........////////right side
	glColor3f (0.0, 0.0, 0.0);
	glVertex3f(200.0f, 50.0f, 0.0f);
	glVertex3f(200.0f, 320.0f, 0.0f);
	glVertex3f(160.0f, 320.0f, 0.0f);
	glVertex3f(160.0f, 50.0f, 0.0f);
//door..............////////...............
glColor3f (0.80, 0.80, 0.80);
	glVertex3f(200.0f, 320.0f, 0.0f);
	glVertex3f(160.0f, 320.0f, 0.0f);
	glVertex3f(160.0f, 280.0f, 0.0f);
    glVertex3f(200.0f, 280.0f, 0.0f);


glColor3f (1.0, 1.0, 1.0);


	glVertex3f(196.0f, 50.0f, 0.0f);
	glVertex3f(200.0f, 50.0f, 0.0f);
	glVertex3f(200.0f, 140.0f, 0.0f);
    glVertex3f(196.0f, 136.0f, 0.0f);

    glColor3f (1.0, 1.0, 1.0);

    glVertex3f(196.0f, 136.0f, 0.0f);
    glVertex3f(200.0f, 140.0f, 0.0f);
    glVertex3f(170.0f, 140.0f, 0.0f);
    glVertex3f(174.0f, 136.0f, 0.0f);


    glColor3f (1.0, 1.0, 1.0);


    glVertex3f(170.0f, 140.0f, 0.0f);
    glVertex3f(170.0f, 50.0f, 0.0f);
	glVertex3f(174.0f, 50.0f, 0.0f);
    glVertex3f(174.0f, 136.0f, 0.0f);


    glColor3f (0.81, 0.71,  0.23);


    glVertex3f(174.0f, 136.0f, 0.0f);
    glVertex3f(196.0f, 136.0f, 0.0f);
	glVertex3f(196.0f, 50.0f, 0.0f);
    glVertex3f(174.0f, 50.0f, 0.0f);


//window....................
    glColor3f (1.0, 1.0, 1.0);


    glVertex3f(192.0f, 256.0f, 0.0f);
    glVertex3f(192.0f, 200.0f, 0.0f);
	glVertex3f(196.0f, 196.0f, 0.0f);
    glVertex3f(196.0f, 260.0f, 0.0f);


    glColor3f (1.0, 1.0, 1.0);


    glVertex3f(196.0f, 260.0f, 0.0f);
    glVertex3f(164.0f, 260.0f, 0.0f);
	glVertex3f(168.0f, 256.0f, 0.0f);
    glVertex3f(192.0f, 256.0f, 0.0f);



    glColor3f (1.0, 1.0, 1.0);


    glVertex3f(164.0f, 260.0f, 0.0f);
    glVertex3f(164.0f, 196.0f, 0.0f);
	glVertex3f(168.0f, 200.0f, 0.0f);
    glVertex3f(168.0f, 256.0f, 0.0f);



    glColor3f (1.0, 1.0, 1.0);


    glVertex3f(164.0f, 196.0f, 0.0f);
    glVertex3f(196.0f, 196.0f, 0.0f);
	glVertex3f(192.0f, 200.0f, 0.0f);
    glVertex3f(168.0f, 200.0f, 0.0f);



    glColor3f (1.0, 0.5, 0.0);


    glVertex3f(170.0f, 256.0f, 0.0f);
    glVertex3f(170.0f, 200.0f, 0.0f);
	glVertex3f(180.0f, 200.0f, 0.0f);
    glVertex3f(180.0f, 256.0f, 0.0f);


    glColor3f (1.0, 0.5, 0.0);


    glVertex3f(182.0f, 256.0f, 0.0f);
    glVertex3f(182.0f, 200.0f, 0.0f);
	glVertex3f(190.0f, 200.0f, 0.0f);
    glVertex3f(190.0f, 256.0f, 0.0f);






//LEFT SIDE..........................


    glColor3f (0.0, 0.0, 0.0);


    glVertex3f(34.0f, 300.0f, 0.0f);
    glVertex3f(34.0f, 50.0f, 0.0f);
	glVertex3f(60.0f, 50.0f, 0.0f);
    glVertex3f(60.0f, 300.0f, 0.0f);

    glColor3f (0.329412, 0.329412, 0.329412);

    glVertex3f(64.0f, 306.0f, 0.0f);
    glVertex3f(30.0f, 306.0f, 0.0f);
	glVertex3f(34.0f, 300.0f, 0.0f);
    glVertex3f(60.0f, 300.0f, 0.0f);

    glColor3f (0.329412, 0.329412, 0.329412);

    glVertex3f(30.0f, 306.0f, 0.0f);
    glVertex3f(30.0f, 50.0f, 0.0f);
	glVertex3f(34.0f, 50.0f, 0.0f);
    glVertex3f(34.0f, 300.0f, 0.0f);

    glColor3f (0.329412, 0.329412, 0.329412);

    glVertex3f(64.0f, 306.0f, 0.0f);
    glVertex3f(60.0f, 300.0f, 0.0f);
	glVertex3f(60.0f, 50.0f, 0.0f);
    glVertex3f(64.0f, 50.0f, 0.0f);

//LEFT WINDOW 1............

glColor3f (1.0, 1.0, 1.0);

    glVertex3f(56.0f, 270.0f, 0.0f);
    glVertex3f(38.0f, 270.0f, 0.0f);
	glVertex3f(40.0f, 268.0f, 0.0f);
    glVertex3f(54.0f, 268.0f, 0.0f);

glColor3f (1.0, 1.0, 1.0);


    glVertex3f(38.0f, 270.0f, 0.0f);
    glVertex3f(38.0f, 196.0f, 0.0f);
	glVertex3f(40.0f, 198.0f, 0.0f);
    glVertex3f(40.0f, 268.0f, 0.0f);

    glColor3f (1.0, 1.0, 1.0);

    glVertex3f(38.0f, 196.0f, 0.0f);
    glVertex3f(40.0f, 198.0f, 0.0f);
	glVertex3f(56.0f, 196.0f, 0.0f);
    glVertex3f(54.0f, 198.0f, 0.0f);

    glColor3f (1.0, 1.0, 1.0);

    glVertex3f(54.0f, 198.0f, 0.0f);
    glVertex3f(56.0f, 196.0f, 0.0f);
	glVertex3f(56.0f, 270.0f, 0.0f);
    glVertex3f(54.0f, 268.0f, 0.0f);

glColor3f (1.0, 0.5, 0.0);

    glVertex3f(40.0f, 268.0f, 0.0f);
    glVertex3f(40.0f, 198.0f, 0.0f);
	glVertex3f(46.0f, 198.0f, 0.0f);
    glVertex3f(46.0f, 268.0f, 0.0f);


    glColor3f (1.0, 0.5, 0.0);


    glVertex3f(48.0f, 268.0f, 0.0f);
    glVertex3f(48.0f, 198.0f, 0.0f);
	glVertex3f(54.0f, 198.0f, 0.0f);
    glVertex3f(54.0f, 268.0f, 0.0f);

//window 2...............

    glColor3f (1.0, 1.0, 1.0);


    glVertex3f(56.0f, 138.0f, 0.0f);
    glVertex3f(37.970f, 138.016f, 0.0f);
	glVertex3f(40.0f, 136.0f, 0.0f);
    glVertex3f(54.0f, 136.0f, 0.0f);


    glColor3f (1.0, 1.0, 1.0);

    glVertex3f(37.970f, 138.016f, 0.0f);
    glVertex3f(38.0f, 70.0f, 0.0f);
    glVertex3f(40.0f, 72.0f, 0.0f);
	glVertex3f(40.0f, 136.0f, 0.0f);

    glColor3f (1.0, 1.0, 1.0);

    glVertex3f(40.0f, 72.0f, 0.0f);
    glVertex3f(38.0f, 70.0f, 0.0f);
    glVertex3f(56.0f, 70.0f, 0.0f);
	glVertex3f(54.0f, 72.0f, 0.0f);

    glColor3f (1.0, 1.0, 1.0);

    glVertex3f(56.0f, 70.0f, 0.0f);
	glVertex3f(54.0f, 72.0f, 0.0f);
    glVertex3f(54.0f, 136.0f, 0.0f);
    glVertex3f(56.0f, 138.0f, 0.0f);


    glColor3f (1.0, 0.5, 0.0);


    glVertex3f(40.0f, 136.0f, 0.0f);
	glVertex3f(40.0f, 72.0f, 0.0f);
    glVertex3f(46.0f, 72.0f, 0.0f);
    glVertex3f(46.0f, 136.0f, 0.0f);

    glColor3f (1.0, 0.5, 0.0);


    glVertex3f(48.0f, 136.0f, 0.0f);
	glVertex3f(48.0f, 72.0f, 0.0f);
    glVertex3f(54.0f, 72.0f, 0.0f);
    glVertex3f(54.0f, 136.0f, 0.0f);

    //car parking.................


    glColor3f (0.80, 0.80, 0.80);

    glVertex3f(160.0f, 140.0f, 0.0f);
    glVertex3f(116.0f, 123.5f, 0.0f);
    glVertex3f(116.0f, 50.0f, 0.0f);
    glVertex3f(160.0f, 50.0f, 0.0f);


    glColor3f (0.329412, 0.329412, 0.329412);


    glVertex3f(116.0f, 123.5f, 0.0f);
	glVertex3f(112.0f, 122.0f, 0.0f);
    glVertex3f(112.0f, 50.0f, 0.0f);
    glVertex3f(116.0f, 50.0f, 0.0f);



    glColor3f (0.0, 0.0, 0.0);


    glVertex3f(112.0f, 122.0f, 0.0f);
	glVertex3f(108.0f, 123.5f, 0.0f);
    glVertex3f(108.0f, 50.0f, 0.0f);
    glVertex3f(112.0f, 50.0f, 0.0f);

    glColor3f (1.0, 1.0, 1.0);

    glVertex3f(108.0f, 123.5f, 0.0f);
	glVertex3f(64.0f, 140.0f, 0.0f);
    glVertex3f(64.0f, 50.0f, 0.0f);
    glVertex3f(108.0f, 50.0f, 0.0f);


    //car parking er window..............

    glColor3f (1.0, 0.5, 0.0);


    glVertex3f(116.0f, 120.0f, 0.0f);
	glVertex3f(116.0f, 70.0f, 0.0f);
    glVertex3f(130.0f, 70.0f, 0.0f);
    glVertex3f(130.0f, 120.0f, 0.0f);

    glColor3f (0.0, 0.0, 0.0);

    glVertex3f(121.5f, 120.0f, 0.0f);
	glVertex3f(121.5f, 70.0f, 0.0f);
    glVertex3f(124.5f, 70.0f, 0.0f);
    glVertex3f(124.5f, 120.0f, 0.0f);

    //baranda..........................

    glColor3f (0.329412, 0.329412, 0.329412);


    glVertex3f(160.0f, 192.5f, 0.0f);
	glVertex3f(112.0f, 172.0f, 0.0f);
    glVertex3f(112.0f, 122.0f, 0.0f);
    glVertex3f(160.0f, 140.0f, 0.0f);

    glColor3f (0.329412, 0.329412, 0.329412);


    glVertex3f(112.0f, 172.0f, 0.0f);
	glVertex3f(64.0f, 190.0f, 0.0f);
    glVertex3f(64.0f, 140.0f, 0.0f);
    glVertex3f(112.0f, 122.0f, 0.0f);

//barandar bit upper
    glColor3f (0.53, 0.12, 0.47);


    glVertex3f(160.0f, 140.0f, 0.0f);
	glVertex3f(112.0f, 122.0f, 0.0f);
    glVertex3f(112.0f, 120.0f, 0.0f);
    glVertex3f(160.0f, 138.0f, 0.0f);

glColor3f (0.53, 0.12, 0.47);

    glVertex3f(112.0f, 122.0f, 0.0f);
	glVertex3f(64.0f, 140.0f, 0.0f);
    glVertex3f(64.0f, 138.0f, 0.0f);
    glVertex3f(112.0f, 120.0f, 0.0f);

    // baranda bit lower

    glColor3f (0.53, 0.12, 0.47);


    glVertex3f(160.0f, 192.0f, 0.0f);
	glVertex3f(112.0f, 172.0f, 0.0f);
    glVertex3f(112.0f, 170.0f, 0.0f);
    glVertex3f(160.0f, 190.0f, 0.0f);



    glColor3f (0.53, 0.12, 0.47);


    glVertex3f(112.0f, 172.0f, 0.0f);
	glVertex3f(64.0f, 190.0f, 0.0f);
    glVertex3f(64.0f, 188.0f, 0.0f);
    glVertex3f(112.0f, 170.0f, 0.0f);

    //middle upor tola
    glColor3f (0.80, 0.80, 0.80);


    glVertex3f(160.0f, 320.0f, 0.0f);
	glVertex3f(112.0f, 306.0f, 0.0f);
    glVertex3f(112.0f, 172.0f, 0.0f);
    glVertex3f(160.0f, 192.0f, 0.0f);


    glColor3f (1.0, 1.0, 1.0);


    glVertex3f(112.0f, 306.0f, 0.0f);
	glVertex3f(64.0f, 306.0f, 0.0f);
    glVertex3f(64.0f, 190.0f, 0.0f);
    glVertex3f(112.0f, 172.0f, 0.0f);

    //roof....right color..................

     glColor3f (0.329412, 0.329412, 0.329412);

    glVertex3f(200.0f, 324.0f, 0.0f);
	glVertex3f(160.0f, 324.0f, 0.0f);
    glVertex3f(160.0f, 320.0f, 0.0f);
    glVertex3f(200.0f, 320.0f, 0.0f);

     glColor3f (0.329412, 0.329412, 0.329412);

    glVertex3f(160.0f, 324.0f, 0.0f);
	glVertex3f(112.0f, 310.0f, 0.0f);
    glVertex3f(112.0f, 306.0f, 0.0f);
    glVertex3f(160.0f, 320.0f, 0.0f);


glColor3f (1.0, 1.0, 1.0);


    glVertex3f(112.0f, 310.0f, 0.0f);
	glVertex3f(30.0f, 310.0f, 0.0f);
    glVertex3f(30.0f, 306.0f, 0.0f);
    glVertex3f(112.0f, 306.0f, 0.0f);

     glColor3f (1.0, 1.0, 1.0);


    glVertex3f(30.0f, 313.0f, 0.0f);
	glVertex3f(111.99f, 315.84f, 0.0f);
    glVertex3f(112.0f, 310.0f, 0.0f);
    glVertex3f(30.0f, 310.0f, 0.0f);

//roof left side....color......////////..........

glColor3f (0.329412, 0.329412, 0.329412);


    glVertex3f(64.0f, 324.0f, 0.0f);
	glVertex3f(30.0f, 315.0f, 0.0f);
    glVertex3f(30.0f, 313.0f, 0.0f);
    glVertex3f(64.0f, 322.0f, 0.0f);

glColor3f (0.329412, 0.329412, 0.329412);

    glVertex3f(126.851f, 314.331f, 0.0f);
	glVertex3f(64.0f, 324.0f, 0.0f);
    glVertex3f(64.0f, 322.0f, 0.0f);
    glVertex3f(127.494f, 314.519f, 0.0f);

//uporer barandar janala

// door.....//////////////

     glColor3f (0.0, 0.0, 0.0);


    glVertex3f(112.0f, 230.0f, 0.0f);
	glVertex3f(112.0f, 172.0f, 0.0f);
    glVertex3f(120.07f, 175.36f, 0.0f);
    glVertex3f(120.0f, 230.0f, 0.0f);

    glColor3f ( 0.329412,  0.329412,  0.329412);

    glVertex3f(128.0f, 230.0f, 0.0f);
	glVertex3f(128.0f, 220.0f, 0.0f);
    glVertex3f(148.0f, 220.0f, 0.0f);
    glVertex3f(148.0f, 230.0f, 0.0f);

    glColor3f (0.80, 0.80, 0.80);

    glVertex3f(128.0f, 220.0f, 0.0f);
	glVertex3f(127.98f, 178.66f, 0.0f);
    glVertex3f(148.07f, 187.36f, 0.0f);
    glVertex3f(148.0f, 220.0f, 0.0f);

    glColor3f (0.0, 0.0, 0.0);

    glVertex3f(134.0f, 220.0f, 0.0f);
	glVertex3f(134.0f, 181.17f, 0.0f);
    glVertex3f(136.0f, 182.0f, 0.0f);
    glVertex3f(136.0f, 220.0f, 0.0f);


    glColor3f (0.0, 0.0, 0.0);

    glVertex3f(142.0f, 220.0f, 0.0f);
	glVertex3f(142.0f, 184.5f, 0.0f);
    glVertex3f(144.0f, 185.33f, 0.0f);
    glVertex3f(144.0f, 220.0f, 0.0f);


    glColor3f (0.0, 0.0, 0.0);


    glVertex3f(128.0f, 220.0f, 0.0f);
	glVertex3f(127.99f, 178.66f, 0.0f);
    glVertex3f(130.0f, 179.5f, 0.0f);
    glVertex3f(130.0f, 220.0f, 0.0f);



    glColor3f (0.0, 0.0, 0.0);


    glVertex3f(146.0f, 220.0f, 0.0f);
	glVertex3f(146.01f, 186.17f, 0.0f);
    glVertex3f(148.0f, 187.0f, 0.0f);
    glVertex3f(148.0f, 220.0f, 0.0f);



glColor3f (1.0, 0.5, 0.0);


    glVertex3f(130.0f, 220.0f, 0.0f);
	glVertex3f(130.01f, 179.5f, 0.0f);
    glVertex3f(134.0f, 181.17f, 0.0f);
    glVertex3f(134.0f, 220.0f, 0.0f);


glColor3f (1.0, 0.5, 0.0);


    glVertex3f(136.0f, 220.0f, 0.0f);
	glVertex3f(136.01f, 182.0f, 0.0f);
    glVertex3f(142.0f, 184.5f, 0.0f);
    glVertex3f(142.0f, 220.0f, 0.0f);

glColor3f (1.0, 0.5, 0.0);


    glVertex3f(144.0f, 220.0f, 0.0f);
	glVertex3f(144.01f, 185.33f, 0.0f);
    glVertex3f(146.01f, 186.17f, 0.0f);
    glVertex3f(146.0f, 220.0f, 0.0f);

	glEnd();

	glBegin(GL_TRIANGLES);////roof tringular



	glColor3f (1.0, 1.0, 1.0);

	glVertex3f(64.0f, 322.0f, 0.0f);
    glVertex3f(30.0f, 313.0f, 0.0f);
	glVertex3f(111.99f, 315.84f, 0.0f);

	glColor3f (1.0, 1.0, 1.0);
    glVertex3f(111.99f, 315.84f, 0.0f);
    glVertex3f(112.0f, 310.0f, 0.0f);
    glVertex3f(125.92f, 314.06f, 0.0f);

glEnd();


//line...............////////////..........
glBegin(GL_LINES);

glColor3f (0.0, 0.0, 0.0);
glVertex3f(175.0f, 315.0f, 0.0f);
glVertex3f(160.0f, 315.0f, 0.0f);


glVertex3f(160.0f, 315.0f, 0.0f);
glVertex3f(135.0f, 309.0f, 0.0f);

glColor3f (0.0, 0.0, 0.0);
glVertex3f(175.0f, 310.0f, 0.0f);
glVertex3f(160.0f, 310.0f, 0.0f);


glVertex3f(160.0f, 310.0f, 0.0f);
glVertex3f(135.0f, 304.0f, 0.0f);

glColor3f (0.0, 0.0, 0.0);
glVertex3f(175.0f, 305.0f, 0.0f);
glVertex3f(160.0f, 305.0f, 0.0f);


glVertex3f(160.0f, 305.0f, 0.0f);
glVertex3f(135.0f, 299.0f, 0.0f);

//.........baranda..lines........////////////////


glColor3f (1.0, 1.0, 1.0);
glVertex3f(136.0f, 176.0f, 0.0f);
glVertex3f(112.0f, 166.0f, 0.0f);


glVertex3f(112.0f, 166.0f, 0.0f);
glVertex3f(88.0f, 175.0f, 0.0f);



glColor3f ( 1.0, 1.0, 1.0);
glVertex3f(136.0f, 172.0f, 0.0f);
glVertex3f(112.0f, 162.0f, 0.0f);


glVertex3f(112.0f, 162.0f, 0.0f);
glVertex3f(88.0f, 171.0f, 0.0f);



glColor3f (1.0, 1.0, 1.0);
glVertex3f(136.0f, 168.0f, 0.0f);
glVertex3f(112.0f, 158.0f, 0.0f);


glVertex3f(112.0f, 158.0f, 0.0f);
glVertex3f(88.0f, 167.0f, 0.0f);

glEnd();

glBegin(GL_QUADS);

 //DOOR...................CAR PARKING

    glColor3f (0.0, 0.0, 0.0);


    glVertex3f(85.0f, 105.0f, 0.0f);
    glVertex3f(85.0f, 50.0f, 0.0f);
	glVertex3f(105.0f, 50.0f, 0.0f);
    glVertex3f(105.0f, 105.0f, 0.0f);


    glColor3f (1.0, 0.5, 0.0);


    glVertex3f(88.0f, 102.0f, 0.0f);
    glVertex3f(88.0f, 52.0f, 0.0f);
	glVertex3f(104.0f, 52.0f, 0.0f);
    glVertex3f(104.0f, 102.0f, 0.0f);


    //main....road 1.....................................





    //safety..............................



    //road 2.......................




    //logo design....................







    //lack...........................


    glColor3f (0.0, 1.0, 1.0);


    glVertex3f(260.0f, 100.0f, 0.0f);
    glVertex3f(260.0f, 50.0f, 0.0f);
	glVertex3f(380.0f, 50.0f, 0.0f);
    glVertex3f(380.0f, 100.0f, 0.0f);


    //lack tree....................///.............

//LEFT SIDE TREE.........///////////............


glColor3f (0.647059, 0.16706, 0.164706);


    glVertex3f(12.0f, 102.0f, 0.0f);
    glVertex3f(12.0f, 42.0f, 0.0f);
	glVertex3f(16.0f, 42.0f, 0.0f);
    glVertex3f(16.0f, 102.0f, 0.0f);


glEnd();


//tree triangles.................////////.......


glBegin(GL_TRIANGLES);

glColor3f (0.196078, 0.8, 0.196078);


    glVertex3f(288.0f, 168.0f, 0.0f);
    glVertex3f(272.0f, 85.0f, 0.0f);
	glVertex3f(303.0f, 85.0f, 0.0f);


	glColor3f (0.196078, 0.8, 0.196078);


    glVertex3f(322.0f, 158.0f, 0.0f);
    glVertex3f(309.0f, 85.0f, 0.0f);
	glVertex3f(336.0f, 85.0f, 0.0f);


	glColor3f (0.196078, 0.8, 0.196078);


    glVertex3f(352.0f, 152.0f, 0.0f);
    glVertex3f(340.0f, 85.0f, 0.0f);
	glVertex3f(365.0f, 85.0f, 0.0f);


	//LEFT SIDE TREE//..tringal///////............

//TRAFFIC SIGNAL....................


//football ground....////////////////

//football mather bitorer line.................//////////..........

//D box left...............///////////////........

// D box right/////..........//////////

//middle divide............////////////

//mather pasher tree 1..2..3..//.............///////////

//mather paser tree tringle.1...2...3...//////////////////////

	//flower......///////////...........

    // tree root..........///////////..........

//tree root tringal..........///////////........

//.....................sun..................//

//....................hill ........../////////// ......................

    //.................... right..cloud...................

    //left cloud..../////...............

    glEnd();

glFlush ();


}
void init (void)
{
/* select clearing (background) color */
glClearColor (0.0, 1.0, 0.0, 0.0);
/* initialize viewing values */
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glOrtho(0.0, 400.0, 0.0, 400.0, -10.0, 10.0);
}

int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (1200, 600);
glutInitWindowPosition (10, 10);
glutCreateWindow ("hello");
init ();
glutDisplayFunc(display);
glutMainLoop();
return 0;
}
