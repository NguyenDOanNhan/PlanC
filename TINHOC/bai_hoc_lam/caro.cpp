#include <iostream>
using namespace std;
#include <string.h>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <dos.h>
#include "graphics.h";
 
int M[22][23];
int Col=240, Row=220, I=10, J=11;
int Play=1,cont=1;
char Player1[10],Player2[10];
 
void Win(char name[]);
void Choi();
int Thang(int , int , int );
void XuatVT(int , int , int );
void Chu(int , int , int );
void Khung(int , int , int );
void Khoidau();
void Nen();
void Phien(char st[], int ,int );
void KTDH(void);
 
void main(void)
    { Khoidau();
      KTDH();
      do{  Play=1;Col=240; Row=220; I=10; J=11;
       for(int i=0; i<22; i++)
           for(int j=0; j<23; j++)
         M[i][j]=0;
       cleardevice();
       Nen();
       Choi();
    }while(cont==1);
      closegraph();
    }
 
void Win(char name[])
   {
     settextstyle(1,0,9);
     setcolor(15);
     outtextxy(10,10,name);
     outtextxy(10,100," won");
   }
 
void Choi()
   { char key;
     Khung(Col,Row,1);
     XuatVT(I,J,3);
     char Chuoi[236]="        This is program demo CARO game between two players. Press F2 to new game, F10 to quit game and when you finish a game, press any key to a new game. This program was written by Hoang Truong Manh";
     int l=strlen(Chuoi);
     Phien(Player1,170,15+BLINK);
     do{ do{ settextstyle(2,0,5);
         setcolor(15);
         outtextxy(1,460,Chuoi);
         delay(200);
         setcolor(1);
         outtextxy(1,460,Chuoi);
         char st=Chuoi[0];
         for(int i=0; i<l; i++)
        Chuoi[i]=Chuoi[i+1];
        Chuoi[l]=st;
        }while(!kbhit());
     key=getch();
     if(key==0) key=getch();
     if(key==77)
        { Khung(Col,Row,3);
          XuatVT(I,J,1);
          Col=Col+20; J++;
          if(Col==480) {Col=20; J=0;}
          Khung(Col,Row,1);
          XuatVT(I,J,3);
        }
     if(key==75)
        { Khung(Col,Row,3);
          XuatVT(I,J,1);
          Col=Col-20; J--;
          if(Col==0) {Col=460;J=22;}
          Khung(Col,Row,1);
          XuatVT(I,J,3);
        }
     if(key==80)
        { Khung(Col,Row,3);
          XuatVT(I,J,1);
          Row=Row+20; I++;
          if(Row==460) {Row=20; I=0;}
          Khung(Col,Row,1);
          XuatVT(I,J,3);
        }
     if(key==72)
        { Khung(Col,Row,3);
          XuatVT(I,J,1);
 
          Row=Row-20; I--;
          if(Row==0) {Row=440; I=21;}
          Khung(Col,Row,1);
          XuatVT(I,J,3);
        }
     if(key==13)
         if(M[I][J]==0)
           { Chu(Col,Row,Play);
         if(Play==1)
           { M[I][J]=1;
             if(Thang(I,J,Play)==Play)
            { Win(Player1);getch();
              Play=-1;return;
            }
             Play=-1;
             Phien(Player1,170,5);
             Phien(Player2,270,15+BLINK);
           }
          else
           { M[I][J]=-1;
             if(Thang(I,J,Play)==Play)
            { Win(Player2);getch();
              Play=1;return;
            }
             Play=1;
             Phien(Player2,270,5);
             Phien(Player1,170,15+BLINK);
           }
           }
     if(key==60) break;
     if(key==68) {cont=0;return;}
    }while(key!=68);
    }
 
