# include "iGraphics.h"
/* 
 function iDraw() is called again and again by the system.
*/

int i=1,sc=0,name=0,namecnt=0, flag = 0,hsdone=0, ps = 0,finalscore,highscore=0, choose = 0, speedup = 0, settingx = 100, settingy = 100, imgbool = 0, imgbool1 = 0, imgbool2 = 1, imgbool3 = 1, score = 0, mainmenux = 700, mainmenuy = 100, playagainx = 100, playagainy = 100, carmove = 5, recmove = 5;
char str[80], ch1, str1[10], str2[20],strscore[20];
long x[1000000];
int selbutx1 = 400, selbuty1 = 500, namex=500,namey=100,selbutx2=400, selbuty2=400, selbutx3=400, selbuty3=300, selbutx4=900, selbuty4=500, selbutx5=900, selbuty5=400, selbutx6=900, selbuty6=300;
int playlocx=500, playlocy=400,highscorex=500,highscorey=300,backx=900,lastbackx=900,lastbacky=100,backy=100,helplocx=500, helplocy=350,aboutlocx=800,aboutlocy=100, exitlocx=500, exitlocy=250;
int scorelocation_x = 900, scorelocation_y = 600,imagebikex1=700,imagebikey1=1500,imagebikex2=240,imagebikey2=1900,imagelocation_X = 0, imagelocation_Y = 0, imageloccar5_X = 600, imageloccar5_Y = 1498, imageloccar4_X = 400, imageloccar4_Y = 1198, imageloccar3_X = 300, imageloccar3_Y = 898, imageloccar2_X =230, imageloccar2_Y = 598, imagelocCar_X = 400, imagelocCar_Y = 0, rec_X1 = 500, rec_Y1 = 0, rec_X2 = 500, rec_Y2 = 100, rec_X3 = 500, rec_Y3 = 200;
errno_t err;
FILE *h,*k;
void iDraw()
{
	//place your drawing codes here	
	
		if (flag == 0)
		{

			iClear();
			iShowBMP(0, 0, "images\\front.bmp");
			iShowBMP(playlocx, playlocy, "images\\play.bmp");
			iShowBMP(helplocx, helplocy, "images\\help.bmp");
			iShowBMP(highscorex, highscorey, "images\\highscorebutton.bmp");
			iShowBMP(exitlocx, exitlocy, "images\\exit.bmp");
			iShowBMP(aboutlocx, aboutlocy, "images\\about.bmp");
			iShowBMP(settingx, settingy, "images\\settings.bmp");

		}
		else if (flag == 1)
		{
			iClear();
			iShowBMP(imagelocation_X, imagelocation_Y, "images\\road final 2.bmp");
			iFilledRectangle(rec_X1, rec_Y1, 15, 70);
			iFilledRectangle(rec_X2, rec_Y2, 15, 70);
			iFilledRectangle(rec_X3, rec_Y3, 15, 70);
			if (choose == 0 || choose == 1 || choose == 3 || choose == 2 || choose == 4)
			{
				iShowBMP(imageloccar3_X, imageloccar3_Y, "images\\yellow.bmp");
			}
			else if (choose == 5)
			{
				iShowBMP(imagelocCar_X, imagelocCar_Y, "images\\yellow rotated.bmp");
			}
			if (choose == 0 || choose == 1 || choose == 3 || choose == 2 || choose == 5)
			{
				iShowBMP(imageloccar2_X, imageloccar2_Y, "images\\green.bmp");
			}
			else if (choose == 4)
			{
				iShowBMP(imagelocCar_X, imagelocCar_Y, "images\\green rotated.bmp");
			}
			if (choose == 0||choose==1||choose==3||choose==4||choose==5)
			{
				iShowBMP(imageloccar4_X, imageloccar4_Y, "images\\blue.bmp");
			}
			else if (choose==2)
			{
				iShowBMP(imagelocCar_X, imagelocCar_Y, "images\\blue rotated.bmp");
			}
			if (choose == 0||choose==1||choose==2||choose==4||choose==5)
			{
				iShowBMP(imageloccar5_X, imageloccar5_Y, "images\\orange.bmp");
			}
			else if (choose == 3)
			{
				iShowBMP(imagelocCar_X, imagelocCar_Y, "images\\orange rotated.bmp");
			}
			if (choose==0)
			{
				iShowBMP(imagelocCar_X, imagelocCar_Y, "images\\red.bmp");
			}
			else if (choose == 2)
			{
				iShowBMP(imageloccar4_X, imageloccar4_Y, "images\\red rotated.bmp");
			}
			else if (choose == 3)
			{
				iShowBMP(imageloccar5_X, imageloccar5_Y, "images\\red rotated.bmp");
			}
			else if (choose == 4)
			{
				iShowBMP(imageloccar2_X, imageloccar2_Y, "images\\red rotated.bmp");
			}
			else if (choose == 5)
			{
				iShowBMP(imageloccar3_X, imageloccar3_Y, "images\\red rotated.bmp");
			}
			if (choose == 1)
			{
				iShowBMP(imagelocCar_X, imagelocCar_Y, "images\\bike.bmp");
			}
			if (choose == 0 || choose == 3 || choose == 2 || choose == 4 || choose == 5||choose==1)
			{
				iShowBMP(imagebikex1, imagebikey1, "images\\bike rotated 1.bmp");
				iShowBMP(imagebikex2, imagebikey2, "images\\bike rotated 2.bmp");
			}
			iShowBMP(backx, backy, "images\\back.bmp");
			iText(5, 5, "Press p for pause, r for resume", GLUT_BITMAP_TIMES_ROMAN_24);
			iText(800, 600, "Score:", GLUT_BITMAP_TIMES_ROMAN_24);
			iText(900, 600, str, GLUT_BITMAP_TIMES_ROMAN_24);
		}
	
		else if (flag == 2)
		{
				iClear();
				iShowBMP(0, 0, "images\\game over.bmp");
				iShowBMP(mainmenux, mainmenuy, "images\\mainmenu.bmp");
				iShowBMP(playagainx, playagainy, "images\\playagain.bmp");
				iShowBMP(320, 200, "images\\yourscore.bmp");
				iText(330, 205, "Your Score Is:", GLUT_BITMAP_TIMES_ROMAN_24);
				iText(500, 205, str, GLUT_BITMAP_TIMES_ROMAN_24);
				while (i>0)
				{
					if (fscanf_s(h, "%d", &x[i]) == EOF)
					{
						break;
					}
					if (x[i] >= highscore)
					{
						highscore = x[i];
					}
					i++;
				}
				fprintf(h, "%d\n", score);
				if (score >= highscore)
				{
					highscore = score;
					iShowBMP(300, 500, "images\\highscore.bmp");
					hsdone = 1;
				}
				fclose(h);
				
		}
		else if (flag == 3)
		{
			iClear();
			iShowBMP(0, 0, "images\\Help image.bmp");
			iShowBMP(backx, backy, "images\\back.bmp");
		}
		else if (flag == 4)
		{
			iClear();
			iShowBMP(0, 0, "images\\select.bmp");
			iShowBMP(100, 500, "images\\red.bmp");
			iShowBMP(selbutx1,selbuty1, "images\\select button 1.bmp");
			iShowBMP(100, 400, "images\\bike.bmp");
			iShowBMP(selbutx2, selbuty2, "images\\select button 2.bmp");
			iShowBMP(100, 300, "images\\blue.bmp");
			iShowBMP(selbutx3, selbuty3, "images\\select button 3.bmp");
			iShowBMP(600, 500, "images\\orange.bmp");
			iShowBMP(selbutx4, selbuty4, "images\\select button 4.bmp");
			iShowBMP(600, 400, "images\\green.bmp");
			iShowBMP(selbutx5, selbuty5, "images\\select button 5.bmp");
			iShowBMP(600, 300, "images\\yellow.bmp");
			iShowBMP(selbutx6, selbuty6, "images\\select button 6.bmp");
			iShowBMP(backx, backy, "images\\back.bmp");
		}
		else if (flag == 5)
		{
			iClear();
			iShowBMP(0, 0, "images\\about writing.bmp");
			iShowBMP(backx, backy, "images\\back.bmp");
		}
		else if (flag == 6)
		{
			iClear();
			while (i>0)
			{
				if (fscanf_s(h, "%d", &x[i]) == EOF)
				{
					break;
				}
				if (x[i] >= highscore)
				{
					highscore = x[i];
				}
				i++;
			}
			iShowBMP(0, 0, "images\\highscorelist.bmp");
			sprintf_s(strscore, "%d", highscore);
			iText(300, 500, "Highscore:", GLUT_BITMAP_TIMES_ROMAN_24);
			iText(450, 500,strscore, GLUT_BITMAP_TIMES_ROMAN_24);
			
			iShowBMP(backx, backy, "images\\back.bmp");
		}
}

