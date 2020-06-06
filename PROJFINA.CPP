/*
* A project for student management system
* Version turbo C++ 3.0
* Authors : Sukanta Maity & Subarna Mitra
* For Conect & Tools
* Under the guidance of Dr. Prof. Martin Thost
* From Hof Univesity of Applied Sciences
*/

#include<iostream.h>
#include<fstream.h>
#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<stdlib.h>
#include<string.h>
#define  gt  gotoxy
#define  tc  textcolor
#define  tb  textbackground


int rc=0;
//===================================
//  FUNCTION PROTOTYPE DEFINATION
//===================================
void splashScreen();
int recCount();
void studentSupport();
void admission();
void marksEntry();
void feesCollection();
void resultGen();
void modification();
void deletion();
void help();
void prog_loading();
void pass_ward();
void admissionCriteriaVtoVIII();
void admissionCriteriaIXtoX();
void admissionCriteriaXItoXII();
void admissionCriteria();
void courseAvailable();
void courseVtoVIII();
void courseIXtoX();
void courseXItoXII();
void studentSupport();
void admission();
void admissionDetails();
void modification();
void window();
void help();
void borderWindow();
void thankYou();


//===================================
class student
{
   private:
	   char id[10];
	   char name[30];
	   char dob[12];
	   char gender;
	   char stream;
	   char clas[4];
	   char fname[30];
	   int yearpass;
	   float per;
	   char add[30];
	   char city[20];
	   char pin[8];
	   char phno[15];
	   char mailid[20];
	   char bgroup[4];
	   int beng;
	   int engl;
	   int hist;
	   int geog;
	   int math;
	   int phys;
	   int chem;
	   int bios;
	   int comp;
	   int eves;
	   int fees;

    public:
	    void getAdmissionData();
	    void getAdmissionModifiedData(char *);
	    void showAdmissionDetails();
	    void getMarksDetails(char *);
	    void showMarksDetails(char *);
	    void modifyStudentDetails();
	    void modifyMarksDetails();
	    void deleteStudentDetails();
	    void deleteMarksDetails();
	    int deleteMarksDetails2(char *);
	    void getFeesDetails(char *);
	    void viewFeesDetails();
	    char * getid()
	    {
	      return id;
	    }
	    char * getname()
	    {
	      return name;
	    }
	    char * getclass()
	    {
	      return clas;
	    }
	    char  getstream()
	    {
	      return stream;
	    }

};
//===================================
//            CLASS END
//===================================

void main()
{
     int r,c;
     int rcur,opt,t=50;
     /*
     remove("admission.dat");
     remove("MARKSDETAILS.dat");
     remove("FEES.dat");
     return;
     */
     prog_loading();
     pass_ward();
     splashScreen();
   textmode(C40) ;
   clrscr() ;
   int valid ;
   int n = 4 ;
   int x = 14 ;
   char ch1, ch2 ;
   char chr1=219, chr=175 ;
   do
   {
	//line.box (1,1,39,25,219) ;
	//line.line_hor(9,31,6,196) ;
	//line.box (8,3,32,20,218) ;
	clrscr();
	borderWindow();
	//textmode(C40);
	char c1=24, c2=25 ;
	gotoxy(3,24) ;
	cout <<c1 ;
	cout <<c2 ;
	cout <<"";
	gotoxy(13,5) ;
	cout <<chr1 ;

	textbackground(WHITE) ;
	textcolor(BLACK) ;
	gotoxy(14,5) ;
	cprintf("C & T ") ;
	textbackground(BLACK) ;
	textcolor(LIGHTGRAY) ;
	gotoxy(14,8) ;
	gotoxy(14,9) ;
	gotoxy(14,6) ;
	cout<<"ษออออออออออออออออออออออออออออออออออออออออออออออออออป";
	gotoxy(14,7) ;delay(t);
	cout<<"บ ฐฐฐฐฐ    STUDENT MANAGEMENT SYSTEM -2020   ฐฐฐฐฐ บ";
	gotoxy(14,8) ;delay(t);
	cout<<"ฬออออออออออออออออออออออออออออออออออออออออออออออออออน";
	gotoxy(14,9) ;delay(t);
	cout<<"บ                    MAIN MENU                     บ";
	gotoxy(14,10) ;delay(t);
	cout<<"ฬออออออออออออออออออออออออออออออออออออออออออออออออออน";
	gotoxy(14,11) ;delay(t);
	cout<<(char)16<<" STUDENT SUPPORT...............................ฏ  บ";
	gotoxy(14,12) ;delay(t);
	cout<<(char)16<<" ADMISSION ENTRY FROM...........................  บ";
	gotoxy(14,13) ;delay(t);
	cout<<(char)16<<" STUDENT MARKS ENTRY............................  บ";
	gotoxy(14,14) ;delay(t);
	cout<<(char)16<<" FEES COLLECTION................................  บ";
	gotoxy(14,15) ;delay(t);
	cout<<(char)16<<" RESULT SEARCH..................................  บ";
	gotoxy(14,16) ;delay(t);
	cout<<(char)16<<" MODIFICATION...................................  บ";
	gotoxy(14,17) ;delay(t);
	cout<<(char)16<<" DELETE RECORD..................................  บ";
	gotoxy(14,18) ;delay(t);
	cout<<(char)16<<" HELP...........................................  บ";
	gotoxy(14,19) ;delay(t);
	cout<<(char)16<<" EXIT........................................Esc  บ";
	gotoxy(14,20) ;delay(t);
	cout<<"ศออออออออออออออออออออออออออออออออออออออออออออออออออผ";
	gotoxy(10,x) ;
	cout <<chr ;
	gotoxy(13,5) ;


	do
	{

	  do
	   {
	    do
	     {
		ch1 = getch() ;
		if ( ch1 == 27 )
			{
			 textmode(C80) ;
			 clrscr() ;
			 thankYou();
			 exit(0) ;
			 }
			} while (( ch1 != 0 ) && ( ch1 != 13 )) ;
			if ( ch1 != 13 )
			{
			 do
			  {
			   ch2 = getch() ;
			   if ( ch2 == 27 )
					{
						textmode(C80) ;
						clrscr() ;
						thankYou();
						exit(0) ;
					}
				} while (( ch2 != 72 ) && ( ch2 != 80 )	&& ( ch2 != 13 )) ;
			}
		} while ((( ch1 != 0 ) || (( ch2 != 72 ) && ( ch2 != 80 ))) && (( ch1 != 13 ) && ( ch2 != 13 ))) ;


		if (( ch1 == 0 ) && ( ch2 == 80 ))
		{
			gotoxy(10,x) ;
			cout <<" " ;
			if (n == 9)
			{
				n = 1 ;
				x = x - 8 ;
			}
			else
			{
				n = n + 1 ;
				x = x + 1 ;
			}
			gotoxy(10,x) ;
			cout <<chr ;
			gotoxy(13,5) ;
		}

		if (( ch1 == 0 ) && ( ch2 == 72 ))
		{
			gotoxy(10,x) ;
			cout <<" " ;
			if ( n == 1 )
			{
				n = 9 ;
				x = x + 8 ;
			}
			else
			{
				n = n - 1 ;
				x = x - 1 ;
			}
			gotoxy(10,x) ;
			cout <<chr ;
			gotoxy(13,5) ;
		}

	} while (( ch1 != 13 ) && ( ch2 != 13 )) ;

	switch(n)
	{
	 case 1:
		studentSupport();
		break;
	 case 2:
		admission();
		break;
	 case 3:
		marksEntry();
		break;
	 case 4:
		feesCollection();
		break;
	 case 5:
		resultGen();
		getch();
		break;
	 case 6:
		modification();
		break;
	 case 7:
		deletion();
		break;
	 case 8:
		help();
		getch();
		break;
	 case 9:
		thankYou();
		break;
	}
	//thankYou();
   } while ( n != 9 ) ;
   textmode(C80) ;
   clrscr() ;
}

//========================================

void prog_loading()
{
  int r=12,i,j;
  int c=25;
  for(i=1;i<=4;i++)
  {
     clrscr();
     //borderWindow();
     gotoxy(c,r);
     cout<<"Please Wait";
     c=c+12;
     for(j=1;j<=20;j++)
     {
      gotoxy(c,r);
      cout<<"þ";
      delay(50);
      c++;
     }
     c=25;
  }
}
//================================================
void pass_ward()
{
 char *pw="ADMIN";
 char tmp[10];
 char ch;
 int r,c,i=0,rcursor;
 do
 {
 clrscr();
 borderWindow();
 i=0;
    r=10;
    c=16;
    gotoxy(c,r);
    cout<<"ษอออออออออออออออออออออออออออออออออออออออออออออป";
    r++;gotoxy(c,r);
    cout<<"บ ฐฐ    STUDENT MANAGEMENT SYSTEM -2020   ฐฐ  บ";
    r++;gotoxy(c,r);
    cout<<"ฬอออออออออออออออออออออออออออออออออออออออออออออน";
    r++;gotoxy(c,r);
    cout<<"บ   Login  Password  :                        บ";
    r++;gotoxy(c,r);
    cout<<"ศอออออออออออออออออออออออออออออออออออออออออออออผ";
    gotoxy(c+24,r-1);
 do
 {
  ch=getch();
  cout<<"*";
  if(ch==13)
     break;
  else
    tmp[i++]=ch;
 }while(1);

   tmp[i]='\0';
   if(strcmp(tmp,pw)==0)
     {
     r+=5;
    gotoxy(c,r);
    cout<<"ษอออออออออออออออออออออออออออออออออออออออออออออป";
    r++;gotoxy(c,r);
    cout<<"บฒฒ          Password Accepted....!         ฒฒบ";
    r++;gotoxy(c,r);
    cout<<"ศอออออออออออออออออออออออออออออออออออออออออออออผ";
      getch();
      break;
     }
      else
      {
     r+=5;
    gotoxy(c,8);
    cout<<"\a";
    r+=2;
    gotoxy(c,r);
    cout<<"ษอออออออออออออออออออออออออออออออออออออออออออออป";
    r++;gotoxy(c,r);
    cout<<"บฒฒ  Access Violation...['X' to Exit] !:    ฒฒบ";
    rcursor=r;
    r++;gotoxy(c,r);
    cout<<"ศอออออออออออออออออออออออออออออออออออออออออออออผ";
    gotoxy(c+40,rcursor);

       ch=getche();
       if(ch=='X'|| ch=='x')
	  exit(0);
      }

    }while(1);
}

void admissionCriteriaVtoVIII()
{
     int r,c;
     int rcur,opt;
     r=4;
     c=20;
     clrscr();
     borderWindow();
     gotoxy(c,r);
     cout<<"ษออออออออออออออออออออออออออออออออออออออออป";
     r++;
     gotoxy(c,r);
     cout<<"บ ฐฐ STUDENT MANAGEMENT SYSTEM -2020 ฐฐ  บ";
     r++;
     gotoxy(c,r);
     cout<<"ฬออออออออออออออออออออออออออออออออออออออออน";
     r++;
     gotoxy(c,r);
     cout<<"บ   COURSE FOR KINDERGARTEN(ELEMENTARY)  บ";
     r++;
     gotoxy(c,r);
     cout<<"ฬอออออออออออออออออออออออออหออออออออออออออน";
     r++;
     gotoxy(c,r);
     cout<<"บ PERCENTAGE OF MARKS     บ   MIN 75%    บ";
     r++;
     gotoxy(c,r);
     cout<<"บ FEES DETALS             บ   ๎ 2500,00  บ";
     r++;
     gotoxy(c,r);
     cout<<"บ LAST DATE OF ADMISSION  บ   31st Mar   บ";
     r++;
     gotoxy(c,r);
     cout<<"ฬอออออออออออออออออออออออออสออออออออออออออน";
     r++;
     gotoxy(c,r);
     cout<<"ศออออออออออออออออออออออออออออออออออออออออผ";
}

//===================================
void admissionCriteriaIXtoX()
{
     int r,c;
     int rcur,opt;
     r=4;
     c=20;
     clrscr();
     borderWindow();
     gotoxy(c,r);
     cout<<"ษออออออออออออออออออออออออออออออออออออออออป";
     r++;
     gotoxy(c,r);
     cout<<"บ ฐฐ STUDENT MANAGEMENT SYSTEM -2020 ฐฐ  บ";
     r++;
     gotoxy(c,r);
     cout<<"ฬออออออออออออออออออออออออออออออออออออออออน";
     r++;
     gotoxy(c,r);
     cout<<"บ    COURSE FOR GRUNDSCHULE(PRIMARY)     บ";
     r++;
     gotoxy(c,r);
     cout<<"ฬอออออออออออออออออออออออออหออออออออออออออน";
     r++;
     gotoxy(c,r);
     cout<<"บ PERCENTAGE OF MARKS     บ   MIN 85%    บ";
     r++;
     gotoxy(c,r);
     cout<<"บ FEES DETALS             บ   ๎ 3000,00  บ";
     r++;
     gotoxy(c,r);
     cout<<"บ LAST DATE OF ADMISSION  บ   31st Mar   บ";
     r++;
     gotoxy(c,r);
     cout<<"ฬอออออออออออออออออออออออออสออออออออออออออน";
     r++;
     gotoxy(c,r);
     cout<<"ศออออออออออออออออออออออออออออออออออออออออผ";

}