int Thang(int x, int y, int s)
   {  if(M[x][y-4]!=-s&&M[x][y-3]==s&&M[x][y-2]==s&&M[x][y-1]==s&&M[x][y]==s&&M[x][y+1]!=-s)
     return(s);
      if(M[x][y-3]!=-s&&M[x][y-2]==s&&M[x][y-1]==s&&M[x][y]==s&&M[x][y+1]==s&&M[x][y+2]!=-s)
     return(s);
      if(M[x][y-2]!=-s&&M[x][y-1]==s&&M[x][y]==s&&M[x][y+1]==s&&M[x][y+2]==s&&M[x][y+3]!=-s)
     return(s);
      if(M[x][y-1]!=-s&&M[x][y]==s&&M[x][y+1]==s&&M[x][y+2]==s&&M[x][y+3]==s&&M[x][y+4]!=-s)
     return(s);
 
      if(M[x-4][y]!=-s&&M[x-3][y]==s&&M[x-2][y]==s&&M[x-1][y]==s&&M[x][y]==s&&M[x+1][y]!=-s)
     return(s);
      if(M[x-3][y]!=-s&&M[x-2][y]==s&&M[x-1][y]==s&&M[x][y]==s&&M[x+1][y]==s&&M[x+2][y]!=-s)
     return(s);
      if(M[x-2][y]!=-s&&M[x-1][y]==s&&M[x][y]==s&&M[x+1][y]==s&&M[x+2][y]==s&&M[x+3][y]!=-s)
     return(s);
      if(M[x-1][y]!=-s&&M[x][y]==s&&M[x+1][y]==s&&M[x+2][y]==s&&M[x+3][y]==s&&M[x+4][y]!=-s)
     return(s);
 
      if(M[x-4][y-4]!=-s&&M[x-3][y-3]==s&&M[x-2][y-2]==s&&M[x-1][y-1]==s&&M[x][y]==s&&M[x+1][y+1]!=-s)
     return(s);
      if(M[x-3][y-3]!=-s&&M[x-2][y-2]==s&&M[x-1][y-1]==s&&M[x][y]==s&&M[x+1][y+1]==s&&M[x+2][y+2]!=-s)
     return(s);
      if(M[x-2][y-2]!=-s&&M[x-1][y-1]==s&&M[x][y]==s&&M[x+1][y+1]==s&&M[x+2][y+2]==s&&M[x+3][y+3]!=-s)
     return(s);
      if(M[x-1][y-1]!=-s&&M[x][y]==s&&M[x+1][y+1]==s&&M[x+2][y+2]==s&&M[x+3][y+3]==s&&M[x+4][y+4]!=-s)
     return(s);
 
      if(M[x-4][y+4]!=-s&&M[x-3][y+3]==s&&M[x-2][y+2]==s&&M[x-1][y+1]==s&&M[x][y]==s&&M[x+1][y-1]!=-s)
     return(s);
      if(M[x-3][y+3]!=-s&&M[x-2][y+2]==s&&M[x-1][y+1]==s&&M[x][y]==s&&M[x+1][y-1]==s&&M[x+2][y-2]!=-s)
     return(s);
      if(M[x-2][y+2]!=-s&&M[x-1][y+1]==s&&M[x][y]==s&&M[x+1][y-1]==s&&M[x+2][y-2]==s&&M[x+3][y-3]!=-s)
     return(s);
      if(M[x-1][y+1]!=-s&&M[x][y]==s&&M[x+1][y-1]==s&&M[x+2][y-2]==s&&M[x+3][y-3]==s&&M[x+4][y-4]!=-s)
     return(s);
 
      return(0);
   }
 
void XuatVT(int x, int y, int color)
   { settextstyle(1,0,1);
     setcolor(color);
     char c1[3],c2[3],c3[3];
     itoa(x+1,c1,10);
     itoa(y+1,c2,10);
     outtextxy(580,30,c1);
     outtextxy(580,60,c2);
   }
 
void Chu(int x, int y, int status)
   { settextstyle(1,0,1);
     if(status==1)
       { setcolor(14);
     outtextxy(x-5,y-13,"O");
       }
     if(status==-1)
       { setcolor(5);
     outtextxy(x-5,y-13,"X");
       }
   }
void Khung(int x, int y, int color)
    { setcolor(color);
      line(x-3,y-10,x-7,y-10);
      line(x-7,y-10,x-7,y-3);
      line(x-7,y+3,x-7,y+8);
      line(x-7,y+8,x-3,y+8);
      line(x+3,y+8,x+7,y+8);
      line(x+7,y+8,x+7,y+3);
      line(x+7,y-3,x+7,y-10);
      line(x+7,y-10,x+3,y-10);
    }
 