void Died()
{	
	if (choose == 0||choose==2||choose==3||choose==4||choose==5)
	{
		if (imagelocCar_Y + 80 >= imageloccar2_Y&&imagelocCar_Y <= imageloccar2_Y + 86)
		{
			if (imagelocCar_X + 48 >= imageloccar2_X &&imagelocCar_X <= imageloccar2_X + 48)
			{
				flag = 2;
				PlaySound(0, 0, 0);
				PlaySound("music\\accident", NULL, SND_ASYNC);
			}
		}
		if (imagelocCar_Y + 80 >= imageloccar3_Y&&imagelocCar_Y <= imageloccar3_Y + 86)
		{

			if (imagelocCar_X + 48 >= imageloccar3_X &&imagelocCar_X <= imageloccar3_X + 48)
			{
				flag = 2;

				PlaySound(0, 0, 0);
				PlaySound("music\\accident", NULL, SND_ASYNC);
			}
		}
		if (imagelocCar_Y + 80 >= imageloccar4_Y&&imagelocCar_Y <= imageloccar4_Y + 86)
		{

			if (imagelocCar_X + 48 >= imageloccar4_X &&imagelocCar_X <= imageloccar4_X + 48)
			{
				flag = 2;

				PlaySound(0, 0, 0);
				PlaySound("music\\accident", NULL, SND_ASYNC);
			}
		}
		if (imagelocCar_Y + 80 >= imageloccar5_Y&&imagelocCar_Y <= imageloccar5_Y + 86)
		{

			if (imagelocCar_X + 48 >= imageloccar5_X &&imagelocCar_X <= imageloccar5_X + 48)
			{
				flag = 2;

				PlaySound(0, 0, 0);
				PlaySound("music\\accident", NULL, SND_ASYNC);
			}
		}
		if (imagelocCar_Y + 80 >=imagebikey1&&imagelocCar_Y <= imagebikey1+ 86)
		{

			if (imagelocCar_X + 48 >= imagebikex1 &&imagelocCar_X <= imagebikex1+ 48)
			{
				flag = 2;
				PlaySound(0, 0, 0);
				PlaySound("music\\accident", NULL, SND_ASYNC);
			}
		}
		if (imagelocCar_Y + 80 >= imagebikey2&&imagelocCar_Y <= imagebikey2 + 86)
		{

			if (imagelocCar_X + 48 >= imagebikex2 &&imagelocCar_X <= imagebikex2 + 48)
			{
				flag = 2;
				PlaySound(0, 0, 0);
				PlaySound("music\\accident", NULL, SND_ASYNC);
			}
		}
	}
	if (choose == 1)
	{
		if (imagelocCar_Y + 84 >= imageloccar2_Y&&imagelocCar_Y <= imageloccar2_Y + 84)
		{
			if (imagelocCar_X + 40 >= imageloccar2_X &&imagelocCar_X <= imageloccar2_X + 40)
			{
				flag = 2;
				PlaySound(0, 0, 0);
				PlaySound("music\\accident", NULL, SND_ASYNC);
			}
		}
		if (imagelocCar_Y + 84 >= imageloccar3_Y&&imagelocCar_Y <= imageloccar3_Y + 84)
		{

			if (imagelocCar_X + 40 >= imageloccar3_X &&imagelocCar_X <= imageloccar3_X + 40)
			{
				flag = 2;

				PlaySound(0, 0, 0);
				PlaySound("music\\accident", NULL, SND_ASYNC);
			}
		}
		if (imagelocCar_Y + 84 >= imageloccar4_Y&&imagelocCar_Y <= imageloccar4_Y + 84)
		{

			if (imagelocCar_X + 40 >= imageloccar4_X &&imagelocCar_X <= imageloccar4_X + 40)
			{
				flag = 2;

				PlaySound(0, 0, 0);
				PlaySound("music\\accident", NULL, SND_ASYNC);
			}
		}
		if (imagelocCar_Y + 84 >= imageloccar5_Y&&imagelocCar_Y <= imageloccar5_Y + 84)
		{

			if (imagelocCar_X + 40 >= imageloccar5_X &&imagelocCar_X <= imageloccar5_X + 40)
			{
				flag = 2;

				PlaySound(0, 0, 0);
				PlaySound("music\\accident", NULL, SND_ASYNC);
			}
		}
		if (imagelocCar_Y + 84 >= imagebikey1&&imagelocCar_Y <= imagebikey1 + 84)
		{

			if (imagelocCar_X + 40 >= imagebikex1 &&imagelocCar_X <= imagebikex1 + 40)
			{
				flag = 2;
				PlaySound(0, 0, 0);
				PlaySound("music\\accident", NULL, SND_ASYNC);
			}
		}
		if (imagelocCar_Y + 84 >= imagebikey2&&imagelocCar_Y <= imagebikey2 + 84)
		{

			if (imagelocCar_X + 40 >= imagebikex2 &&imagelocCar_X <= imagebikex2 + 40)
			{
				flag = 2;
				PlaySound(0, 0, 0);
				PlaySound("music\\accident", NULL, SND_ASYNC);
			}
		}
	}
}
void score_board()
{
	if (flag==1&&ps==0)
	{
		sprintf_s(str, "%d", score);
		score += 5;
		
	}
	if (score == 1000 ||score == 2000 ||score == 3000 || score == 4000 || score == 5000 || score == 6000 || score == 7000 || score == 8000 || score == 9000 || score == 10000 || score ==11000 || score == 12000 || score == 3000)
	{
		carmove += 2;
		recmove += 2;
		speedup = 1;
	}
	
	if (flag == 0)
	{
		score = 0;
	}
	
	
}
void carmoving_method()
{
	if (flag == 2||flag==0)
	{
		imageloccar5_X = 600;
		imageloccar5_Y = 1498;
		imageloccar4_X = 400;
		imageloccar4_Y = 1198;
		imageloccar3_X = 300;
		imageloccar3_Y = 898;
		imageloccar2_X = 230;
		imageloccar2_Y = 598;
		imagelocCar_X = 400;
		imagelocCar_Y = 0;
		imagebikey1 = 1500;
		imagebikey2 = 1900;
		rec_X1 = 500;
		rec_Y1 = 0;
		rec_X2 = 500;
		rec_Y2 = 100;
		rec_X3 = 500;
		rec_Y3 = 200;

	}
	if (flag==1&& ps == 0)
	{
		imageloccar2_Y -= carmove;
		imagebikey1 -= carmove;
		imagebikey2 -= carmove;
		if (imagebikey1+84 <= 0)
		{
			imagebikey1 = 1500;
		}
		if (imagebikey2+84 <= 0)
		{
			imagebikey2 = 1900;
		}
		if (imgbool == 0)
		{
			imageloccar2_X -= carmove;
		}
		if (imgbool == 1)
		{
			imageloccar2_X += carmove;
		}
		if (imageloccar2_Y <= 1)
		{
			imageloccar2_Y += 1200;
			imageloccar2_X = 230;
		}
		if (imageloccar2_X <= 222)
		{
			imgbool = 1;
		}
		if (imageloccar2_X + 56 >= 758)
		{
			imgbool = 0;
		}
		imageloccar3_Y -= carmove;
		if (imgbool1 == 0)
		{
			imageloccar3_X -= carmove;
		}
		if (imgbool1 == 1)
		{
			imageloccar3_X += carmove;
		}
		if (imageloccar3_Y <= 1)
		{
			imageloccar3_Y +=898;
			imageloccar3_X = 300;
		}
		if (imageloccar3_X <= 222)
		{
			imgbool1 = 1;
		}
		if (imageloccar3_X + 56 >= 758)
		{
			imgbool1 = 0;
		}
		imageloccar4_Y -= carmove;
		if (imgbool2 == 1)
		{
			imageloccar4_X -= carmove;
		}
		if (imgbool2 == 0)
		{
			imageloccar4_X += carmove;
		}
		if (imageloccar4_Y <= 1)
		{
			imageloccar4_Y += 1198;
			imageloccar4_X = 400;
		}
		if (imageloccar4_X <= 218)
		{
			imgbool2 = 0;
		}
		if (imageloccar4_X + 56 >= 758)
		{
			imgbool2 = 1;
		}
		imageloccar5_Y -= carmove;
		if (imgbool3 == 0)
		{
			imageloccar5_X -= carmove;
		}
		if (imgbool3 == 1)
		{
			imageloccar5_X += carmove;
		}
		if (imageloccar5_Y <= 1)
		{
			imageloccar5_Y += 1498;
			imageloccar5_X = 600;
		}
		if (imageloccar5_X <= 218)
		{
			imgbool3 = 1;
		}
		if (imageloccar5_X + 56 >= 758)
		{
			imgbool3 = 0;
		}
	}
}
void recmoving_method()
{
	if (flag==1&& ps==0)
	{
		rec_Y1 -= recmove;
		rec_Y2 -= recmove;
		rec_Y3 -= recmove;
		if (rec_Y1 <= 0)
		{
			rec_Y1 = rec_Y3 + 200;
		}
		if (rec_Y2 <= 0)
		{
			rec_Y2 = rec_Y1 + 200;
		}
		if (rec_Y3 <= 0)
		{
			rec_Y3 = rec_Y2 + 300;
		}
	}
}