//===================================

void admissionCriteriaXItoXII()
{
     int r,c;
     int rcur,opt;
     r=4;
     c=20;
     clrscr();
     borderWindow();
     gotoxy(c,r);
     cout<<"ษออออออออออออออออออออออออออออออออออออออออป";
     r++;
     gotoxy(c,r);
     cout<<"บ ฐฐ STUDENT MANAGEMENT SYSTEM -2020 ฐฐ  บ";
     r++;
     gotoxy(c,r);
     cout<<"ฬออออออออออออออออออออออออออออออออออออออออน";
     r++;
     gotoxy(c,r);
     cout<<"บ    COURSE FOR HAUPTSCHULE(SECONDARY)   บ";
     r++;
     gotoxy(c,r);
     cout<<"ฬอออออออออออออออออออออออออหออออออออออออออน";
     r++;
     gotoxy(c,r);
     cout<<"บ PERCENTAGE OF MARKS     บ   MIN 85%    บ";
     r++;
     gotoxy(c,r);
     cout<<"บ FEES DETALS             บ   ๎ 3500,00  บ";
     r++;
     gotoxy(c,r);
     cout<<"บ LAST DATE OF ADMISSION  บ   31st Mar   บ";
     r++;
     gotoxy(c,r);
     cout<<"ฬอออออออออออออออออออออออออสออออออออออออออน";
     r++;
     gotoxy(c,r);
     cout<<"ศออออออออออออออออออออออออออออออออออออออออผ";
}
//===================================
void admissionCriteria()
{
     int r,c;
     int rcur,opt,t=1;
     student obj;


   textmode(C40) ;
   clrscr ;
   int valid ;
   int n = 4 ;
   int x = 14 ;
   char ch1, ch2 ;
   char chr1=219, chr=175 ;
   do
   {
	clrscr();
	borderWindow();
	char c1=24, c2=25 ;
	gotoxy(3,24) ;
	cout <<c1 ;
	cout <<c2 ;
	cout <<"";
	gotoxy(13,5) ;
	cout <<chr1 ;

	textbackground(WHITE) ;
	textcolor(BLACK) ;
	gotoxy(14,5) ;
	cprintf("C & T ") ;
	textbackground(BLACK) ;
	textcolor(LIGHTGRAY) ;
	gotoxy(14,8) ;
	gotoxy(14,9) ;
	gotoxy(14,6) ;
	cout<<"ษออออออออออออออออออออออออออออออออออออออออออออออออออป";
	gotoxy(14,7) ;delay(t);
	cout<<"บ ฐฐฐฐฐ    STUDENT MANAGEMENT SYSTEM -2020   ฐฐฐฐฐ บ";
	gotoxy(14,8) ;delay(t);
	cout<<"ฬออออออออออออออออออออออออออออออออออออออออออออออออออน";
	gotoxy(14,9) ;delay(t);
	cout<<"บ                  ADMISSION CRITERIA              บ";
	gotoxy(14,10) ;delay(t);
	cout<<"ฬออออออออออออออออออออออออออออออออออออออออออออออออออน";
	gotoxy(14,11) ;delay(t);
	cout<<"บ FOR KINDERGARTEN(ELEMENTARY)...................  บ";
	gotoxy(14,12) ;delay(t);
	cout<<"บ FOR GRUNDSCHULE(PRIMARY).......................  บ";
	gotoxy(14,13) ;delay(t);
	cout<<"บ FOR HAUPTSCHULE(SECONDARY).....................  บ";
	gotoxy(14,14) ;delay(t);
	cout<<"บ RETURN......................................Esc  บ";
	gotoxy(14,15) ;delay(t);
	cout<<"ศออออออออออออออออออออออออออออออออออออออออออออออออออผ";
	gotoxy(10,x) ;
	cout <<chr ;
	gotoxy(13,5) ;


	do
	{

	  do
	   {
	    do
	     {
		ch1 = getch() ;
		if ( ch1 == 27 )
			{
			 textmode(C80) ;
			 clrscr() ;
			 //thankYou();
			 //exit(0) ;
			 return;
			 }
			} while (( ch1 != 0 ) && ( ch1 != 13 )) ;
			if ( ch1 != 13 )
			{
			 do
			  {
			   ch2 = getch() ;
			   if ( ch2 == 27 )
					{
						textmode(C80) ;
						clrscr() ;
						//thankYou();
						//exit(0) ;
						return;
					}
				} while (( ch2 != 72 ) && ( ch2 != 80 )	&& ( ch2 != 13 )) ;
			}
		} while ((( ch1 != 0 ) || (( ch2 != 72 ) && ( ch2 != 80 ))) && (( ch1 != 13 ) && ( ch2 != 13 ))) ;


		if (( ch1 == 0 ) && ( ch2 == 80 ))
		{
			gotoxy(10,x) ;
			cout <<" " ;
			if (n == 4)
			{
				n = 1 ;
				x = x - 3 ;
			}
			else
			{
				n = n + 1 ;
				x = x + 1 ;
			}
			gotoxy(10,x) ;
			cout <<chr ;
			gotoxy(13,5) ;
		}

		if (( ch1 == 0 ) && ( ch2 == 72 ))
		{
			gotoxy(10,x) ;
			cout <<" " ;
			if ( n == 1 )
			{
				n = 4 ;
				x = x + 3 ;
			}
			else
			{
				n = n - 1 ;
				x = x - 1 ;
			}
			gotoxy(10,x) ;
			cout <<chr ;
			gotoxy(13,5) ;
		}

	} while (( ch1 != 13 ) && ( ch2 != 13 )) ;

	switch(n)
	{
	 case 1:
		admissionCriteriaVtoVIII();
		getch();
		break;
	 case 2:
		admissionCriteriaIXtoX();
		getch();
		break;
	 case 3:
		admissionCriteriaXItoXII();
		getch();
		break;
	 case 4:
		break;
	}
	//thankYou();
   } while ( n != 4 ) ;
   textmode(C80) ;
   clrscr() ;
}
//===================================



void courseVtoVIII()
{
     int r,c;
     int rcur,opt;
     r=4;
     c=20;
     clrscr();
     borderWindow();
     gotoxy(c,r);
     cout<<"ษอออออออออออออออออออออออออออออออออออออออป";
     r++;
     gotoxy(c,r);
     cout<<"บ ฐฐ STUDENT MANAGEMENT SYSTEM -2020 ฐฐ บ";
     r++;
     gotoxy(c,r);
     cout<<"ฬอออออออออออออออออออออออออออออออออออออออน";
     r++;
     gotoxy(c,r);
     cout<<"บ  COURSE FOR KINDERGARTEN(ELEMENTARY)  บ";
     r++;
     gotoxy(c,r);
     cout<<"ฬอออออออออออออออออออออออออออออออออออออออน";
     r++;
     gotoxy(c,r);
     cout<<"บ  SUBJECTS TAUGHT                      บ";
     r++;
     gotoxy(c,r);
     cout<<"ฬอออออออออออออออออออออออออออออออออออออออน";
     r++;
     gotoxy(c,r);
     cout<<"บ  1. ENG LANGUAGE                      บ";
     r++;
     gotoxy(c,r);
     cout<<"บ  2. GERMAN                            บ";
     r++;
     gotoxy(c,r);
     cout<<"บ  3. HISTORY                           บ";
     r++;
     gotoxy(c,r);
     cout<<"บ  4. GEOGRAPHY                         บ";
     r++;
     gotoxy(c,r);
     cout<<"บ  5. MATHS                             บ";
     r++;
     gotoxy(c,r);
     cout<<"บ  6. EVE                               บ";
     r++;
     gotoxy(c,r);
     cout<<"บ  7. COMP                              บ";
     r++;
     gotoxy(c,r);
     cout<<"บ  8. SC.                               บ";
     r++;
     gotoxy(c,r);
     cout<<"ฬอออออออออออออออออออออออออออออออออออออออน";
     r++;
     gotoxy(c,r);
     cout<<"ศอออออออออออออออออออออออออออออออออออออออผ";
}

//===================================
void courseIXtoX()
{
     int r,c;
     int rcur,opt;
     r=4;
     c=20;
     clrscr();
     borderWindow();
     gotoxy(c,r);
     cout<<"ษอออออออออออออออออออออออออออออออออออออออป";
     r++;
     gotoxy(c,r);
     cout<<"บ ฐฐ STUDENT MANAGEMENT SYSTEM -2020 ฐฐ บ";
     r++;
     gotoxy(c,r);
     cout<<"ฬอออออออออออออออออออออออออออออออออออออออน";
     r++;
     gotoxy(c,r);
     cout<<"บ    COURSE FOR GRUNDSCHULE(PRIMARY)    บ";
     r++;
     gotoxy(c,r);
     cout<<"ฬอออออออออออออออออออออออออออออออออออออออน";
     r++;
     gotoxy(c,r);
     cout<<"บ  SUBJECTS TAUGHT                      บ";
     r++;
     gotoxy(c,r);
     cout<<"ฬอออออออออออออออออออออออออออออออออออออออน";
     r++;
     gotoxy(c,r);
     cout<<"บ  1. ENG LANGUAGE                      บ";
     r++;
     gotoxy(c,r);
     cout<<"บ  2. GERMAN                            บ";
     r++;
     gotoxy(c,r);
     cout<<"บ  3. HISTORY                           บ";
     r++;
     gotoxy(c,r);
     cout<<"บ  4. GEOGRAPHY                         บ";
     r++;
     gotoxy(c,r);
     cout<<"บ  5. MATHS                             บ";
     r++;
     gotoxy(c,r);
     cout<<"บ  6. EVE                               บ";
     r++;
     gotoxy(c,r);
     cout<<"บ  7. COMP                              บ";
     r++;
     gotoxy(c,r);
     cout<<"บ  8. PHYSICS                           บ";
     r++;
     gotoxy(c,r);
     cout<<"บ  9. CHEMISTRY                         บ";
     r++;
     gotoxy(c,r);
     cout<<"บ  10.BIO SC                            บ";
     r++;
     gotoxy(c,r);
     cout<<"ฬอออออออออออออออออออออออออออออออออออออออน";
     r++;
     gotoxy(c,r);
     cout<<"ศอออออออออออออออออออออออออออออออออออออออผ";
}
//===================================

void courseXItoXII()
{
     int r,c;
     int rcur,opt;
     r=4;
     c=20;
     clrscr();
     borderWindow();
     gotoxy(c,r);
     cout<<"ษอออออออออออออออออออออออออออออออออออออออป";
     r++;
     gotoxy(c,r);
     cout<<"บ ฐฐ STUDENT MANAGEMENT SYSTEM -2020 ฐฐ บ";
     r++;
     gotoxy(c,r);
     cout<<"ฬอออออออออออออออออออออออออออออออออออออออน";
     r++;
     gotoxy(c,r);
     cout<<"บ   COURSE FOR HAUPTSCHULE(SECONDARY)   บ";
     r++;
     gotoxy(c,r);
     cout<<"ฬอออออออออออออออออออออออออออออออออออออออน";
     r++;
     gotoxy(c,r);
     cout<<"บ  SUBJECTS TAUGHT                      บ";
     r++;
     gotoxy(c,r);
     cout<<"ฬอออออออออออออออออออออออออออออออออออออออน";
     r++;
     gotoxy(c,r);
     cout<<"บ  1. ENG LANGUAGE                      บ";
     r++;
     gotoxy(c,r);
     cout<<"บ  2. GERMAN                            บ";
     r++;
     gotoxy(c,r);
     cout<<"บ  3. HISTORY                           บ";
     r++;
     gotoxy(c,r);
     cout<<"บ  4. GEOGRAPHY                         บ";
     r++;
     gotoxy(c,r);
     cout<<"บ  5. MATHS                             บ";
     r++;
     gotoxy(c,r);
     cout<<"บ  6. EVE                               บ";
     r++;
     gotoxy(c,r);
     cout<<"บ  7. COMP                              บ";
     r++;
     gotoxy(c,r);
     cout<<"บ  8. PHYSICS                           บ";
     r++;
     gotoxy(c,r);
     cout<<"บ  9. CHEMISTRY                         บ";
     r++;
     gotoxy(c,r);
     cout<<"บ  10.BIO SC                            บ";
     r++;
     gotoxy(c,r);
     cout<<"ฬอออออออออออออออออออออออออออออออออออออออน";
     r++;
     gotoxy(c,r);
     cout<<"ศอออออออออออออออออออออออออออออออออออออออผ";
}