void Khoidau()
    { window(1,1,80,25);textbackground(0);textcolor(15);clrscr();
      gotoxy(40-5,2);cout<<"CARO GAME";
      window(10,4,26,4);textbackground(1);textcolor(14);clrscr();
      cout<<" Player 1's name ";
      do{ window(14,6,50,6);textbackground(0);clrscr();
      window(14,6,22,6);textbackground(3);textcolor(5);clrscr();
      fflush(stdin);gets(Player1);
    }while(strlen(Player1)>8);
      if(strlen(Player1)==0) strcpy(Player1,"Player 1");
      window(54,4,70,4);textbackground(1);textcolor(14);clrscr();
      cout<<" Player 2's name ";
      do{ window(58,6,79,6);textbackground(0);clrscr();
      window(58,6,66,6);textbackground(3);textcolor(5);clrscr();
      fflush(stdin);gets(Player2);
    }while(strlen(Player2)>8);
      if(strlen(Player2)==0) strcpy(Player2,"Player 2");
      return;
    }
 
void Nen()
    {
      setcolor(1);
      setfillstyle(1,1);
      rectangle(480,1,640,480);
      rectangle(1,460,480,480);
      floodfill(500,200,1);
      floodfill(200,470,1);
      setbkcolor(3);
      setcolor(6);
      for(int i=0; i<24; i++)
      line(1,20*i,480,20*i);
      for(i=0; i<25; i++)
      line(20*i,1,20*i,460);
      settextstyle(1,0,1);
      setcolor(3);
      outtextxy(500,30,"Hang = ");
      outtextxy(500,60,"Cot   = ");
      settextstyle(2,0,5);
      setcolor(15);
      outtextxy(500,150,"Player 1's name");
      outtextxy(500,250,"Player 2's name");
      settextstyle(1,0,3);
      setcolor(5);
      outtextxy(510,170,Player1);
      outtextxy(510,270,Player2);
    }
 
void Phien(char st[], int col,int mau)
    { settextstyle(1,0,3);
      setcolor(mau);
      outtextxy(510,col,st);
    }
 
void KTDH(void)
    {  int L;
       char* grPats = "C:\\borlandc\\BGI";
       do{  int grDR = DETECT;
        int grMD;
        initgraph(&grDR,&grMD,grPats);
        L = graphresult();
        if(L!=grOk)
          { cout<<"\n Loi Khoi tao do hoa: "<<grapherrormsg(L);
        if(L==grFileNotFound) // neu co loi duong dan thi nhap lai
          {  cout<<"\n Cho duong dan toi BGI hoac an <Ctrl-Break> de dung Chuong  trinh\n";
             cout<<"      Duong dan la: ";
             fflush(stdin);
             gets(grPats);
          }
        else exit(0);
          }
      } while(L!=grOk);
       return;
     }
        clrscr();
    textcolor(BLACK);
    cprintf("\n Moi ban chon : ...");
    textbackground(BLUE);
    window(25,21,35,23);
    clrscr();
    textcolor(WHITE);
    cprintf("\n  TIEP TUC");
    textbackground(BLUE);
    window(25,25,35,27);
    clrscr();
    textcolor(WHITE);
    cprintf("\n   THOAT");  textcolor(GREEN);
    showMouse();
    while (1)
    {
        t=clickMouse(&x,&y);
        if (t==1&&x>=25&&x<=35)
        {
            if  ((y>=21)&&(y<=23))
            {       clrscr();
                textbackground(BLACK);
                window(25,21,35,23);
                clrscr();
                textcolor(WHITE);
                cprintf("\n  TIEP TUC");
                delay(120);
                hideMouse();
                textbackground(0);
                window(1,1,80,50);
                clrscr();
                board();
                option();
                goto start;
            }
            else if ((y>=25)&&(y<=27))
            {
                clrscr();
                textbackground(BLACK);
                window(25,25,35,27);
                clrscr();
                textcolor(WHITE);
                cprintf("\n   THOAT");
                delay(120);
                hideMouse();
                exit(0);
            }
        }
    }
 
    exit:
    hideMouse();
    //clrscr();
    textbackground(15);
    window(30,10,50,16);
    clrscr();
    textcolor(BLUE);
    cprintf("\n Thoat khoi TRO CHOI");
    textbackground(BLUE);
    window(35,13,45,13);
    clrscr();
    textcolor(WHITE);
    cprintf("  DONG Y");
    textbackground(BLUE);
    window(35,15,45,15);
    clrscr();
    textcolor(WHITE);
    cprintf("  HUY BO");
    showMouse();
    while (1)
    {
        t=clickMouse(&x,&y);
        if (t==1&&x>=35&&x<=45)
            if  (y==15)
            {
                hideMouse();
                textbackground(0);
                window(1,1,80,50);
                clrscr();
                board();
                option();
                goto start;
            }
            else if (y==13)
            {
                hideMouse();
                exit(0);
            }
    }
 
 