/* 
 function iMouseMove() is called when the user presses and drags the mouse.
 (mx,  my) is the position where the mouse pointer is.
*/
void iMouseMove(int mx, int my)
{
	//place your codes here
}

/* 
 function iMouse() is called when the user presses/releases the mouse.
 (mx, my)  is the position where the mouse pointer is.
*/
void iMouse(int button, int state, int mx, int my)
{
	if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		if (flag == 0)
		{
			if (mx >= playlocx && mx <= 640 && my >= playlocy&&my <= 440)
			{
				flag = 1;
				PlaySound(0, 0, 0);
				PlaySound("music\\song", NULL, SND_LOOP | SND_ASYNC);
			}
			if (mx >= helplocx && mx <= 640 && my >= helplocy&&my <= 390)
			{

				flag = 3;

			}
			if (mx >= highscorex && mx <= 640 && my >= highscorey&&my <= 350)
			{

				flag = 6;

			}
			if (mx >= exitlocx && mx <= 640 && my >= exitlocy&&my <=290)
			{
				exit(0);
			}
			if (mx >=settingx && mx <=200 && my >= settingy&&my <=200)
			{
				flag = 4;
			}
			if (mx >= aboutlocx && mx <= aboutlocx+140 && my >= aboutlocy&&my <= aboutlocy+40)
			{
				flag = 5;
			}
		}
		if (mx >= backx && mx <= 980 && my >= backy&&my <= 140)
		{
			flag = 0;
			carmove = 5;
			PlaySound(0, 0, 0);
			PlaySound("music\\starting", NULL, SND_LOOP | SND_ASYNC);
		}
		if (flag == 2)
		{
			
			if (mx >= mainmenux && mx <= 880 && my >= mainmenuy &&my <= 160)
			{
				flag = 0;
				carmove = 5;
				PlaySound(0, 0, 0);
				PlaySound("music\\starting", NULL, SND_LOOP | SND_ASYNC);

			}
			else if (mx >= playagainx && mx <= 280 && my >= playagainy &&my <= 160)
			{
				flag = 1;
				score = 0;
				carmove = 5;
				PlaySound(0, 0, 0);
				PlaySound("music\\song", NULL, SND_LOOP | SND_ASYNC);
			}
		}
		if (flag == 4)
		{
			if (mx >= selbutx1 && mx <=selbutx1+100 && my >= selbuty1 && my <= selbuty1+50)
			{
				choose = 0;
				flag = 1;
				PlaySound(0, 0, 0);
				PlaySound("music\\song", NULL, SND_LOOP | SND_ASYNC);
			}
			if (mx >= selbutx2 && mx <= selbutx2+100 && my >= selbuty2 && my <= selbuty2+50)
			{
				choose = 1;
				flag = 1;
				PlaySound(0, 0, 0);
				PlaySound("music\\song", NULL, SND_LOOP | SND_ASYNC);
			}
			if (mx >= selbutx3 && mx <= selbutx3 + 100 && my >= selbuty3 && my <= selbuty3 + 50)
			{
				choose = 2;
				flag = 1;
				PlaySound(0, 0, 0);
				PlaySound("music\\song", NULL, SND_LOOP | SND_ASYNC);
			}
			if (mx >= selbutx4 && mx <= selbutx4+ 100 && my >= selbuty4 && my <= selbuty4 + 50)
			{
				choose = 3;
				flag = 1;
				PlaySound(0, 0, 0);
				PlaySound("music\\song", NULL, SND_LOOP | SND_ASYNC);
			}
			if (mx >= selbutx5 && mx <= selbutx5 + 100 && my >= selbuty5 && my <= selbuty5 + 50)
			{
				choose = 4;
				flag = 1;
				PlaySound(0, 0, 0);
				PlaySound("music\\song", NULL, SND_LOOP | SND_ASYNC);
			}
			if (mx >= selbutx6 && mx <= selbutx6 + 100 && my >= selbuty6 && my <= selbuty6 + 50)
			{
				choose = 5;
				flag = 1;
				PlaySound(0, 0, 0);
				PlaySound("music\\song", NULL, SND_LOOP | SND_ASYNC);
			}
			

		}
	
		
		//place your codes here	
	}
	if(button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		//place your codes here	
	}
}