//===================================
void courseAvailable()
{
     int r,c;
     int rcur,opt,t=1;
     student obj;

   textmode(C40) ;
   clrscr ;
   int valid ;
   int n = 4 ;
   int x = 14 ;
   char ch1, ch2 ;
   char chr1=219, chr=175 ;
   do
   {
	clrscr();
	borderWindow();
	char c1=24, c2=25 ;
	gotoxy(3,24) ;
	cout <<c1 ;
	cout <<c2 ;
	cout <<"";
	gotoxy(13,5) ;
	cout <<chr1 ;

	textbackground(WHITE) ;
	textcolor(BLACK) ;
	gotoxy(14,5) ;
	cprintf("C & T ") ;
	textbackground(BLACK) ;
	textcolor(LIGHTGRAY) ;
	gotoxy(14,8) ;
	gotoxy(14,9) ;
	gotoxy(14,6) ;
	cout<<"ษออออออออออออออออออออออออออออออออออออออออออออออออออป";
	gotoxy(14,7) ;delay(t);
	cout<<"บ ฐฐฐฐฐ    STUDENT MANAGEMENT SYSTEM -2020   ฐฐฐฐฐ บ";
	gotoxy(14,8) ;delay(t);
	cout<<"ฬออออออออออออออออออออออออออออออออออออออออออออออออออน";
	gotoxy(14,9) ;delay(t);
	cout<<"บ                  COURSE AVAILABLE                บ";
	gotoxy(14,10) ;delay(t);
	cout<<"ฬออออออออออออออออออออออออออออออออออออออออออออออออออน";
	gotoxy(14,11) ;delay(t);
	cout<<"บ FOR KINDERGARTEN(ELEMENTARY)...................  บ";
	gotoxy(14,12) ;delay(t);
	cout<<"บ FOR GRUNDSCHULE(PRIMARY).......................  บ";
	gotoxy(14,13) ;delay(t);
	cout<<"บ FOR HAUPTSCHULE(SECONDARY).....................  บ";
	gotoxy(14,14) ;delay(t);
	cout<<"บ RETURN......................................Esc  บ";
	gotoxy(14,15) ;delay(t);
	cout<<"ศออออออออออออออออออออออออออออออออออออออออออออออออออผ";
	gotoxy(10,x) ;
	cout <<chr ;
	gotoxy(13,5) ;


	do
	{

	  do
	   {
	    do
	     {
		ch1 = getch() ;
		if ( ch1 == 27 )
			{
			 textmode(C80) ;
			 clrscr() ;
			 //thankYou();
			 //exit(0) ;
			 return;
			 }
			} while (( ch1 != 0 ) && ( ch1 != 13 )) ;
			if ( ch1 != 13 )
			{
			 do
			  {
			   ch2 = getch() ;
			   if ( ch2 == 27 )
					{
						textmode(C80) ;
						clrscr() ;
						//thankYou();
						//exit(0) ;
						return;
					}
				} while (( ch2 != 72 ) && ( ch2 != 80 )	&& ( ch2 != 13 )) ;
			}
		} while ((( ch1 != 0 ) || (( ch2 != 72 ) && ( ch2 != 80 ))) && (( ch1 != 13 ) && ( ch2 != 13 ))) ;


		if (( ch1 == 0 ) && ( ch2 == 80 ))
		{
			gotoxy(10,x) ;
			cout <<" " ;
			if (n == 4)
			{
				n = 1 ;
				x = x - 3 ;
			}
			else
			{
				n = n + 1 ;
				x = x + 1 ;
			}
			gotoxy(10,x) ;
			cout <<chr ;
			gotoxy(13,5) ;
		}

		if (( ch1 == 0 ) && ( ch2 == 72 ))
		{
			gotoxy(10,x) ;
			cout <<" " ;
			if ( n == 1 )
			{
				n = 4 ;
				x = x + 3 ;
			}
			else
			{
				n = n - 1 ;
				x = x - 1 ;
			}
			gotoxy(10,x) ;
			cout <<chr ;
			gotoxy(13,5) ;
		}

	} while (( ch1 != 13 ) && ( ch2 != 13 )) ;

	switch(n)
	{
	 case 1:
		courseVtoVIII();
		getch();
		break;
	 case 2:
		courseIXtoX();
		getch();
		break;
	 case 3:
		courseXItoXII();
		getch();
		break;
	 case 4:
		break;
	}
	//thankYou();
   } while ( n != 4 ) ;
   textmode(C80) ;
   clrscr() ;
}
//===================================

void feesCollection()
{
   student obj;
   fstream fp;
   char sid[10];
   int r,c;
   int rcur,opt;
   r=4;
   c=15;


   fp.open("admission.dat",ios::binary|ios::in);
   if(!fp)
   {
      fp.close();
      clrscr();
      borderWindow();
      r=10;
      c=15;
      gotoxy(c,r);
      cout<<"ษออออออออออออออออออออออออออออออออออออออออออออออออออป";
      r++;
      gotoxy(c,r);
      cout<<"บ                 NO RECORD FOUND                  บ";
      r++;
      gotoxy(c,r);
      cout<<"ศออออออออออออออออออออออออออออออออออออออออออออออออออผ";
      cout<<"\n\a";
      return;
   }
 do
 {
   clrscr();
   borderWindow();
   r=4;
   c=15;
   gotoxy(c,r);
   cout<<"ษออออออออออออออออออออออออออออออออออออออออออออออออออป";
   r++;
   rcur=r;
   gotoxy(c,r);
   cout<<"บ Enter Student ID :                               บ";
   r++;
   gotoxy(c,r);
   cout<<"ศออออออออออออออออออออออออออออออออออออออออออออออออออผ";
   gotoxy(c+22,rcur);
   gets(sid);
   int found=0;
     while(fp)
     {
       fp.read((char *)&obj,sizeof(obj));
       if(fp.eof())
       break;
       if(strcmp(obj.getid(),sid)==0)
       {
	 found=1;
	 break;
       }
     }
     fp.close();
     if(found==0)
     {
       char ch2;
       r+=4;
       gotoxy(c,r);
       r++;
       cout<<"Student ID "<<sid<<" does not exist";
       gotoxy(c,r);
       cout<<"Try again [Y/N]:";
       fflush(stdin);
       gotoxy(c+19,r);
       cin>>ch2;
       if(ch2=='Y' || ch2=='y')
       continue;
       else
       return;
     }
     //-----------------
     fstream fpm;
     fpm.open("FEES.dat",ios::binary|ios::in);

   if(!fpm)
   {
      fpm.close();
      fpm.open("FEES.dat",ios::binary|ios::out);
   }
   else
   {
      fpm.close();
      fpm.open("FEES.dat",ios::binary|ios::app);
   }
     char conf;
     obj.getFeesDetails(sid);
     cout<<"\n\n\nฒ               Confirm [Y/N]:";
     fflush(stdin);
     cin>>conf;
     if(conf=='Y' || conf=='y')
     {
     fpm.write((char *)&obj,sizeof(obj));
     borderWindow();
     cout<<"\n\n\nฒ               Fess sucessfully Collected";
     fpm.close();
     }

     char ch3;
     borderWindow();
     gotoxy(10,6);
     cout<<"\n\n\nฒ               Add More...[Y/N]:";
     fflush(stdin);
     cin>>ch3;
     if(ch3=='Y' || ch3=='y')
     continue;
     else
     break;
   }while(1);
   return;
}
//===================================
void admissionDetails()
{
   student obj;
   fstream fp;
   char sid[10];
   int r,c,rcur;
   fp.open("admission.dat",ios::binary|ios::in);

   if(!fp)
   {
      fp.close();
      clrscr();
      borderWindow();
      r=4;
      c=15;
      gotoxy(c,r);
      cout<<"ษออออออออออออออออออออออออออออออออออออออออออออออออออป";
      r++;
      gotoxy(c,r);
      cout<<"บ                 NO RECORD FOUND                  บ";
      r++;
      gotoxy(c,r);
      cout<<"ศออออออออออออออออออออออออออออออออออออออออออออออออออผ";
      cout<<"\nฒ\a";
      getch();
      return;
   }
     clrscr();
     r=4;
     c=15;
     borderWindow();
     gotoxy(c,r);
     cout<<"ษออออออออออออออออออออออออออออออออออออออออออออออออออป";
     r++;
     rcur=r;
     gotoxy(c,r);
     cout<<"บ Enter Student ID :                               บ";
     r++;
     gotoxy(c,r);
     cout<<"ศออออออออออออออออออออออออออออออออออออออออออออออออออผ";
     gotoxy(c+22,rcur);
     fflush(stdin);
     gets(sid);
     int found=0;
     while(fp)
     {

       fp.read((char *)&obj,sizeof(obj));
       if(fp.eof())
       break;

       if(strcmp(obj.getid(),sid)==0)
       {
	 obj.showAdmissionDetails();
	 found=1;
	 break;
       }
     }
     fp.close();
     if(found==0)
     {
       cout<<"\n\n\nฒ               Student ID "<<sid<<" does not exist";
     }
     return;
}
//========================================
int recCount()
{
   student obj;
   fstream fp;
   fp.open("admission.dat",ios::binary|ios::in);

   if(!fp)
   {
      fp.close();
      rc;
   }
   else
   {
     rc=0;
     fp.close();
     fp.open("admission.dat",ios::binary|ios::in);
     while(fp)
     {
       ++rc;
       fp.read((char *)&obj,sizeof(obj));
       if(fp.eof())
       {
	 char sid[10],tmp[10];
	 int i,k;
	 strcpy(sid,obj.getid());
	 k=0;
	 for(i=3;sid[i]!='\0';i++)
	 {
	    tmp[k++]=sid[i];
	 }
	 tmp[k]='\0';

	 rc=atoi(tmp)+1;
	 break;
       }
     }
   }
   fp.close();
   return rc;

}

void admission()
{
   student obj;
   fstream fp;
   char ch,conf,ch2;
   fp.open("admission.dat",ios::binary|ios::in);

   if(!fp)
   {
      fp.close();
      fp.open("admission.dat",ios::binary|ios::out);
   }
   else
   {
     fp.close();
     fp.open("admission.dat",ios::binary|ios::app);
   }

   rc=recCount();
   do
   {
      borderWindow();
      obj.getAdmissionData();
      cout<<"\nฒ               Confirmed [Y/N]:";
      fflush(stdin);
      cin>>conf;
      if(conf=='y' || conf=='Y')
      {
	fp.write((char *)&obj,sizeof(obj));
	rc++;
	clrscr();
	borderWindow();
	gotoxy(5,8);
	cout<<"	       Record sucessfully added";
	gotoxy(5,9);
	cout<<"	       Add more [Y/N]:";
	fflush(stdin);
	gotoxy(5+26,9);
	cin>>ch;
	if(ch=='y' || ch=='Y')
	{
	 continue;
	}
	else
	{
	 break;
	}
      }
      else
      {
	cout<<"\nฒ	       Continue...[Y/N]:";
	fflush(stdin);
	cin>>ch2;
	if(ch2=='y' || ch2=='Y')
	{
	  continue;
	}
	else
	{
	 break;
	}
      }
    }while(1);
   fp.close();
   return;
}

//========================================
//========================================