//}while(getch()!=27);
 
 
 
}
 
 
//              VE KHUNG
 
void board()
{
 
    int i,j;
 
    /* CAC KY TU DAC BIET :
 
                197 :Å ; 196 :Ä ; 195 :Ã
 
                194 :Â ; 192 :À ; 191 :¿
 
                180 :´ ; 218 :Ú ; 217 :Ù
 
                193 :Á ; 179 :³   */
 
 
    textcolor(11);
    //              GIOI THIEU VE LUAT CHOI
 
    gotoxy(8,1);
    cprintf("*** DE TAI 5 : CHUONG TRINH DANH CARO GIUA NGUOI VA NGUOI ***");
    gotoxy(23,3);
    cprintf("<--- LOP 051102 - KHOA CNTT --->");
    gotoxy(33,5);
    cprintf("*** (^_^) ***");
    gotoxy(9,7);
    cprintf("--- Nho danh vao giao diem cua cac duong nha _THANK YOU_ ---");
 
 
            /*****          VE KHUNG                *****/
 
    for (i=0;i<n;i++)
        for (j=0;j<n;j++)
        {
            gotoxy(hpos+j,vpos+i);
            if (i==0&&j==0)     cprintf("Ú");
            if (i==0&&j==n-1)   cprintf("¿");
            if (i==n-1&&j==0)       cprintf("À");
            if (i==n-1&&j==n-1)     cprintf("Ù");
            if (i%2==0&&j%2!=0) cprintf("Ä");
            if (i%2!=0&&j%2==0) cprintf("³");
            if (i==n-1&&j%2==0&&j>0&&j<n-1)     cprintf("Á");
            if (i%2==0&&j==n-1&&i>0&&i<n-1)     cprintf("´");
            if (i==0&&j%2==0&&j<n-1&&j>0)       cprintf("Â");
            if (i%2==0&&j==0&&i>0&&i<n-1)       cprintf("Ã");
            if (i>0&&i<n-1&&i%2==0&j>0&&j<n-1&&j%2==0) cprintf("Å");
        }
 
            /*****        TEXT CHAY QUANG CAO           *****/
 
    char str[]={'C','h','a','o',' ','m','u','n','g',' ','c','a','c',' ','b','a','n',
                     ' ','d','e','n',' ','v','o','i',' ','t','r','o',' ','c','h','o','i',' ',
                     'C','A','R','O',NULL};
 
 
    delay(250);
    i=0;
    while (str[i]!=NULL)
    {
    delay(20);
    gotoxy(1+i,50);
    cprintf("%c",str[i]);
    i++;
    }
 
}
 
void option()
{
    textbackground(WHITE);
    window(58,10,72,22);
    clrscr();
 
    textbackground(GREEN);
    window(60,12,70,12);
    clrscr();
    textcolor(12);
    cprintf("LUI 1 NUOC");
 
    textbackground(GREEN);
    window(60,14,70,14);
    clrscr();
    textcolor(12);
    cprintf("LUI 2 NUOC");
 
    textbackground(GREEN);
    window(60,16,70,16);
    clrscr();
    textcolor(12);
    cprintf("  VAN MOI");
 
    textbackground(GREEN);
    window(60,18,70,18);
    clrscr();
    textcolor(12);
    cprintf("    MENU");
 
    textbackground(GREEN);
    window(60,20,70,20);
    clrscr();
    textcolor(12);
    cprintf("   THOAT");
 
    textbackground(WHITE);
    window(50,30,76,45);
    clrscr();
    textcolor(BLUE);
    gotoxy(6,2);
    cprintf("*** BAN PHIM ***");
    gotoxy(2,4);
    cprintf("- BACKSPACE : LUI 1 NUOC");
    gotoxy(2,6);
    cprintf("- TAB       : LUI 2 NUOC");
    gotoxy(2,8);
    cprintf("- ESC       : THOAT");
    textcolor(BLUE+128);
    gotoxy(2,10);
    cprintf("* DUNG AN PHIM HAY NHAP *");
    gotoxy(2,11);
    cprintf("*   CHUOT KHI CHUA TOI  *");
    gotoxy(2,12);
    cprintf("*    LUOT DIEU KHIEN    *");
    gotoxy(2,14);
    cprintf("- dac biet la ENTER va  -");
    gotoxy(2,15);
    cprintf("- cac nut o tren        -");
    delay(1500);
    textcolor(BLUE);
    gotoxy(2,10);
    cprintf("* DUNG AN PHIM HAY NHAP *");
    gotoxy(2,11);
    cprintf("*   CHUOT KHI CHUA TOI  *");
    gotoxy(2,12);
    cprintf("*    LUOT DIEU KHIEN    *");
    gotoxy(2,14);
    cprintf("- dac biet la ENTER va  -");
    gotoxy(2,15);
   cprintf("- cac nut o tren        -");
 
 
    textbackground(0);
    window(1,1,80,50);
}
 