/*
	function iKeyboard() is called whenever the user hits a key in keyboard.
	key- holds the ASCII value of the key pressed. 
*/
void iKeyboard(unsigned char key)
{
	if(key == 'q')
	{
		//do something with 'q'
	}
	if (key == 'p')
	{
		iPauseTimer(0);
		ps = 1;
	}
	if (key == 'r')
	{
		iResumeTimer(0);
		ps = 0;
	}
}

/*
function iSpecialKeyboard() is called whenver user hits special keys like- function keys, home, end, pg up, pg down, arraows etc. you have to use appropriate constants to detect them. A list is:
GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6, 
GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12, GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP, GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT  */

void iSpecialKeyboard(unsigned char key)
{
	if (flag==1&& ps == 0)
	{

		if (key == GLUT_KEY_END)
		{

		}

		if (key == GLUT_KEY_UP)
		{
			imagelocCar_Y += 25;
			if (imagelocCar_Y + 89 > 700)
			{
				imagelocCar_Y = 700 - 89;
			}
		}
		if (key == GLUT_KEY_DOWN)
		{
			imagelocCar_Y -= 25;
			if (imagelocCar_Y <= 0)
			{
				imagelocCar_Y = 0;
			}
		}
		if (key == GLUT_KEY_RIGHT)
		{
			imagelocCar_X += 25;
			if (imagelocCar_X + 56 > 760)
			{
				imagelocCar_X = 760 - 56;
			}

		}
		if (key == GLUT_KEY_LEFT)
		{
			imagelocCar_X -= 25;
			if (imagelocCar_X < 220)
			{
				imagelocCar_X = 220;
			}
		}

	}
	//place your codes for other keys here
}

int main()
{
	//place your own initialization codes here. 
		err = fopen_s(&h, "Highest Score.txt", "a+");
		err = fopen_s(&k, "Highest Scorer name.txt", "w");
		iSetTimer(20, recmoving_method);
		iSetTimer(20, carmoving_method);
		iSetTimer(5, Died);
		iSetTimer(100, score_board);
		PlaySound("music\\starting", NULL, SND_LOOP | SND_ASYNC);
		iInitialize(1000, 700, "Bangla Car-Dhaka Edition");
	return 0;
}