void studentSupport()
{
     int r,c;
     int rcur,opt,t=50;
     student obj;

   textmode(C40) ;
   clrscr ;
   int valid ;
   int n = 4 ;
   int x = 14 ;
   char ch1, ch2 ;
   char chr1=219, chr=175 ;
   do
   {
	clrscr();
	borderWindow();
	char c1=24, c2=25 ;
	gotoxy(3,24) ;
	cout <<c1 ;
	cout <<c2 ;
	cout <<"";
	gotoxy(13,5) ;
	cout <<chr1 ;

	textbackground(WHITE) ;
	textcolor(BLACK) ;
	gotoxy(14,5) ;
	cprintf("C & T ") ;
	textbackground(BLACK) ;
	textcolor(LIGHTGRAY) ;
	gotoxy(14,8) ;
	gotoxy(14,9) ;
	gotoxy(14,6) ;
	cout<<"ษออออออออออออออออออออออออออออออออออออออออออออออออออป";
	gotoxy(14,7) ;delay(t);
	cout<<"บ ฐฐฐฐฐ    STUDENT MANAGEMENT SYSTEM -2020   ฐฐฐฐฐ บ";
	gotoxy(14,8) ;delay(t);
	cout<<"ฬออออออออออออออออออออออออออออออออออออออออออออออออออน";
	gotoxy(14,9) ;delay(t);
	cout<<"บ                  STUDENT SUPPORT                 บ";
	gotoxy(14,10) ;delay(t);
	cout<<"ฬออออออออออออออออออออออออออออออออออออออออออออออออออน";
	gotoxy(14,11) ;delay(t);
	cout<<"บ ADMISSION STATUS...............................  บ";
	gotoxy(14,12) ;delay(t);
	cout<<"บ FEES DETAILS...................................  บ";
	gotoxy(14,13) ;delay(t);
	cout<<"บ COURSE AVIALBLE................................  บ";
	gotoxy(14,14) ;delay(t);
	cout<<"บ SEARCH RESULT..................................  บ";
	gotoxy(14,15) ;delay(t);
	cout<<"บ ADMISSION CRITERIA.............................  บ";
	gotoxy(14,16) ;delay(t);
	cout<<"บ RETURN......................................Esc  บ";
	gotoxy(14,17) ;delay(t);
	cout<<"ศออออออออออออออออออออออออออออออออออออออออออออออออออผ";
	gotoxy(10,x) ;
	cout <<chr ;
	gotoxy(13,5) ;


	do
	{

	  do
	   {
	    do
	     {
		ch1 = getch() ;
		if ( ch1 == 27 )
			{
			 textmode(C80) ;
			 clrscr() ;
			 //thankYou();
			 //exit(0) ;
			 return;
			 }
			} while (( ch1 != 0 ) && ( ch1 != 13 )) ;
			if ( ch1 != 13 )
			{
			 do
			  {
			   ch2 = getch() ;
			   if ( ch2 == 27 )
					{
						textmode(C80) ;
						clrscr() ;
						//thankYou();
						//exit(0) ;
						return;
					}
				} while (( ch2 != 72 ) && ( ch2 != 80 )	&& ( ch2 != 13 )) ;
			}
		} while ((( ch1 != 0 ) || (( ch2 != 72 ) && ( ch2 != 80 ))) && (( ch1 != 13 ) && ( ch2 != 13 ))) ;


		if (( ch1 == 0 ) && ( ch2 == 80 ))
		{
			gotoxy(10,x) ;
			cout <<" " ;
			if (n == 6)
			{
				n = 1 ;
				x = x - 5 ;
			}
			else
			{
				n = n + 1 ;
				x = x + 1 ;
			}
			gotoxy(10,x) ;
			cout <<chr ;
			gotoxy(13,5) ;
		}

		if (( ch1 == 0 ) && ( ch2 == 72 ))
		{
			gotoxy(10,x) ;
			cout <<" " ;
			if ( n == 1 )
			{
				n = 6 ;
				x = x + 5 ;
			}
			else
			{
				n = n - 1 ;
				x = x - 1 ;
			}
			gotoxy(10,x) ;
			cout <<chr ;
			gotoxy(13,5) ;
		}

	} while (( ch1 != 13 ) && ( ch2 != 13 )) ;

	switch(n)
	{
	 case 1:
		admissionDetails();
		getch();
		break;
	 case 2:
		obj.viewFeesDetails();
		getch();
		break;
	 case 3:
		courseAvailable();
		getch();
		break;
	 case 4:
		resultGen();
		getch();
		break;
	 case 5:
		admissionCriteria();
		getch();
		break;
	 case 6:
		break;
	}
	//thankYou();
   } while ( n != 6 ) ;
   textmode(C80) ;
   clrscr() ;
}
//========================================
//                 HELP
//========================================
void help()
{
     int r,c;
     r=4;
     c=15;
     clrscr();
     borderWindow();
     gotoxy(c,r);
     cout<<"ษออออออออออออออออออออออออออออออออออออออออออออออออออป";
     r++;
     gotoxy(c,r);
     cout<<"บ ฐฐฐฐฐ    STUDENT MANAGEMENT SYSTEM -2020   ฐฐฐฐฐ บ";
     r++;
     gotoxy(c,r);
     cout<<"ฬออออออออออออออออออออออออออออออออออออออออออออออออออน";
     r++;
     gotoxy(c,r);
     cout<<"บ þþþþþþþþþþþþþþþþþþþþþ HELP þþþþþþþþþþþþþþþþþþþþþ บ";
     r++;
     gotoxy(c,r);
     cout<<"ฬออออออออออออออออออออออออออออออออออออออออออออออออออน";
     r++;
     gotoxy(c,r);
     cout<<"บ  NAME       : SUKANTA  MAITY & SUBARNA MITRA     บ";
     r++;
     gotoxy(c,r);
     cout<<"บ  CONTACT    : +49 17635622184, +49 17632309582   บ";
     r++;
     gotoxy(c,r);
     cout<<"บ  UNIVERSITY : Hof University of Applied Sciences บ";
     r++;
     gotoxy(c,r);
     cout<<"บ  DEPARTMENT : Master in Software Eng in Inds App บ";
     r++;
     gotoxy(c,r);
     cout<<"บ  MAIL ID    : iim.sukanta@gmail.com              บ";
     r++;
     gotoxy(c,r);
     cout<<"บ               subarnamitra1012@gmail.com         บ";

     r++;
     gotoxy(c,r);
     cout<<"ฬออออออออออออออออออออออออออออออออออออออออออออออออออน";
     r++;
     gotoxy(c,r);
     cout<<"บฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐบ";
     r++;
     gotoxy(c,r);
     cout<<"ศออออออออออออออออออออออออออออออออออออออออออออออออออผ";
}
//========================================
//========================================
void student::getFeesDetails(char *sid)
{
   student obj;
   fstream fp;
   int r,c;
   int rcur,opt;
   r=4;
   c=15;

   fp.open("admission.dat",ios::binary|ios::in);

   if(!fp)
   {
      fp.close();
      clrscr();
      r=4;
      c=15;
      borderWindow();
      gotoxy(c,r);
      cout<<"ษออออออออออออออออออออออออออออออออออออออออออออออออออป";
      r++;
      gotoxy(c,r);
      cout<<"บ                 NO RECORD FOUND                  บ";
      r++;
      gotoxy(c,r);
      cout<<"ศออออออออออออออออออออออออออออออออออออออออออออออออออผ";
      cout<<"\nฒ\a";
      getch();
      return;
   }
     char name[20],clas[5],st;
     while(fp)
     {

       fp.read((char *)&obj,sizeof(obj));
       if(fp.eof())
       break;
       if(strcmp(obj.getid(),sid)==0)
       {
	 strcpy(name,obj.getname());
	 strcpy(clas,obj.getclass());
	 st=obj.getstream();
	 strcpy(id,sid);
	 break;
       }
     }
     fp.close();
   //=========================
    fees=0;
    if(strcmpi(clas,"V")==0 ||strcmpi(clas,"VI")==0 ||strcmpi(clas,"VII")==0 ||strcmpi(clas,"VIII")==0)
    {
      fees=2500;
    }
    else
    if(strcmpi(clas,"IX")==0 ||strcmpi(clas,"X")==0)
    {
      fees=3000;
    }
    else
    if(strcmpi(clas,"XI")==0 ||strcmpi(clas,"XII")==0)
    {
      fees=3500;
    }
   //=========================


     r=4;
     c=15;
     clrscr();
     borderWindow();
     gotoxy(c,r);
     cout<<"ษออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป";
     r++;
     gotoxy(c,r);
     cout<<"บ ฐฐฐฐฐ       STUDENT MANAGEMENT SYSTEM -2020        ฐฐฐฐฐ บ";
     r++;
     gotoxy(c,r);
     cout<<"ฬออออออออออออออออออออออออออออออออออออออออออออออออออออออออออน";
     r++;
     int rcur1=r;
     gotoxy(c,r);
     cout<<"บ ID                 :                                     บ";
     r++;
     gotoxy(c,r);
     cout<<"บ NAME               :                                     บ";
     r++;
     gotoxy(c,r);
     cout<<"บ CLASS              :                                     บ";
     r++;
     gotoxy(c,r);
     cout<<"บ STREAM             :                                     บ";
     r++;
     gotoxy(c,r);
     cout<<"บ SESSION            :   2020                              บ";
     r++;
     gotoxy(c,r);
     cout<<"ฬออออออออออออออออออออออออออออออออออออออออออออออออออออออออออน";
     r++;
     gotoxy(c,r);
     rcur=r;
     cout<<"บ                       FEES DETAILS                       บ";
     r++;
     gotoxy(c,r);
     cout<<"ฬออออออออออออออออออออออออออออออออออออออออออออออออออออออออออน";
     r++;
     gotoxy(c,r);
     rcur=r;
     cout<<"บ SESSION CHARGE     :                                     บ";
     r++;
     gotoxy(c,r);
     cout<<"บ LAB FEES           :                                     บ";
     r++;
     gotoxy(c,r);
     cout<<"บ LIBRARY FEES       :                                     บ";
     r++;
     gotoxy(c,r);
     cout<<"บ DEVELOPEMENT FEES  :                                     บ";
     r++;
     gotoxy(c,r);
     cout<<"ฬออออออออออออออออออออออออออออออออออออออออออออออออออออออออออน";
     r++;
     int rcur2=r;
     gotoxy(c,r);
     cout<<"บ TOTAL             :                                      บ";
     r++;
     gotoxy(c,r);
     cout<<"ศออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ";

     int tot=0;
     float sc=(fees*0.75);
     int labc=(int)(fees*.10);
     int libc=(int)(fees*.10);
     int df=(int)(fees*.05);
     tot=sc+labc+libc+df;
     gotoxy(c+25,rcur1);
     cout<<sid;
     rcur1++;
     gotoxy(c+25,rcur1);
     cout<<name;
     rcur1++;
     gotoxy(c+25,rcur1);
     cout<<clas;
     rcur1++;
     gotoxy(c+25,rcur1);
     cout<<st;
     //-----------------------
     gotoxy(c+25,rcur);
     cout<<sc;
     rcur++;
     gotoxy(c+25,rcur);
     cout<<labc;
     rcur++;
     gotoxy(c+25,rcur);
     cout<<libc;
     rcur++;
     gotoxy(c+25,rcur);
     cout<<df;
     rcur++;
     gotoxy(c+25,rcur);
     //---------------
     gotoxy(c+25,rcur2);
     cout<<tot;
}
//====================================
void student::viewFeesDetails()
{
   student obj;
   fstream fp;
   int r,c,rcur;
   fp.open("admission.dat",ios::binary|ios::in);

   if(!fp)
   {
      fp.close();
      clrscr();
      r=4;
      c=15;
      borderWindow();
      gotoxy(c,r);
      cout<<"ษออออออออออออออออออออออออออออออออออออออออออออออออออป";
      r++;
      gotoxy(c,r);
      cout<<"บ                 NO RECORD FOUND                  บ";
      r++;
      gotoxy(c,r);
      cout<<"ศออออออออออออออออออออออออออออออออออออออออออออออออออผ";
      cout<<"\n\a";
      getch();
      return;
   }
     char name[20],clas[5],sid[10],st;
     int found=0;
     clrscr();
     r=4;
     c=15;
     borderWindow();
     gotoxy(c,r);
     cout<<"ษออออออออออออออออออออออออออออออออออออออออออออออออออป";
     r++;
     rcur=r;
     gotoxy(c,r);
     cout<<"บ Enter Student ID :                               บ";
     r++;
     gotoxy(c,r);
     cout<<"ศออออออออออออออออออออออออออออออออออออออออออออออออออผ";
     gotoxy(c+22,rcur);
     fflush(stdin);
     gets(sid);
     while(fp)
     {

       fp.read((char *)&obj,sizeof(obj));
       if(fp.eof())
       break;
       if(strcmp(obj.getid(),sid)==0)
       {
	 strcpy(name,obj.getname());
	 strcpy(clas,obj.getclass());
	 st=obj.getstream();
	 strcpy(id,sid);
	 found=1;
	 break;
       }
     }
     fp.close();
     if(found==0)
     {
       cout<<"\n\n\nฒ               Studen ID does not exist...\a";
       getch();
       return;
     }
    fees=0;
    if(strcmpi(clas,"V")==0 ||strcmpi(clas,"VI")==0 ||strcmpi(clas,"VII")==0 ||strcmpi(clas,"VIII")==0)
    {
      fees=2500;
    }
    else
    if(strcmpi(clas,"IX")==0 ||strcmpi(clas,"X")==0)
    {
      fees=3000;
    }
    else
    if(strcmpi(clas,"XI")==0 ||strcmpi(clas,"XII")==0)
    {
      fees=3500;
    }
     int opt;
     r=4;
     c=15;
     clrscr();
     borderWindow();
     gotoxy(c,r);
     cout<<"ษออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป";
     r++;
     gotoxy(c,r);
     cout<<"บ ฐฐฐฐฐ       STUDENT MANAGEMENT SYSTEM -2020        ฐฐฐฐฐ บ";
     r++;
     gotoxy(c,r);
     cout<<"ฬออออออออออออออออออออออออออออออออออออออออออออออออออออออออออน";
     r++;
     int rcur1=r;
     gotoxy(c,r);
     cout<<"บ ID                 :                                     บ";
     r++;
     gotoxy(c,r);
     cout<<"บ NAME               :                                     บ";
     r++;
     gotoxy(c,r);
     cout<<"บ CLASS              :                                     บ";
     r++;
     gotoxy(c,r);
     cout<<"บ STREAM             :                                     บ";
     r++;
     gotoxy(c,r);
     cout<<"บ SESSION            :   2020                              บ";
     r++;
     gotoxy(c,r);
     cout<<"ฬออออออออออออออออออออออออออออออออออออออออออออออออออออออออออน";
     r++;
     gotoxy(c,r);
     rcur=r;
     cout<<"บ                       FEES DETAILS                       บ";
     r++;
     gotoxy(c,r);
     cout<<"ฬออออออออออออออออออออออออออออออออออออออออออออออออออออออออออน";
     r++;
     gotoxy(c,r);
     rcur=r;
     cout<<"บ SESSION CHARGE     :                                     บ";
     r++;
     gotoxy(c,r);
     cout<<"บ LAB FEES           :                                     บ";
     r++;
     gotoxy(c,r);
     cout<<"บ LIBRARY FEES       :                                     บ";
     r++;
     gotoxy(c,r);
     cout<<"บ DEVELOPEMENT FEES  :                                     บ";
     r++;
     gotoxy(c,r);
     cout<<"ฬออออออออออออออออออออออออออออออออออออออออออออออออออออออออออน";
     r++;
     int rcur2=r;
     gotoxy(c,r);
     cout<<"บ TOTAL             :                                      บ";
     r++;
     gotoxy(c,r);
     cout<<"ศออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ";

     int tot=0;
     float sc=(fees*0.75);
     int labc=(int)(fees*.10);
     int libc=(int)(fees*.10);
     int df=(int)(fees*.05);
     tot=sc+labc+libc+df;
     gotoxy(c+25,rcur1);
     cout<<sid;
     rcur1++;
     gotoxy(c+25,rcur1);
     cout<<name;
     rcur1++;
     gotoxy(c+25,rcur1);
     cout<<clas;
     rcur1++;
     gotoxy(c+25,rcur1);
     cout<<st;
     gotoxy(c+25,rcur);
     cout<<sc;
     rcur++;
     gotoxy(c+25,rcur);
     cout<<labc;
     rcur++;
     gotoxy(c+25,rcur);
     cout<<libc;
     rcur++;
     gotoxy(c+25,rcur);
     cout<<df;
     rcur++;
     gotoxy(c+25,rcur);
     gotoxy(c+25,rcur2);
     cout<<tot;
}
//===================================
void deletion()
{
     int r,c;
     int rcur,opt,t=1;
     student obj;

   textmode(C40) ;
   clrscr ;
   int valid ;
   int n = 3 ;
   int x = 14 ;
   char ch1, ch2 ;
   char chr1=219, chr=175 ;
   do
   {
	clrscr();
	borderWindow();
	char c1=24, c2=25 ;
	gotoxy(3,24) ;
	cout <<c1 ;
	cout <<c2 ;
	cout <<"";
	gotoxy(13,5) ;
	cout <<chr1 ;

	textbackground(WHITE) ;
	textcolor(BLACK) ;
	gotoxy(14,5) ;
	cprintf("C & T ") ;
	textbackground(BLACK) ;
	textcolor(LIGHTGRAY) ;
	gotoxy(14,8) ;
	gotoxy(14,9) ;
	gotoxy(14,6) ;
	cout<<"ษออออออออออออออออออออออออออออออออออออออออออออออออออป";
	gotoxy(14,7) ;delay(t);
	cout<<"บ ฐฐฐฐฐ    STUDENT MANAGEMENT SYSTEM -2020   ฐฐฐฐฐ บ";
	gotoxy(14,8) ;delay(t);
	cout<<"ฬออออออออออออออออออออออออออออออออออออออออออออออออออน";
	gotoxy(14,9) ;delay(t);
	cout<<"บ                  RECORD DELETION                 บ";
	gotoxy(14,10) ;delay(t);
	cout<<"ฬออออออออออออออออออออออออออออออออออออออออออออออออออน";
	gotoxy(14,11) ;delay(t);
	cout<<"บ                                                  บ";
	gotoxy(14,12) ;delay(t);
	cout<<"บ ADMISION DETAILS...............................  บ";
	gotoxy(14,13) ;delay(t);
	cout<<"บ MARKS DETAILS..................................  บ";
	gotoxy(14,14) ;delay(t);
	cout<<"บ RETURN......................................Esc  บ";
	gotoxy(14,15) ;delay(t);
	cout<<"ศออออออออออออออออออออออออออออออออออออออออออออออออออผ";
	gotoxy(10,x) ;
	cout <<chr ;
	gotoxy(13,5) ;


	do
	{

	  do
	   {
	    do
	     {
		ch1 = getch() ;
		if ( ch1 == 27 )
			{
			 textmode(C80) ;
			 clrscr() ;
			 //thankYou();
			 //exit(0) ;
			 return;
			 }
			} while (( ch1 != 0 ) && ( ch1 != 13 )) ;
			if ( ch1 != 13 )
			{
			 do
			  {
			   ch2 = getch() ;
			   if ( ch2 == 27 )
					{
						textmode(C80) ;
						clrscr() ;
						//thankYou();
						//exit(0) ;
						return;
					}
				} while (( ch2 != 72 ) && ( ch2 != 80 )	&& ( ch2 != 13 )) ;
			}
		} while ((( ch1 != 0 ) || (( ch2 != 72 ) && ( ch2 != 80 ))) && (( ch1 != 13 ) && ( ch2 != 13 ))) ;


		if (( ch1 == 0 ) && ( ch2 == 80 ))
		{
			gotoxy(10,x) ;
			cout <<" " ;
			if (n == 3)
			{
				n = 1 ;
				x = x - 2 ;
			}
			else
			{
				n = n + 1 ;
				x = x + 1 ;
			}
			gotoxy(10,x) ;
			cout <<chr ;
			gotoxy(13,5) ;
		}

		if (( ch1 == 0 ) && ( ch2 == 72 ))
		{
			gotoxy(10,x) ;
			cout <<" " ;
			if ( n == 1 )
			{
				n = 3 ;
				x = x + 2 ;
			}
			else
			{
				n = n - 1 ;
				x = x - 1 ;
			}
			gotoxy(10,x) ;
			cout <<chr ;
			gotoxy(13,5) ;
		}

	} while (( ch1 != 13 ) && ( ch2 != 13 )) ;

	switch(n)
	{
	 case 1:
		obj.deleteStudentDetails();
		getch();
		break;
	 case 2:
		obj.deleteMarksDetails();
		getch();
		break;
	 case 3:
		break;
	}
	//thankYou();
   } while ( n != 3 ) ;
   textmode(C80) ;
   clrscr() ;

}
//===================================
void student::deleteStudentDetails()
{
   student obj,tmpobj;
   fstream fp;
   fstream tmp;
   char sid[10];
   int r,c,rcur;
   fp.open("admission.dat",ios::binary|ios::in);
   tmp.open("dummy.dat",ios::binary|ios::out);

   if(!fp)
   {
      fp.close();
      clrscr();
      r=4;
      c=15;
      borderWindow();
      gotoxy(c,r);
      cout<<"ษออออออออออออออออออออออออออออออออออออออออออออออออออป";
      r++;
      gotoxy(c,r);
      cout<<"บ                 NO RECORD FOUND                  บ";
      r++;
      gotoxy(c,r);
      cout<<"ศออออออออออออออออออออออออออออออออออออออออออออออออออผ";
      cout<<"\nฒ\a";
      getch();
      return;
   }
     clrscr();
     r=4;
     c=15;
     borderWindow();
     gotoxy(c,r);
     cout<<"ษออออออออออออออออออออออออออออออออออออออออออออออออออป";
     r++;
     rcur=r;
     gotoxy(c,r);
     cout<<"บ Enter Student ID :                               บ";
     r++;
     gotoxy(c,r);
     cout<<"ศออออออออออออออออออออออออออออออออออออออออออออออออออผ";
     gotoxy(c+22,rcur);
     fflush(stdin);
     gets(sid);
     int found=0;
     while(fp)
     {
       fp.read((char *)&obj,sizeof(obj));
       if(fp.eof())
       break;
       if(strcmp(obj.getid(),sid)==0)
       {
	 tmpobj=obj;
	 found=1;
       }
       else
       {
	 tmp.write((char *)&obj,sizeof(obj));
       }
     }
     fp.close();
     tmp.close();
     if(found==1)
     {
       char conf;
       tmpobj.showAdmissionDetails();
       cout<<"\n\nฒ               Confirmed [Y/N]:";
       fflush(stdin);
       cin>>conf;
       if(conf=='y' || conf=='Y')
       {
	  tmp.close();
	  remove("admission.dat");
	  rename("dummy.dat","admission.dat");
	  obj.deleteMarksDetails2(sid);
	  borderWindow();
	  gotoxy(6,10);
	  cout<<"               Record sucessfully deleted";
	  getch();
       }
       else
       {
	  remove("dummy.dat");
	  return;
       }

     }
     if(found==0)
     {
       cout<<"\n\nฒ               Student ID "<<sid<<" does not exist";
     }
     return;
}
//===================================
int student::deleteMarksDetails2(char *sid)
{
   student obj,tmpobj;
   fstream fp;
   fstream tmp;
   int r,c;
   fp.open("MARKSDETAILS.dat",ios::binary|ios::in);
   tmp.open("dummy.dat",ios::binary|ios::out);

   if(!fp)
   {
      fp.close();
      clrscr();
      r=4;
      c=15;
      borderWindow();
      gotoxy(c,r);
      cout<<"ษออออออออออออออออออออออออออออออออออออออออออออออออออป";
      r++;
      gotoxy(c,r);
      cout<<"บ                 NO RECORD FOUND                  บ";
      r++;
      gotoxy(c,r);
      cout<<"ศออออออออออออออออออออออออออออออออออออออออออออออออออผ";
      cout<<"\nฒ\a";
      getch();
      return 0;
   }
   int found=0;
     while(fp)
     {

       fp.read((char *)&obj,sizeof(obj));
       if(fp.eof())
       break;

       if(strcmp(obj.getid(),sid)==0)
       {
	 tmpobj=obj;
	 //obj.showAdmissionDetails();
	 found=1;
	 //break;
       }
       else
       {
	 tmp.write((char *)&obj,sizeof(obj));
       }
     }
     fp.close();
     tmp.close();
     if(found==1)
     {
       char conf;
       tmpobj.showMarksDetails(sid);
       getch();

       borderWindow();
       gotoxy(6,10);
       cout<<"               Confirmed [Y/N]:";
       fflush(stdin);
       cin>>conf;
       if(conf=='y' || conf=='Y')
       {
	  remove("MARKSDETAILS.dat");
	  rename("dummy.dat","MARKSDETAILS.dat");
	  return 0;
       }
       else
       {
	  remove("dummy.dat");
	  return 0;
       }

     }
     if(found==0)
     {
       return 1;
     }
     return 1;
}
//===================================
void student::deleteMarksDetails()
{
   student obj,tmpobj;
   fstream fp;
   fstream tmp;
   int r,c,rcur;
   char sid[10];
   fp.open("MARKSDETAILS.dat",ios::binary|ios::in);
   tmp.open("dummy.dat",ios::binary|ios::out);

   if(!fp)
   {
      fp.close();
      clrscr();
      r=4;
      c=15;
      borderWindow();
      gotoxy(c,r);
      cout<<"ษออออออออออออออออออออออออออออออออออออออออออออออออออป";
      r++;
      gotoxy(c,r);
      cout<<"บ                 NO RECORD FOUND                  บ";
      r++;
      gotoxy(c,r);
      cout<<"ศออออออออออออออออออออออออออออออออออออออออออออออออออผ";
      cout<<"\nฒ\a";
      getch();
      return;
   }
     clrscr();
     r=4;
     c=15;
     borderWindow();
     gotoxy(c,r);
     cout<<"ษออออออออออออออออออออออออออออออออออออออออออออออออออป";
     r++;
     rcur=r;
     gotoxy(c,r);
     cout<<"บ Enter Student ID :                               บ";
     r++;
     gotoxy(c,r);
     cout<<"ศออออออออออออออออออออออออออออออออออออออออออออออออออผ";
     gotoxy(c+22,rcur);
     fflush(stdin);
     gets(sid);
     int found=0;
     while(fp)
     {

       fp.read((char *)&obj,sizeof(obj));
       if(fp.eof())
       break;

       if(strcmp(obj.getid(),sid)==0)
       {
	 tmpobj=obj;
	 found=1;
       }
       else
       {
	 tmp.write((char *)&obj,sizeof(obj));
       }
     }
     fp.close();
     tmp.close();
     if(found==1)
     {
       char conf;
       tmpobj.showMarksDetails(sid);
       getch();

       borderWindow();
       gotoxy(6,10);
       cout<<"               Confirmed [Y/N]:";
       fflush(stdin);
       cin>>conf;
       if(conf=='y' || conf=='Y')
       {
	  remove("MARKSDETAILS.dat");
	  rename("dummy.dat","MARKSDETAILS.dat");
	  borderWindow();
	  gotoxy(6,10);
	  cout<<"Record sucessfully deleted";
       }
       else
       {
	  remove("dummy.dat");
	  return;
       }
     }
     if(found==0)
     {
       cout<<"\n\nฒ   Student ID "<<sid<<" does not exist";
     }
     return;
}
//===================================
//===================================
void student::getAdmissionModifiedData(char *sid)
{
     int r,c;
     int rcur,opt;
     r=2;
     c=15;
     clrscr();
     borderWindow();

     gotoxy(c,r);
     cout<<"ษออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป";
     r++;
     gotoxy(c,r);
     cout<<"บ ฐฐฐฐฐ       STUDENT MANAGEMENT SYSTEM -2020        ฐฐฐฐฐ บ";
     r++;
     gotoxy(c,r);
     cout<<"ฬออออออออออออออออออออออออออออออออออออออออออออออออออออออออออน";
     r++;
     gotoxy(c,r);
     cout<<"บ                    ADMISSION ENTRY FORM                  บ";
     r++;
     gotoxy(c,r);
     cout<<"ฬออออออออออออออออออออออออออออออออออออออออออออออออออออออออออน";
     r++;
     gotoxy(c,r);
     rcur=r;
     cout<<"บ NAME             :                                       บ";
     r++;
     gotoxy(c,r);
     cout<<"บ FATHER'S NAME    :                                       บ";
     r++;
     gotoxy(c,r);
     cout<<"บ DATE OF BIRTH    :                                       บ";
     r++;
     gotoxy(c,r);
     cout<<"บ CLASS    X,XI..  :                                       บ";
     r++;
     gotoxy(c,r);
     cout<<"บ PERCENTAGE       :                                       บ";
     r++;
     gotoxy(c,r);
     cout<<"บ ADDRESS          :                                       บ";
     r++;
     gotoxy(c,r);
     cout<<"บ MOBILE/PHONE     :                                       บ";
     r++;
     gotoxy(c,r);
     cout<<"บ CITY             :                                       บ";
     r++;
     gotoxy(c,r);
     cout<<"บ PIN              :                                       บ";
     r++;
     gotoxy(c,r);
     cout<<"บ GENDER [M/F]     :                                       บ";
     r++;
     gotoxy(c,r);
     cout<<"บ EMAIL ID         :                                       บ";
     r++;
     gotoxy(c,r);
     cout<<"บ STREAM [S/C/H]   :                                       บ";
     r++;
     gotoxy(c,r);
     cout<<"บ YEAR OF PASSING  :                                       บ";
     r++;
     gotoxy(c,r);
     cout<<"บ BLOOD GROUP      :                                       บ";
     r++;
     gotoxy(c,r);
     cout<<"ฬออออออออออออออออออออออออออออออออออออออออออออออออออออออออออน";
     r++;
     gotoxy(c,r);
     cout<<"บ                                                          บ";
     r++;
     gotoxy(c,r);
     cout<<"ศออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ";
     //rcur--;
     gotoxy(c+21,rcur);
     fflush(stdin);
     //----auto generate id
     strcpy(id,sid);
     gets(name);
     rcur++;
     gotoxy(c+21,rcur);
     fflush(stdin);
     gets(fname);
     rcur++;
     gotoxy(c+21,rcur);
     fflush(stdin);
     gets(dob);
     rcur++;
     gotoxy(c+21,rcur);
     fflush(stdin);
     gets(clas);
     rcur++;
     gotoxy(c+21,rcur);
     fflush(stdin);
     cin>>per;
     rcur++;
     gotoxy(c+21,rcur);
     fflush(stdin);
     gets(add);
     rcur++;
     gotoxy(c+21,rcur);
     fflush(stdin);
     gets(phno);
     rcur++;
     gotoxy(c+21,rcur);
     fflush(stdin);
     gets(city);
     rcur++;
     gotoxy(c+21,rcur);
     fflush(stdin);
     gets(pin);
     rcur++;
     gotoxy(c+21,rcur);
     fflush(stdin);
     cin>>gender;
     rcur++;
     gotoxy(c+21,rcur);
     fflush(stdin);
     gets(mailid);
     rcur++;
     gotoxy(c+21,rcur);
     fflush(stdin);
     cin>>stream;
     rcur++;
     gotoxy(c+21,rcur);
     fflush(stdin);
     cin>>yearpass;
     rcur++;
     gotoxy(c+21,rcur);
     fflush(stdin);
     gets(bgroup);
}
//===================================
void student::modifyStudentDetails()
{
   student obj,tmpobj;
   fstream fp;
   fstream tmp;
   int r,c,rcur;
   char sid[10];
   fp.open("admission.dat",ios::binary|ios::in);
   tmp.open("dummy.dat",ios::binary|ios::out);

   if(!fp)
   {
      fp.close();
      clrscr();
      r=4;
      c=15;
      borderWindow();
      gotoxy(c,r);
      cout<<"ษออออออออออออออออออออออออออออออออออออออออออออออออออป";
      r++;
      gotoxy(c,r);
      cout<<"บ                 NO RECORD FOUND                  บ";
      r++;
      gotoxy(c,r);
      cout<<"ศออออออออออออออออออออออออออออออออออออออออออออออออออผ";
      cout<<"\nฒ\a";
      getch();
      return;
   }
     clrscr();
     r=4;
     c=15;
     borderWindow();
     gotoxy(c,r);
     cout<<"ษออออออออออออออออออออออออออออออออออออออออออออออออออป";
     r++;
     rcur=r;
     gotoxy(c,r);
     cout<<"บ Enter Student ID :                               บ";
     r++;
     gotoxy(c,r);
     cout<<"ศออออออออออออออออออออออออออออออออออออออออออออออออออผ";
     gotoxy(c+22,rcur);
     fflush(stdin);
     gets(sid);
     int found=0;
     while(fp)
     {
       fp.read((char *)&obj,sizeof(obj));
       if(fp.eof())
       break;
       if(strcmp(obj.getid(),sid)==0)
       {
	 tmpobj=obj;
	 found=1;
       }
       else
       {
	 tmp.write((char *)&obj,sizeof(obj));
       }
     }
     fp.close();
     tmp.close();

     if(found==1)
     {
       tmp.open("dummy.dat",ios::binary|ios::app);
       char conf;
       tmpobj.showAdmissionDetails();
       cout<<"\nฒ               Confirmed [Y/N]:";
       fflush(stdin);
       cin>>conf;
       if(conf=='y' || conf=='Y')
       {
	  obj.getAdmissionModifiedData(sid);
	  tmp.write((char *)&obj,sizeof(obj));
	  tmp.close();
	  remove("admission.dat");
	  rename("dummy.dat","admission.dat");
	  cout<<"\nฒ          Record sucessfully modified";
	  getch();
       }
       else
       {

	  remove("dummy.dat");

	  return;
       }
     }
     if(found==0)
     {
       cout<<"\n\n\nฒ         Student ID "<<sid<<" does not exist";
     }
     return;
}
//===================================
void student::modifyMarksDetails()
{
   student obj,tmpobj;
   fstream fp;
   fstream tmp;
   int r,c,rcur;
   char sid[10];
   fp.open("MARKSDETAILS.dat",ios::binary|ios::in);
   tmp.open("dummy.dat",ios::binary|ios::out);

   if(!fp)
   {
      fp.close();
      clrscr();
      r=4;
      c=15;
      borderWindow();
      gotoxy(c,r);
      cout<<"ษออออออออออออออออออออออออออออออออออออออออออออออออออป";
      r++;
      gotoxy(c,r);
      cout<<"บ                 NO RECORD FOUND                  บ";
      r++;
      gotoxy(c,r);
      cout<<"ศออออออออออออออออออออออออออออออออออออออออออออออออออผ";
      cout<<"\nฒ\a";
      getch();
      return;
   }
     clrscr();
     r=4;
     c=15;
     borderWindow();
     gotoxy(c,r);
     cout<<"ษออออออออออออออออออออออออออออออออออออออออออออออออออป";
     r++;
     rcur=r;
     gotoxy(c,r);
     cout<<"บ Enter Student ID :                               บ";
     r++;
     gotoxy(c,r);
     cout<<"ศออออออออออออออออออออออออออออออออออออออออออออออออออผ";
     gotoxy(c+22,rcur);
     fflush(stdin);
     gets(sid);
   int found=0;
     while(fp)
     {

       fp.read((char *)&obj,sizeof(obj));
       if(fp.eof())
       break;

       if(strcmp(obj.getid(),sid)==0)
       {
	 tmpobj=obj;
	 found=1;
       }
       else
       {
	 tmp.write((char *)&obj,sizeof(obj));
       }
     }
     fp.close();
     tmp.close();
     if(found==1)
     {
       char conf;
       tmpobj.showMarksDetails(sid);
       getch();
       borderWindow();
       gotoxy(6,10);
       cout<<"               Confirmed [Y/N]:";
       fflush(stdin);
       cin>>conf;
       if(conf=='y' || conf=='Y')
       {

	  remove("MARKSDETAILS.dat");
	  rename("dummy.dat","MARKSDETAILS.dat");
	  obj.getMarksDetails(sid);
	  fp.open("MARKSDETAILS.dat",ios::binary|ios::app);
	  fp.write((char *)&obj,sizeof(obj));
	  cout<<"\n\nฒ              Record sucessfully modified";
	  fp.close();
       }
       else
       {
	  remove("dummy.dat");
	  return;
       }
     }
     if(found==0)
     {
       cout<<"\n\nฒ             Student ID "<<sid<<" does not exist";
     }
     return;
}
//======================================
void modification()
{
     int r,c;
     int rcur,opt,t=1;
     student obj;
   textmode(C40) ;
   clrscr ;
   int valid ;
   int n = 3 ;
   int x = 14 ;
   char ch1, ch2 ;
   char chr1=219, chr=175 ;
   do
   {
	clrscr();
	borderWindow();
	char c1=24, c2=25 ;
	gotoxy(3,24) ;
	cout <<c1 ;
	cout <<c2 ;
	cout <<"";
	gotoxy(13,5) ;
	cout <<chr1 ;

	textbackground(WHITE) ;
	textcolor(BLACK) ;
	gotoxy(14,5) ;
	cprintf("C & T ") ;
	textbackground(BLACK) ;
	textcolor(LIGHTGRAY) ;
	gotoxy(14,8) ;
	gotoxy(14,9) ;
	gotoxy(14,6) ;
	cout<<"ษออออออออออออออออออออออออออออออออออออออออออออออออออป";
	gotoxy(14,7) ;delay(t);
	cout<<"บ ฐฐฐฐฐ    STUDENT MANAGEMENT SYSTEM -2020   ฐฐฐฐฐ บ";
	gotoxy(14,8) ;delay(t);
	cout<<"ฬออออออออออออออออออออออออออออออออออออออออออออออออออน";
	gotoxy(14,9) ;delay(t);
	cout<<"บ                  MODIFICATION                    บ";
	gotoxy(14,10) ;delay(t);
	cout<<"ฬออออออออออออออออออออออออออออออออออออออออออออออออออน";
	gotoxy(14,11) ;delay(t);
	cout<<"บ                                                  บ";
	gotoxy(14,12) ;delay(t);
	cout<<"บ ADMISION DETAILS...............................  บ";
	gotoxy(14,13) ;delay(t);
	cout<<"บ MARKS DETAILS..................................  บ";
	gotoxy(14,14) ;delay(t);
	cout<<"บ RETURN......................................Esc  บ";
	gotoxy(14,15) ;delay(t);
	cout<<"ศออออออออออออออออออออออออออออออออออออออออออออออออออผ";
	gotoxy(10,x) ;
	cout <<chr ;
	gotoxy(13,5) ;


	do
	{

	  do
	   {
	    do
	     {
		ch1 = getch() ;
		if ( ch1 == 27 )
			{
			 textmode(C80) ;
			 clrscr() ;
			 return;
			 }
			} while (( ch1 != 0 ) && ( ch1 != 13 )) ;
			if ( ch1 != 13 )
			{
			 do
			  {
			   ch2 = getch() ;
			   if ( ch2 == 27 )
					{
						textmode(C80) ;
						clrscr() ;
						return;
					}
				} while (( ch2 != 72 ) && ( ch2 != 80 )	&& ( ch2 != 13 )) ;
			}
		} while ((( ch1 != 0 ) || (( ch2 != 72 ) && ( ch2 != 80 ))) && (( ch1 != 13 ) && ( ch2 != 13 ))) ;


		if (( ch1 == 0 ) && ( ch2 == 80 ))
		{
			gotoxy(10,x) ;
			cout <<" " ;
			if (n == 3)
			{
				n = 1 ;
				x = x - 2 ;
			}
			else
			{
				n = n + 1 ;
				x = x + 1 ;
			}
			gotoxy(10,x) ;
			cout <<chr ;
			gotoxy(13,5) ;
		}

		if (( ch1 == 0 ) && ( ch2 == 72 ))
		{
			gotoxy(10,x) ;
			cout <<" " ;
			if ( n == 1 )
			{
				n = 3 ;
				x = x + 2 ;
			}
			else
			{
				n = n - 1 ;
				x = x - 1 ;
			}
			gotoxy(10,x) ;
			cout <<chr ;
			gotoxy(13,5) ;
		}

	} while (( ch1 != 13 ) && ( ch2 != 13 )) ;

	switch(n)
	{
	 case 1:
		obj.modifyStudentDetails();
		getch();
		break;
	 case 2:
		obj.modifyMarksDetails();
		getch();
		break;
	 case 3:
		break;
	}
	//thankYou();
   } while ( n != 3 ) ;
   textmode(C80) ;
   clrscr() ;
}
//=================================
void  resultGen()
{
   student obj;
   fstream fp;
   int r,c,rcur;
   char sid[10];
   fp.open("MARKSDETAILS.dat",ios::binary|ios::in);

   if(!fp)
   {
      fp.close();
      clrscr();
      r=4;
      c=15;
      borderWindow();
      gotoxy(c,r);
      cout<<"ษออออออออออออออออออออออออออออออออออออออออออออออออออป";
      r++;
      gotoxy(c,r);
      cout<<"บ                 NO RECORD FOUND                  บ";
      r++;
      gotoxy(c,r);
      cout<<"ศออออออออออออออออออออออออออออออออออออออออออออออออออผ";
      cout<<"\n\a";
      getch();
      return;
   }
     clrscr();
     r=4;
     c=15;
     borderWindow();
     gotoxy(c,r);
     cout<<"ษออออออออออออออออออออออออออออออออออออออออออออออออออป";
     r++;
     rcur=r;
     gotoxy(c,r);
     cout<<"บ Enter Student ID :                               บ";
     r++;
     gotoxy(c,r);
     cout<<"ศออออออออออออออออออออออออออออออออออออออออออออออออออผ";
     gotoxy(c+22,rcur);
     fflush(stdin);
     gets(sid);

     int found=0;
     while(fp)
     {

       fp.read((char *)&obj,sizeof(obj));
       if(fp.eof())
       break;

       if(strcmp(obj.getid(),sid)==0)
       {
	 obj.showMarksDetails(sid);
	 found=1;
	 break;
       }
     }
     fp.close();
     if(found==0)
     {
       cout<<"\n\n\nฒ             Student ID "<<sid<<" does not exist";
     }
     return;
}
//===================================
void marksEntry()
{
   student obj;
   fstream fp;
   char sid[10];
   int r,c,rcur;
   fp.open("admission.dat",ios::binary|ios::in);

   if(!fp)
   {
      fp.close();
      clrscr();
      r=4;
      c=15;
      borderWindow();
      gotoxy(c,r);
      cout<<"ษออออออออออออออออออออออออออออออออออออออออออออออออออป";
      r++;
      gotoxy(c,r);
      cout<<"บ                 NO RECORD FOUND                  บ";
      r++;
      gotoxy(c,r);
      cout<<"ศออออออออออออออออออออออออออออออออออออออออออออออออออผ";
      cout<<"\nฒ\a";
      getch();
      return;
   }
 do
 {
     clrscr();
     r=4;
     c=15;
     borderWindow();
     gotoxy(c,r);
     cout<<"ษออออออออออออออออออออออออออออออออออออออออออออออออออป";
     r++;
     rcur=r;
     gotoxy(c,r);
     cout<<"บ Enter Student ID :                               บ";
     r++;
     gotoxy(c,r);
     cout<<"ศออออออออออออออออออออออออออออออออออออออออออออออออออผ";
     gotoxy(c+22,rcur);
     fflush(stdin);
     gets(sid);
     int found=0;
     while(fp)
     {

       fp.read((char *)&obj,sizeof(obj));
       if(fp.eof())
       break;

       if(strcmp(obj.getid(),sid)==0)
       {
	 found=1;
	 break;
       }
     }
     fp.close();
     if(found==0)
     {
       char ch2;
       cout<<"\n\n\nฒ             Student ID "<<sid<<" does not exist";
       cout<<"\nฒ             Try Again [Y/N]:";
       fflush(stdin);
       cin>>ch2;
       if(ch2=='Y' || ch2=='y')
       continue;
       else
       return;
     }
     //-----------------
     fstream fpm;
     fpm.open("MARKSDETAILS.dat",ios::binary|ios::in);

   if(!fpm)
   {
      fpm.close();
      fpm.open("MARKSDETAILS.dat",ios::binary|ios::out);
   }
   else
   {
      fpm.close();
      fpm.open("MARKSDETAILS.dat",ios::binary|ios::app);
   }
     char conf;
     obj.getMarksDetails(sid);
     cout<<"\nฒ              Confirmed [Y/N]:";
     fflush(stdin);
     cin>>conf;
     if(conf=='Y' || conf=='y')
     {
     fpm.write((char *)&obj,sizeof(obj));
     cout<<"\nฒ              Marks sucessfully Added";
     fpm.close();
     }
     char ch3;
     cout<<"\nฒ              Add More...[Y/N]:";
     fflush(stdin);
     cin>>ch3;
     if(ch3=='Y' || ch3=='y')
     continue;
     else
     break;
   }while(1);
   return;
}