void time()
{
 
    struct time t;
 
    textbackground(0);
    window(55,18,75,18);
    clrscr();
    textcolor(11);
    gettime(&t);
    clrscr();
    textcolor(11);
    textbackground(0);
    window(1,1,80,50);
}
 
            /*****      MENU TUY CHON CHINH       *****/
 
void menu()
{
    menu:
    int i,x,y,t;
    char s[50];
    textbackground(0);
    window(1,1,80,50);
    clrscr();
    textbackground(15);
    printf("\n                   _______     ________     ________     ________\n");
    printf("                  / _____/\\   / ____  /\\   / ____  /\\   / ____  /\\\n");
    printf("                 / /\\____\\/  / /\\__/ / /  / /___/ / /  / /\\__/ / /\n");
    printf("                / / /       / /_/_/ / /  / _   __/ /  / / / / / /\n");
    printf("               / /_/__     / ____  / /  / / \\ \\__\\/  / /_/_/ / /\n");
    printf("              /______/\\   /_/\\__/_/ /  /_/ / \\_\\    /_______/ /\n");
    printf("              \\______\\/   \\_\\/  \\_\\/   \\_\\/   \\_\\   \\_______\\/\n");
    window(20,15,60,32);
    clrscr();
    sprintf(s,"\n Chao mung cac ban den voi tro choi CARO");
    textcolor(BLUE);
    delay(300);
    i=0;
    while (s[i]!=NULL)
    {
        delay(22);
        gotoxy(1+i,50);
        cprintf("%c",s[i]);
        i++;
    }
    textbackground(9);
    window(30,20,50,22);
    clrscr();
    textcolor(12);
    cprintf("\n    Bat dau choi");
    textbackground(9);
    window(30,24,50,26);
    clrscr();
    textcolor(12);
    cprintf("\n    Xem luat choi");
    textbackground(9);
    window(30,28,50,30);
    clrscr();
    textcolor(12);
    cprintf("\n        Thoat");
    showMouse();
    while (1)
    {
        t=clickMouse(&x,&y);
        if (t==1&&x>=30&&x<=50)
            if  ((y>=20)&&(y<=22))
            {
                clrscr();
                textbackground(BLACK);
                window(30,20,50,22);
                clrscr();
                textcolor(WHITE);
                cprintf("\n    Bat dau choi");
                delay(120);
                hideMouse();
                textbackground(0);
                window(1,1,80,50);
                clrscr();
                board();
                option();
                gotoxy(hpos,vpos);
                textcolor(11);
                break;  //  goto start;
            }
            else if ((y>=28)&&(y<=30))
            {
                clrscr();
                textbackground(BLACK);
                window(30,28,50,30);
                clrscr();
                textcolor(WHITE);
                cprintf("\n        Thoat");
                delay(120);
                hideMouse();
                exit(0);
            }
            else if ((y>=24)&&(y<=26))
            {
                clrscr();
                textbackground(BLACK);
                window(30,24,50,26);
                clrscr();
                textcolor(WHITE);
                cprintf("\n    Xem luat choi");
                delay(120);
                hideMouse();
                textbackground(0);
                window(1,1,80,50);
                clrscr();
                intro();
                goto menu;
            }
 
        showMouse();
    }
 
}
 
            /*****      GIOI THIEU LUAT CHOI            *****/
 
