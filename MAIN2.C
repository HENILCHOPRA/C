/** TTT
    *  Programmed by : HENIL
    *  All Rights Reserved
    *  Do not attempt to run code without programmer's permission.
*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
    //--------------------------------------------------------------------------------------------------------------------
    int mul()
    {
	    int i,c1;
	    char c;
	    clrscr();
	    gotoxy(18,1); textcolor(7);
	    cprintf(" Use 'w' & 's' to navigate && 'spacebar' to confirm");
	    textcolor(4);
		gotoxy(33,10);
		cprintf("Against_CPU");
		gotoxy(33,12);
		cprintf("Multi_Player");
		gotoxy(34,20);
		cprintf("TIC TAC TOE");
	    gotoxy(37,10);
	    while(1)
	   {
		c=getch();
		switch(c)
		{
			case 's':
			    {
				system("cls");
				textcolor(4);
				gotoxy(33,10);
			cprintf("Against_CPU");
				gotoxy(33,12);
				textcolor(7);
			cprintf("-> Multi_Player");
				textcolor(4);
				gotoxy(34,20);
			cprintf("TIC TAC TOE");
				c1=2;
				break;
			    }
			case 'w':
			    {
				system("cls");
				textcolor(7);
				gotoxy(33,10);
				cprintf("-> Against_CPU");
				gotoxy(33,12);
				textcolor(4);
				cprintf("Multi_Player");
				textcolor(4);
				gotoxy(34,20);
				cprintf("TIC TAC TOE");
				c1=3;
				break;
			 }
			case ' ':
			    {
				if(c1==2)
				{
				    return (2);
				}
				else if(c1==3)
				{
				    return (3);
				}
				break;

			    }
			default:
			    {
				gotoxy(29,24);
				textcolor(4);
				cprintf("USE 'w' & 's' TO NAVIGATE.......");

			    }
			}

		 }
    }
int start()
{
    int i,c1;
    char c;
    gotoxy(18,1);
    cprintf(" Use 'w' & 's' to navigate && 'spacebar to confirm'.");
    gotoxy(37,10);
	cprintf("START");
    gotoxy(37,12);
	cprintf("EXIT");
    textcolor(4);
	  gotoxy(34,20);
	  cprintf("TIC TAC TOE.");
	  gotoxy(37,22);
	  cprintf("By- ");
	  textcolor(4);
	  cprintf("H_C");
    textcolor(4);
    while(1)
    {
	c=getch();
	switch(c)
	{
		case 's':
		    {
			system("cls");
			textcolor(4);
			gotoxy(37,10);
		cprintf("START");
			gotoxy(37,12);
			textcolor(7);
		cprintf("EXIT");
			textcolor(4);
			gotoxy(34,20);
		cprintf("TIC TAC TOE");
			c1=2;

		break;
		    }
		case 'w':
		    {
			system("cls");
			textcolor(7);
			gotoxy(37,10);
		cprintf("START");
			gotoxy(37,12);
			textcolor(4);
		cprintf("EXIT");
			textcolor(4);
			gotoxy(34,20);
		cprintf("TIC TAC TOE");
			c1=3;

		break;
		    }
		case ' ':
		    {
			if(c1==2)
			{
			    return (2);
			}
			else if(c1==3)
			{
			    return (3);
			}
			break;

		    }
		default:
		    {
			gotoxy(29,24);
			textcolor(4);
			cprintf("USE 'w' & 's' TO NAVIGATE.......");

		    }
	}

    }
}
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    void win()
    {
	system("cls");
	gotoxy(34,12);
	textcolor(4);
	cprintf("u WoN......");
	delay(3000);system("cls");
    }
    //------------------------------------------------------------------------------------------------------------------
    void delay1()
    {
    clrscr();
	gotoxy(22,1);
	cprintf("NOTE: USE 'a' 's' 'd' 'w' TO NAVIGATE...");

	textcolor(4);
	gotoxy(31,16);
	cprintf("*");
	gotoxy(37,16);
	cprintf("*");
	gotoxy(43,16);
	cprintf("*");
	gotoxy(31,12);
	cprintf("*");
	gotoxy(37,12);
	cprintf("*");
	gotoxy(43,12);
	cprintf("*");
	gotoxy(31,8);
	cprintf("*");
	gotoxy(37,8);
	cprintf("*");
	gotoxy(43,8);
	cprintf("*");
	textcolor(7);
	gotoxy(29,24);
	cprintf("WARZONE IS LOADING...");
	delay(3000);
	system("cls");
	gotoxy(28,12);
	cprintf("*** H_M_C PRESENTS YOU ***");
	delay(1500);
	system("cls");
	gotoxy(37,12);
	cprintf("TIC");
	delay(1200);
	system("cls");
	gotoxy(40,12);
	cprintf("TAC");
	delay(1200);
	system("cls");
	gotoxy(43,12);
	cprintf("TOE");
	delay(1200);
	system("cls");
	gotoxy(35,12);
	cprintf("TIC TAC TOE");
	delay(1500);
    }


    //-------------------------------------------WORKSPACE-----------------------------------------------------
int wincheck(int b[],int t)
{
    int f[16]={2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2};
    //////////////////////////////////////////////// A_I /////////////////////////////////////////////////////
	if(b[0]==t && b[1]==t && b[2]==t)
	{
	    return 5;
	}
	if(b[0]==t && b[4]==t && b[8]==t)
	{
	    return 5;
	}
	if(b[0]==t && b[3]==t && b[6]==t)
	{
	    return 5;
	}
	if(b[1]==t && b[4]==t && b[7]==t)
	{
	    return 5;
	}
	if(b[2]==t && b[5]==t && b[8]==t)
	{
	    return 5;
	}
	if(b[3]==t && b[4]==t && b[5]==t)
	{
	    return 5;
	}
	if(b[6]==t && b[7]==t && b[8]==t)
	{
	    return 5;
	}
	if(b[2]==t && b[4]==t && b[6]==t)
	{
	    f[15]=1;
	}

}
int go()
{
    int c1;char c;
    gotoxy(33,20);textcolor(4);
    cprintf(" Retry");gotoxy(40,20);
    cprintf(" EXIT");
    while(1)
    {
	c=getch();
	switch(c)
	{
	case 'a':
	    {
		gotoxy(33,20);textcolor(7);
		cprintf(" RETRY");gotoxy(40,20);textcolor(4);
		cprintf(" Exit");
		c1=1;break;
	    }
	case 'd':
	    {
		gotoxy(33,20);textcolor(4);
		cprintf(" Retry");gotoxy(40,20);textcolor(7);
		cprintf(" EXIT");break;
	    }
	case ' ':
	    {
		if(c1==1)return 1;
		else exit(0);break;
	    }
	default:
		    {
			gotoxy(29,24);
			textcolor(4);
			cprintf("USE 'a' & 'd' TO NAVIGATE.......");

		    }
	}

    }

}
    /////////////////////////////////////Multiplayer///////////////////////////////////////////////////////////
int multiplayer(int b[])
{
    int i=4,j,k,m=0,t=1,f,x=1,r,e,z=0;
    char c;
	while(1)
	{
	    c=getch();
	    switch(c)
	    {
	    case 'a':
		{
		       if(i==0)i=8;
		       else i--;
	/////////////////////////////////////BODY_PRINT//////////////////////////////////////////////////////
		    system("cls");
		    m=0;
		    for(k=8;k<=16;k+=3)
		    {
			for(j=31;j<=43;j+=6)
			{
			    if(m==i)
			    {
				gotoxy(j,k);textcolor(10);
				if(b[m]==2)cprintf("*");
				else if(b[m]==3)cprintf("O");
				else if(b[m]==5)cprintf("X");textcolor(4);
			    }
			    else
			    {
				textcolor(4);
				gotoxy(j,k);
				if(b[m]==2)cprintf("*");
				else if(b[m]==5)
				    {textcolor(7);cprintf("X");textcolor(4);}
				else if(b[m]==3)
				    {textcolor(7);cprintf("O");textcolor(4);}
			    }
			    m++;
			}
		    }
		    break;
		}
	    case 'd':
		{
		    if(i==8)i=0;
		    else i++;
		///////////////////////////////////////BODY_PRINT////////////////////////////////////////////////////
		    system("cls");
		    m=0;
		    for(k=8;k<=16;k+=3)
		    {
			for(j=31;j<=43;j+=6)
			{
			    if(m==i)
			    {
				gotoxy(j,k);textcolor(10);
				if(b[m]==2)cprintf("*");
				else if(b[m]==3)cprintf("O");
				else if(b[m]==5)cprintf("X");textcolor(4);
			    }
			    else
			    {
				textcolor(4);
				gotoxy(j,k);
				if(b[m]==2)cprintf("*");
				else if(b[m]==5)
				    {textcolor(7);cprintf("X");textcolor(4);}
				else if(b[m]==3)
				    {textcolor(7);cprintf("O");textcolor(4);}
			    }
			    m++;
			}
		    }break;

		}
	    case ' ':
		{
		    if(b[i]==2)return i;
		    break;
		}
	    default:
		    {
			gotoxy(29,24);
			textcolor(4);
			cprintf("USE 'a' & 'd' TO NAVIGATE.......");

		    }
	    }

	}
}
    //////////////////////////////////////// CPU //////////////////////////////////////////////////////////////
int display(int p)
{
    int i=4,b[9]={2,2,2,2,2,2,2,2,2},j,k,m=0,t=1,f,x=1,r,e,z=0,a;
    char c;
    randomize();
		system("cls");
		for(k=8;k<=16;k+=3)
		{
		    for(j=31;j<=43;j+=6)
		    {
			    textcolor(4);
			    gotoxy(j,k);
			    if(b[m]==2)cprintf("*");
		    }
		}

	while(1)
	{
	    c=getch();
	    switch(c)
	    {
	    case 'a':
		{
		       if(i==0)i=8;
		       else i--;
	/////////////////////////////////////BODY_PRINT//////////////////////////////////////////////////////
		    system("cls");
		    m=0;
		    for(k=8;k<=16;k+=3)
		    {
			for(j=31;j<=43;j+=6)
			{
			    if(m==i)
			    {
				gotoxy(j,k);textcolor(10);
				if(b[m]==2)cprintf("*");
				else if(b[m]==3)cprintf("O");
				else if(b[m]==5)cprintf("X");textcolor(4);
			    }
			    else
			    {
				textcolor(4);
				gotoxy(j,k);
				if(b[m]==2)cprintf("*");
				else if(b[m]==5)
				    {textcolor(7);cprintf("X");textcolor(4);}
				else if(b[m]==3)
				    {textcolor(7);cprintf("O");textcolor(4);}
			    }
			    m++;
			}
		    }
		    break;
		}
	    case 'd':
		{
		    if(i==8)i=0;
		    else i++;
		///////////////////////////////////////BODY_PRINT////////////////////////////////////////////////////
		    system("cls");
		    m=0;
		    for(k=8;k<=16;k+=3)
		    {
			for(j=31;j<=43;j+=6)
			{
			    if(m==i)
			    {
				gotoxy(j,k);textcolor(10);
				if(b[m]==2)cprintf("*");
				else if(b[m]==3)cprintf("O");
				else if(b[m]==5)cprintf("X");textcolor(4);
			    }
			    else
			    {
				textcolor(4);
				gotoxy(j,k);
				if(b[m]==2)cprintf("*");
				else if(b[m]==5)
				    {textcolor(7);cprintf("X");textcolor(4);}
				else if(b[m]==3)
				    {textcolor(7);cprintf("O");textcolor(4);}
			    }
			    m++;
			}
		    }break;

		}
case ' ':
{
	if(b[i]==2)
	{
			b[i]=5;
			t=wincheck(b,5);
				if(t==5)
				{
					system("cls");
					for(k=8;k<=16;k+=3)
					{
					    for(j=31;j<=43;j+=6)
					    {
						    textcolor(4);
						    gotoxy(j,k);
						    if(b[z]==2){cprintf("*");z++;}
						    else if(b[z]==5){textcolor(7);cprintf("X");z++;}
						    else if(b[z]==3){textcolor(4);cprintf("O");z++;}
					    }
					}
					delay(1000);
					system("cls");
					gotoxy(34,12);
					textcolor(4);
					if(p==3)cprintf("u wIN...");
					else cprintf("PlaYEr 1 wINs...");
					delay(3000);system("cls");
				    f=go();
				    if(f==1)
				return 1;
				    else
				return 2;
		    }
		    if(p==2)
		    {
				if(x==5)
				 {
					system("cls");
					gotoxy(34,12);
					textcolor(4);
					cprintf("tRy AgAiN......");
					delay(3000);system("cls");
					f=go();
					if(f==1)
						return 1;
					else
						return 2;
				 }
			a=multiplayer(b);
			b[a]=3;
				t=wincheck(b,3);
				if(t==5)
				{
					system("cls");
					for(k=8;k<=16;k+=3)
					{
					    for(j=31;j<=43;j+=6)
					    {
						    textcolor(4);
						    gotoxy(j,k);
						    if(b[z]==2){cprintf("*");z++;}
						    else if(b[z]==5){textcolor(4);cprintf("X");z++;}
						    else if(b[z]==3){textcolor(7);cprintf("O");z++;}
					    }
					}
					delay(1000);
					system("cls");
					gotoxy(34,12);
					textcolor(4);
					cprintf("PlaYEr 2 wINs......");
					delay(3000);system("cls");
				    f=go();
				    if(f==1)
				return 1;
				    else
				return 2;
				}
		    }
		if(p==3)
		{
			if(x<=2)
			{
				hash:
				r=rand() % 9;
				if(b[r]==2){b[r]=3;}
				else {goto hash;}
			}
			else
			{
				if(x==5)
				 {
					system("cls");
					gotoxy(34,12);
					textcolor(4);
					cprintf("tRy AgAiN......");
					delay(3000);system("cls");
					f=go();
					if(f==1)
						return 1;
					else
						return 2;
				 }
				e=ai(b);
				if(e==10)
					b[0]=3;
				else if(e>=1 && e<=10)
					b[e]=3;
				else
				{
					hash1:
					r=rand() % 9;
					if(b[r]==2){b[r]=3;}
					else {goto hash1;}
				}
				t=wincheck(b,3);
				if(t==5)
				{
					system("cls");
					for(k=8;k<=16;k+=3)
					{
					    for(j=31;j<=43;j+=6)
					    {
						    textcolor(4);
						    gotoxy(j,k);
						    if(b[z]==2){cprintf("*");z++;}
						    else if(b[z]==5){textcolor(4);cprintf("X");z++;}
						    else if(b[z]==3){textcolor(7);cprintf("O");z++;}
					    }
					}
					delay(1000);
					system("cls");
					gotoxy(34,12);
					textcolor(4);
					cprintf("u LOoS......");
					delay(3000);system("cls");
				    f=go();
				    if(f==1)
				return 1;
				    else
				return 2;
				}
			}



		}x++;
	}
break;
}

	    default:
		    {
			gotoxy(29,24);
			textcolor(4);
			cprintf("USE 'a' & 'd' TO NAVIGATE.......");

		    }
	    }

	}
}


    //----------------------------------------------------------------------------------------------------------------
ai(int b[])
{

   if((b[1]==3 && b[2]==3) || (b[3]==3 && b[6]==3))
    {
	if(b[0]==2)return 10;
    }
    if((b[0]==3 && b[2]==3) || (b[4]==3 && b[7]==3))
    {
	if(b[1]==2)return 1;
    }
    if((b[0]==3 && b[1]==3) || (b[5]==3 && b[8]==3))
    {
	if(b[2]==2)return 2;
    }
    if((b[0]==3 && b[6]==3) || (b[4]==3 && b[5]==3))
    {
	if(b[3]==2)return 3;
    }
    if((b[1]==3 && b[7]==3) || (b[5]==3 && b[3]==3))
    {
	if(b[4]==2)return 4;
    }
    if((b[8]==3 && b[2]==3) || (b[3]==3 && b[4]==3))
    {
	if(b[5]==2)return 5;
    }
    if((b[0]==3 && b[3]==3) || (b[7]==3 && b[8]==3))
    {
	if(b[6]==2)return 6;
    }
    if((b[6]==3 && b[8]==3) || (b[1]==3 && b[4]==3))
    {
	if(b[7]==2)return 7;
    }
    if((b[6]==3 && b[7]==3) || (b[2]==3 && b[5]==3))
    {
	if(b[8]==2)return 8;
    }
    if((b[0]==3 && b[8]==3) || (b[2]==3 && b[6]==3))
    {
	if(b[4]==2)return 4;
    }
    ///////////////////////////////////////////////////////////////////
    if(b[1]==5 && b[2]==5)
    {
	if(b[0]==2){return(10);}
    }
    if(b[3]==5 && b[6]==5)
    {
	if(b[0]==2){return(10);}
    }
    if(b[0]==5 && b[2]==5)
    {
	if(b[1]==2){return(1);}
    }
    if(b[4]==5 && b[7]==5)
    {
	if(b[1]==2){return(1);}
    }
    if(b[0]==5 && b[1]==5)
    {
	if(b[2]==2){return(2);}
    }
    if(b[5]==5 && b[8]==5)
    {
	if(b[2]==2){return(2);}
    }
    if(b[0]==5 && b[6]==5)
    {
	if(b[3]==2){return(3);}
    }
    if(b[4]==5 && b[5]==5)
    {
	if(b[3]==2){return(3);}
    }
    if(b[5]==5 && b[3]==5)
    {
	if(b[4]==2){return(4);}
    }
    if(b[1]==5 && b[7]==5)
    {
	if(b[4]==2){return(4);}
    }
    if(b[0]==5 && b[8]==5)
    {
	if(b[4]==2){return(4);}
    }
    if(b[2]==5 && b[6]==5)
    {
	if(b[4]==2){return(4);}
    }
    if(b[8]==5 && b[2]==5)
    {
	if(b[5]==2){return(5);}
    }
    if(b[3]==5 && b[4]==5)
    {
	if(b[5]==2){return(5);}
    }
    if(b[0]==5 && b[3]==5)
    {
	if(b[6]==2){return(6);}
    }
    if(b[7]==5 && b[8]==5)
    {
	if(b[6]==2){return(6);}
    }
    if(b[6]==5 && b[8]==5)
    {
	if(b[7]==2){return(7);}
    }
    if(b[1]==5 && b[4]==5)
    {
	if(b[7]==2){return(7);}
    }
    if(b[6]==5 && b[7]==5)
    {
	if(b[8]==2){return(8);}
    }
    if(b[2]==5 && b[5]==5)
    {
	if(b[8]==2){return(8);}
    }
}
    //----------------------------------------------------------------------------------------------------------------
int main()
{
    int t=0,f=0,p;
   // delay1();
    start:
    system("cls");
    t=start();
    if(t==2)
    {

    }
    else
    {
	p=mul();
	f=display(p);
	if(f==1)
	{
	    goto start;
	}
    }
}