//=======================================
void student::showMarksDetails(char *sid)
{
   student obj;
   fstream fp;
   int r,c;
   fp.open("admission.dat",ios::binary|ios::in);

   if(!fp)
   {
      fp.close();
      clrscr();
      r=2;
      c=15;
      borderWindow();
      gotoxy(c,r);
      cout<<"ษออออออออออออออออออออออออออออออออออออออออออออออออออป";
      r++;
      gotoxy(c,r);
      cout<<"บ                 NO RECORD FOUND                  บ";
      r++;
      gotoxy(c,r);
      cout<<"ศออออออออออออออออออออออออออออออออออออออออออออออออออผ";
      cout<<"\nฒ\a";
      getch();
      return;
   }
     char name[20],clas[5];//st;
     while(fp)
     {

       fp.read((char *)&obj,sizeof(obj));
       if(fp.eof())
       break;
       if(strcmp(obj.getid(),sid)==0)
       {
	 strcpy(name,obj.getname());
	 strcpy(clas,obj.getclass());
	 //st=obj.getstream();
	 break;
       }
     }
     fp.close();
     int rcur,opt;
     r=2;
     c=15;
     clrscr();
     borderWindow();
     gotoxy(c,r);
     cout<<"ษออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป";
     r++;
     gotoxy(c,r);
     cout<<"บ ฐฐฐฐฐ       STUDENT MANAGEMENT SYSTEM -2020        ฐฐฐฐฐ บ";
     r++;
     gotoxy(c,r);
     cout<<"ฬออออออออออออออออออออออออออออออออออออออออออออออออออออออออออน";
     int rcur1=r+1;
     r++;
     //int rcur1=r;
     gotoxy(c,r);
     //int rcur1=r;
     cout<<"บ ID          :                                            บ";
     r++;
     gotoxy(c,r);
     cout<<"บ NAME        :                                            บ";
     r++;
     gotoxy(c,r);
     cout<<"บ CLASS       :                                            บ";
     //r++;
     //gotoxy(c,r);
     //cout<<"บ SECTION     :                                            บ";
     //r++;
     //gotoxy(c,r);
     //cout<<"บ SESSION     :   2020                                     บ";
     r++;
     gotoxy(c,r);
     cout<<"ฬออออออออออออออออออออออออออออออออออออออออออออออออออออออออออน";
     r++;
     gotoxy(c,r);
     //rcur=r;
     cout<<"บ                       MARKS DETAILS                      บ";
     r++;
     gotoxy(c,r);
     cout<<"ฬออออออออออออออออออออออออออออออออออออออออออออออออออออออออออน";
     r++;
     gotoxy(c,r);
     rcur=r;
     cout<<"บ GERMAN      :                                            บ";
     r++;
     gotoxy(c,r);
     cout<<"บ ENGLISH     :                                            บ";
     r++;
     gotoxy(c,r);
     cout<<"บ HISTORY     :                                            บ";
     r++;
     gotoxy(c,r);
     cout<<"บ GEOGRAPHY   :                                            บ";
     r++;
     gotoxy(c,r);
     cout<<"บ MATHS       :                                            บ";
     r++;
     gotoxy(c,r);
     cout<<"บ PHYSICS     :                                            บ";
     r++;
     gotoxy(c,r);
     cout<<"บ CHEMISTRY   :                                            บ";
     r++;
     gotoxy(c,r);
     cout<<"บ BIOLOGY     :                                            บ";
     r++;
     gotoxy(c,r);
     cout<<"บ COMPUTER    :                                            บ";
     r++;
     gotoxy(c,r);
     cout<<"บ EVE SC.     :                                            บ";
     r++;
     gotoxy(c,r);
     cout<<"ฬออออออออออออออออออออออออออออออออออออออออออออออออออออออออออน";
     r++;
     int rcur2=r;
     gotoxy(c,r);
     cout<<"บ TOTAL       :                                            บ";
     r++;
     gotoxy(c,r);
     cout<<"วฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤถ";
     r++;
     gotoxy(c,r);
     cout<<"บ PERCENTAGE  :               GRADE:                       บ";
     r++;
     gotoxy(c,r);
     cout<<"ศออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ";

     int tot=0;
     float avg=0;
     char gr='F';
     tot=tot+beng+engl+hist+geog+math+phys+chem+bios+comp+eves;
     avg=tot/10.0;
     if(avg>=0 && avg<40)
     gr='F';
     else
     if(avg>=40 && avg<60)
     gr='B';
     else
     if(avg>=60 && avg<80)
     gr='C';
     else
     if(avg>=80 && avg<=100)
     gr='A';
     gotoxy(c+18,rcur1);
     cout<<sid;
     rcur1++;
     gotoxy(c+18,rcur1);
     cout<<name;
     rcur1++;
     gotoxy(c+18,rcur1);
     cout<<clas;
     rcur1++;
     //gotoxy(c+18,rcur1);
     //cout<<st;
     //-----------------------
     gotoxy(c+18,rcur);
     cout<<beng;
     rcur++;
     gotoxy(c+18,rcur);
     cout<<engl;
     rcur++;
     gotoxy(c+18,rcur);
     cout<<hist;
     rcur++;
     gotoxy(c+18,rcur);
     cout<<geog;
     rcur++;
     gotoxy(c+18,rcur);
     cout<<math;
     rcur++;
     gotoxy(c+18,rcur);
     cout<<phys;
     rcur++;
     gotoxy(c+18,rcur);
     cout<<chem;
     rcur++;
     gotoxy(c+18,rcur);
     cout<<bios;
     rcur++;
     gotoxy(c+18,rcur);
     cout<<comp;
     rcur++;
     gotoxy(c+18,rcur);
     cout<<eves;
     //---------------
     gotoxy(c+18,rcur2);
     cout<<tot;
     rcur2+=2;
     gotoxy(c+18,rcur2);
     cout<<avg;
     gotoxy(c+18+20,rcur2);
     cout<<gr;


}
//===================================
void student::getMarksDetails(char *sid)
{
     int r,c;
     int rcur,opt;
     r=4;
     c=15;
     clrscr();
     borderWindow();
     gotoxy(c,r);
     cout<<"ษออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป";
     r++;
     gotoxy(c,r);
     cout<<"บ ฐฐฐฐฐ       STUDENT MANAGEMENT SYSTEM -2020        ฐฐฐฐฐ บ";
     r++;
     gotoxy(c,r);
     cout<<"ฬออออออออออออออออออออออออออออออออออออออออออออออออออออออออออน";
     r++;
     gotoxy(c,r);
     cout<<"บ                     MARKS ENTRY FORM                     บ";
     r++;
     gotoxy(c,r);
     cout<<"ฬออออออออออออออออออออออออออออออออออออออออออออออออออออออออออน";
     r++;
     gotoxy(c,r);
     rcur=r;
     cout<<"บ GERMAN    [TO SKIP PRESS 0]  :                           บ";
     r++;
     gotoxy(c,r);
     cout<<"บ ENGLISH   [TO SKIP PRESS 0]  :                           บ";
     r++;
     gotoxy(c,r);
     cout<<"บ HISTORY   [TO SKIP PRESS 0]  :                           บ";
     r++;
     gotoxy(c,r);
     cout<<"บ GEOGRAPHY [TO SKIP PRESS 0]  :                           บ";
     r++;
     gotoxy(c,r);
     cout<<"บ MATHS     [TO SKIP PRESS 0]  :                           บ";
     r++;
     gotoxy(c,r);
     cout<<"บ PHYSICS   [TO SKIP PRESS 0]  :                           บ";
     r++;
     gotoxy(c,r);
     cout<<"บ CHEMISTRY [TO SKIP PRESS 0]  :                           บ";
     r++;
     gotoxy(c,r);
     cout<<"บ BIOLOGY   [TO SKIP PRESS 0]  :                           บ";
     r++;
     gotoxy(c,r);
     cout<<"บ COMPUTER  [TO SKIP PRESS 0]  :                           บ";
     r++;
     gotoxy(c,r);
     cout<<"บ EVE SC.   [TO SKIP PRESS 0]  :                           บ";
     r++;
     gotoxy(c,r);
     cout<<"ฬออออออออออออออออออออออออออออออออออออออออออออออออออออออออออน";
     r++;
     gotoxy(c,r);
     cout<<"บ                                                          บ";
     r++;
     gotoxy(c,r);
     cout<<"ศออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ";
     gotoxy(c+34,rcur);
     strcpy(id,sid);
     fflush(stdin);
     cin>>beng;
     rcur++;
     gotoxy(c+34,rcur);
     fflush(stdin);
     cin>>engl;
     rcur++;
     gotoxy(c+34,rcur);
     fflush(stdin);
     cin>>hist;
     rcur++;
     gotoxy(c+34,rcur);
     fflush(stdin);
     cin>>geog;
     rcur++;
     gotoxy(c+34,rcur);
     fflush(stdin);
     cin>>math;
     rcur++;
     gotoxy(c+34,rcur);
     fflush(stdin);
     cin>>phys;
     rcur++;
     gotoxy(c+34,rcur);
     fflush(stdin);
     cin>>chem;
     rcur++;
     gotoxy(c+34,rcur);
     fflush(stdin);
     cin>>bios;
     rcur++;
     gotoxy(c+34,rcur);
     fflush(stdin);
     cin>>comp;
     rcur++;
     gotoxy(c+34,rcur);
     fflush(stdin);
     cin>>eves;
}
//==================================