void intro()
{
    int x,y,i=0,t;
    char s[50];
    textbackground(0);
    window(1,1,80,50);
    clrscr();
    textbackground(WHITE);
    window(10,10,70,22);
    clrscr();
    textcolor(BLUE);
    gotoxy(1,2);    cprintf("     ***  Luat choi co CARO (GOMOKU) rat don gian ***");
    gotoxy(1,4);    cprintf(" - Tran dau dien ra giua 2 quan co : X va O.");
    gotoxy(1,6);    cprintf(" - Ben chien thang la ben di duoc 5 quan co lien tiep theo   hang ngang, doc, hay cheo ma khong bi doi phuong chan truoc 2 dau.");
    sprintf(s,"* Danh lien tiep 6 quan co tro len khong tinh thang *");
 
    while (s[i]!=NULL)
    {
        delay(25);
        gotoxy(5+i,10);
        cprintf("%c",s[i]);
        i++;
    }
    delay(200);
    gotoxy(5,10);
    textcolor(BLUE+128);
    cprintf(s);
    textbackground(GREEN);
    window(20,21,30,21);
    clrscr();
    textcolor(RED);
    cprintf("    Choi");
    textbackground(GREEN);
    window(35,21,45,21);
    clrscr();
    textcolor(RED);
    cprintf("    Menu");
    textbackground(GREEN);
    window(50,21,60,21);
    clrscr();
    textcolor(RED);
    cprintf("   Thoat");
    showMouse();
    while (1)
    {
        t=clickMouse(&x,&y);
        if (t==1&&y==21)
            if  (x>=20&&x<=30)
            {
                hideMouse();
                textbackground(0);
                window(1,1,80,50);
                clrscr();
                board();
                option();
                control();  //  goto start;
            }
            else if (x>=35&&x<=45)
            {
                hideMouse();
                break;
            }
            else if (x>=50&&x<=60)
            {
                hideMouse();
                exit(0);
            }
 
 
        showMouse();
    }
 
 
 
 
}
 
void setMouse()                 //  KHOI DONG MOUSE
{
    union REGS reg;
    reg.x.ax=0x0000;
    int86(0x33,&reg,&reg);
}
 
void showMouse()                //  HIEN MOUSE
{
    union REGS reg;
    reg.x.ax=0x0001;
    int86(0x33,&reg,&reg);
}
 
void hideMouse()                //  AN MOUSE
{
    union REGS reg;
    reg.x.ax=0x0002;
    int86(0x33,&reg,&reg);
}
 
int clickMouse(int *x,int *y)   // NHAN MOUSE
{
    union REGS reg;
    unsigned i;
    reg.x.ax=0x05;
    reg.x.bx=0;
    int86(0x33,&reg,&reg);
    *x=reg.x.cx/8+1;
    *y=reg.x.dx/8+1;
    i=reg.x.bx&1;
    return i;
}
 
void reset(int a[20][20],int size)  //  KHOI TAO MA TRAN KIEM TRA
{
    int i,j;
    for (i=0;i<size;i++)
        for (j=0;j<size;j++)
            a[i][j]=2;
}
 
            /*****      KIEM TRA THANG THUA     *****/
 
int check(int a[20][20],int n,int x,int y)
{
    int i,j,k1=0,k2=0,k3=0,k4=0;
 
    i=j=0;
    while (a[x][y+i]==n)    i++;        //  KIEM TRA HANG DOC
    while (a[x][y-j]==n)    j++;
    if (a[x][y+i]==2 || a[x][y-j]==2)   //  5 QUAN CO BI CHAN 2 DAU KHONG AN
        k1=i+j-1;
 
 
    i=j=0;
    while (a[x+i][y]==n) i++;     //    KIEM TRA HANG NGANG
    while (a[x-j][y]==n)    j++;
    if (a[x+i][y]==2 || a[x-j][y]==2)
        k2=i+j-1;
 
 
    i=j=0;
    while (a[x+i][y+i]==n)  i++;    //  KIEM TRA DUONG "\"
    while   (a[x-j][y-j]==n)    j++;
    if (a[x+i][y+i]==2 || a[x-j][y-j]==2)
        k3=i+j-1;
 
 
    i=j=0;
    while (a[x+i][y-i]==n)  i++;    //  KIEM TRA DUONG "/"
    while   (a[x-j][y+j]==n)    j++;
    if (a[x+i][y-i]==2 || a[x-j][y+j]==2)
        k4=i+j-1;
 
 
    gotoxy(1,46);
    textcolor(11);
    cprintf("Doc:%d - Ngang%d - \"\\\"%d - \"/\"%d",k1,k2,k3,k4);
 
    if (k1==5||k2==5||k3==5||k4==5) return n;
 
    return -1;
}
 
 
void pos(int &x1,int &y1)   //DOI TOA DO THUC (X,Y) SANG TOA DO MA TRAN (X1,Y1)
{
    x1=(x1-hpos)/2;
    y1=(y1-vpos)/2;
}
 
void whereXY(int &x,int &y) //  TIM TOA DO (X,Y)
{
    x=wherex();
    y=wherey();
}