void student::showAdmissionDetails()
{
     int r,c;
     int rcur,opt;
     r=2;
     c=15;
     clrscr();
     borderWindow();
     gotoxy(c,r);
     cout<<"ษออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป";
     r++;
     gotoxy(c,r);
     cout<<"บ ฐฐฐฐฐ       STUDENT MANAGEMENT SYSTEM -2020        ฐฐฐฐฐ บ";
     r++;
     gotoxy(c,r);
     cout<<"ฬออออออออออออออออออออออออออออออออออออออออออออออออออออออออออน";
     r++;
     gotoxy(c,r);
     cout<<"บ                    ADMISSION DETAILS                     บ";
     r++;
     gotoxy(c,r);
     cout<<"ฬออออออออออออออออออออออออออออออออออออออออออออออออออออออออออน";
     r++;
     gotoxy(c,r);
     rcur=r;
     cout<<"บ ID               :                                       บ";
     r++;
     gotoxy(c,r);
     cout<<"บ NAME             :                                       บ";
     r++;
     gotoxy(c,r);
     cout<<"บ FATHER'S NAME    :                                       บ";
     r++;
     gotoxy(c,r);
     cout<<"บ DATE OF BIRTH    :                                       บ";
     r++;
     gotoxy(c,r);
     cout<<"บ CLASS    X,XI..  :                                       บ";
     r++;
     gotoxy(c,r);
     cout<<"บ PERCENTAGE       :                                       บ";
     r++;
     gotoxy(c,r);
     cout<<"บ ADDRESS          :                                       บ";
     r++;
     gotoxy(c,r);
     cout<<"บ MOBILE/PHONE     :                                       บ";
     r++;
     gotoxy(c,r);
     cout<<"บ CITY             :                                       บ";
     r++;
     gotoxy(c,r);
     cout<<"บ PIN              :                                       บ";
     r++;
     gotoxy(c,r);
     cout<<"บ GENDER [M/F]     :                                       บ";
     r++;
     gotoxy(c,r);
     cout<<"บ EMAIL ID         :                                       บ";
     r++;
     gotoxy(c,r);
     cout<<"บ STREAM [S/C/H]   :                                       บ";
     r++;
     gotoxy(c,r);
     cout<<"บ YEAR OF PASSING  :                                       บ";
     r++;
     gotoxy(c,r);
     cout<<"บ BLOOD GROUP      :                                       บ";
     r++;
     gotoxy(c,r);
     cout<<"ศออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ";
     gotoxy(c+21,rcur);
     cout<<id;
     rcur++;
     gotoxy(c+21,rcur);
     cout<<name;
     rcur++;
     gotoxy(c+21,rcur);
     cout<<fname;
     rcur++;
     gotoxy(c+21,rcur);
     cout<<dob;
     rcur++;
     gotoxy(c+21,rcur);
     cout<<clas;
     rcur++;
     gotoxy(c+21,rcur);
     cout<<per;
     rcur++;
     gotoxy(c+21,rcur);
     cout<<add;
     rcur++;
     gotoxy(c+21,rcur);
     cout<<phno;
     rcur++;
     gotoxy(c+21,rcur);
     cout<<city;
     rcur++;
     gotoxy(c+21,rcur);
     cout<<pin;
     rcur++;
     gotoxy(c+21,rcur);
     cout<<gender;
     rcur++;
     gotoxy(c+21,rcur);
     cout<<mailid;
     rcur++;
     gotoxy(c+21,rcur);
     cout<<stream;
     rcur++;
     gotoxy(c+21,rcur);
     cout<<yearpass;
     rcur++;
     gotoxy(c+21,rcur);
     cout<<bgroup;
}
//===================================
void student::getAdmissionData()
{
     int r,c;
     int rcur,opt;
     r=2;
     c=15;
     clrscr();
     borderWindow();
     gotoxy(c,r);
     cout<<"ษออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป";
     r++;
     gotoxy(c,r);
     cout<<"บ ฐฐฐฐฐ       STUDENT MANAGEMENT SYSTEM -2020        ฐฐฐฐฐ บ";
     r++;
     gotoxy(c,r);
     cout<<"ฬออออออออออออออออออออออออออออออออออออออออออออออออออออออออออน";
     r++;
     gotoxy(c,r);
     cout<<"บ                    ADMISSION ENTRY FORM                  บ";
     r++;
     gotoxy(c,r);
     cout<<"ฬออออออออออออออออออออออออออออออออออออออออออออออออออออออออออน";
     r++;
     gotoxy(c,r);
     rcur=r;
     cout<<"บ AUTO ID          :                                       บ";
     r++;
     gotoxy(c,r);
     cout<<"บ NAME             :                                       บ";
     r++;
     gotoxy(c,r);
     cout<<"บ FATHER'S NAME    :                                       บ";
     r++;
     gotoxy(c,r);
     cout<<"บ DATE OF BIRTH    :                                       บ";
     r++;
     gotoxy(c,r);
     cout<<"บ CLASS    X,XI..  :                                       บ";
     r++;
     gotoxy(c,r);
     cout<<"บ PERCENTAGE       :                                       บ";
     r++;
     gotoxy(c,r);
     cout<<"บ ADDRESS          :                                       บ";
     r++;
     gotoxy(c,r);
     cout<<"บ MOBILE/PHONE     :                                       บ";
     r++;
     gotoxy(c,r);
     cout<<"บ CITY             :                                       บ";
     r++;
     gotoxy(c,r);
     cout<<"บ PIN              :                                       บ";
     r++;
     gotoxy(c,r);
     cout<<"บ GENDER [M/F]     :                                       บ";
     r++;
     gotoxy(c,r);
     cout<<"บ EMAIL ID         :                                       บ";
     r++;
     gotoxy(c,r);
     cout<<"บ STREAM [S/C/H]   :                                       บ";
     r++;
     gotoxy(c,r);
     cout<<"บ YEAR OF PASSING  :                                       บ";
     r++;
     gotoxy(c,r);
     cout<<"บ BLOOD GROUP      :                                       บ";
     r++;
     gotoxy(c,r);
     cout<<"ฬออออออออออออออออออออออออออออออออออออออออออออออออออออออออออน";
     r++;
     gotoxy(c,r);
     cout<<"บ                                                          บ";
     r++;
     gotoxy(c,r);
     cout<<"ศออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ";
     gotoxy(c+21,rcur);
     fflush(stdin);
     //----auto generate id
     char sid[10];
     char tmp[10];
     strcpy(sid,"SMS");
     itoa(rc,tmp,10);
     strcat(sid,tmp);
     strcpy(id,sid);
     //--------------------
     cout<<sid;
     rcur++;
     gotoxy(c+21,rcur);
     gets(name);
     rcur++;
     gotoxy(c+21,rcur);
     fflush(stdin);
     gets(fname);
     rcur++;
     gotoxy(c+21,rcur);
     fflush(stdin);
     gets(dob);
     rcur++;
     gotoxy(c+21,rcur);
     fflush(stdin);
     gets(clas);
     rcur++;
     gotoxy(c+21,rcur);
     fflush(stdin);
     cin>>per;
     rcur++;
     gotoxy(c+21,rcur);
     fflush(stdin);
     gets(add);
     rcur++;
     gotoxy(c+21,rcur);
     fflush(stdin);
     gets(phno);
     rcur++;
     gotoxy(c+21,rcur);
     fflush(stdin);
     gets(city);
     rcur++;
     gotoxy(c+21,rcur);
     fflush(stdin);
     gets(pin);
     rcur++;
     gotoxy(c+21,rcur);
     fflush(stdin);
     cin>>gender;
     rcur++;
     gotoxy(c+21,rcur);
     fflush(stdin);
     gets(mailid);
     rcur++;
     gotoxy(c+21,rcur);
     fflush(stdin);
     cin>>stream;
     rcur++;
     gotoxy(c+21,rcur);
     fflush(stdin);
     cin>>yearpass;
     rcur++;
     gotoxy(c+21,rcur);
     fflush(stdin);
     gets(bgroup);
}
//=======================================
//           END OF PROGRAME
//=======================================
void borderWindow()
{
    int r=2,c=1;
    struct date d;
    getdate(&d);
    clrscr();
    textmode(C80);
    gotoxy(c,r);
    cout<<"ฒฒฒฒฒฒ STUDENT MANAGEMENT SYSTEM - 2020 ฒฒฒฒฒฒฒฒฒฒฒฒฒฒฒฒฒฒฒฒฒฒฒฒฒฒ "<<(int)d.da_day<<"/"<<(int)d.da_mon<<"/"<<(int)d.da_year<<" ฒฒฒฒฒฒ";
    gotoxy(c,++r);
    cout<<"ฒ                                                                              ฒ";
    gotoxy(c,++r);
    cout<<"ฒ                                                                              ฒ";
    gotoxy(c,++r);
    cout<<"ฒ                                                                              ฒ";
    gotoxy(c,++r);
    cout<<"ฒ                                                                              ฒ";
    gotoxy(c,++r);
    cout<<"ฒ                                                                              ฒ";
    gotoxy(c,++r);
    cout<<"ฒ                                                                              ฒ";
    gotoxy(c,++r);
    cout<<"ฒ                                                                              ฒ";
    gotoxy(c,++r);
    cout<<"ฒ                                                                              ฒ";
    gotoxy(c,++r);
    cout<<"ฒ                                                                              ฒ";
    gotoxy(c,++r);
    cout<<"ฒ                                                                              ฒ";
    gotoxy(c,++r);
    cout<<"ฒ                                                                              ฒ";
    gotoxy(c,++r);
    cout<<"ฒ                                                                              ฒ";
    gotoxy(c,++r);
    cout<<"ฒ                                                                              ฒ";
    gotoxy(c,++r);
    cout<<"ฒ                                                                              ฒ";
    gotoxy(c,++r);
    cout<<"ฒ                                                                              ฒ";
    gotoxy(c,++r);
    cout<<"ฒ                                                                              ฒ";
    gotoxy(c,++r);
    cout<<"ฒ                                                                              ฒ";
    gotoxy(c,++r);
    cout<<"ฒ                                                                              ฒ";
    gotoxy(c,++r);
    cout<<"ฒ                                                                              ฒ";
    gotoxy(c,++r);
    cout<<"ฒ                                                                              ฒ";
    gotoxy(c,++r);
    cout<<"ฒ                                                                              ฒ";
    gotoxy(c,++r);
    cout<<"ฒ                                                                              ฒ";
    gotoxy(c,++r);
    cout<<"ฒฒฒฒฒฒ C & T ฒฒฒฒฒฒฒฒฒฒฒฒฒฒฒฒฒฒฒฒฒฒฒฒฒฒฒฒฒฒ Guided By Dr. Prof. Martin Thost ฒฒฒ";
}
//-------------------------------------
void thankYou()
{
		 int r1=8,c1=15;
		 clrscr();
		 gotoxy(c1,r1);
		 cout<<"ษอออออออออออออออ"<<(char)17<<" Hof University of Applied Sciences "<<(char)16<<"อออป";
		 r1++;
		 gotoxy(c1,r1);
		 cout<<"บ ฐฐฐ C & T ฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐ บ";
		 r1++;
		 gotoxy(c1,r1);
		 cout<<"บ ฐ                                                    ฐ บ";
		 r1++;
		 gotoxy(c1,r1);
		 cout<<"บ ฐ     A Project By Sukanta Maity and Subarna Mitra   ฐ บ";
		 r1++;
		 gotoxy(c1,r1);
		 cout<<"บ ฐÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜฐ บ";
		 r1++;
		 gotoxy(c1,r1);
		 cout<<"บ ฐ                                                    ฐ บ";
		 r1++;
		 gotoxy(c1,r1);
		 cout<<"บ ฐ     Under the guidance of Dr. Prof. Martin Thost   ฐ บ";
		 r1++;
		 gotoxy(c1,r1);
		 cout<<"บ ฐ                                                    ฐ บ";
		 r1++;
		 gotoxy(c1,r1);
		 cout<<"ฬอฐออออออออออออออออออออออออออออออออออออออออออออออออออออฐอน";
		 r1++;
		 gotoxy(c1,r1);
		 cout<<"บ ฐ                   HAVE A NICE DAY                  ฐ บ";
		 r1++;
		 gotoxy(c1,r1);
		 cout<<"บ ฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐ   Thank You   ฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐ บ";
		 r1++;
		 gotoxy(c1,r1);
		 cout<<"ศออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ";
		 delay(1000);
		 getch();
		 exit(0);
}

void splashScreen()
{
		 int t=50;
		 int r1=8,c1=3;
		 clrscr();
		 textmode(C40);
		 gotoxy(c1,r1);
		   cout<<"ษออออออออออออออออออออออออออออออออออป";delay(t);
		 r1++;
		 gotoxy(c1,r1);
		   cout<<"บฐฐฐ C & T ฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐบ";delay(t);
		 r1++;
		 gotoxy(c1,r1);
		   cout<<"บฐ                                ฐบ";delay(t);
		 r1++;
		  gotoxy(c1,r1);
		 cprintf("บฐ            WELCOME TO          ฐบ");delay(t);
		 r1++;
		 gotoxy(c1,r1);
		 cprintf("บฐ  STUDENT MANAGEMNT SYSTEM-2020 ฐบ");delay(t);
		 r1++;
		 gotoxy(c1,r1);
		   cout<<"บฐ                                ฐบ";delay(t);
		 r1++;
		 gotoxy(c1,r1);
		   cout<<"บฐ                                ฐบ";delay(t);
		 r1++;
		 gotoxy(c1,r1);
		   cout<<"บฐ      Under the guidance of     ฐบ";delay(t);
		 r1++;
		 gotoxy(c1,r1);
		   cout<<"บฐ      Dr. Prof. Martin Thost    ฐบ";delay(t);

		 r1++;
		 gotoxy(c1,r1);
		   cout<<"บฐ                                ฐบ";delay(t);
		 r1++;
		 gotoxy(c1,r1);
		   cout<<"ฬฐออออออออออออออออออออออออออออออออฐน";delay(t);
		 r1++;
		 gotoxy(c1,r1);
		   cout<<"บฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐบ";delay(t);
		 r1++;
		 gotoxy(c1,r1);
		   cout<<"ศออออออออออออออออออออออออออออออออออผ";delay(t);
		 //delay(4000);
		 getch();
		 textmode(C80);
}
//---------------------End of Program --------------------


