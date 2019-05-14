#include<iostream.h>
#include<conio.h>

void main()
{clrscr();
char ch,c=219,arr[23][80],test[23][80];
int flag,i,j,m=0,a=12,b=40;
cout<<"\n\nYo guys ..\nchecking my new game huh...\nI guess i'll tell how to use it..";
getch();
cout<<"\n*use wsad to move the pointer\n*to erase use WSAD\n*dont worry painting in c++ is fun..:P\n*if you want to change the element character you can... just change the char 'c'\n\nTip-to exit the game or after finishing the drawing.. press enter";
cout<<"\n\nNOW PRESS w/a/s/d to start painting...";
getch();
clrscr();
for(i=0;i<23;i++) for(j=0;j<80;j++) arr[i][j]=' ';
arr[a][b]=c;
while(m!=-1)
{ch=getch();
char ch2=c;
switch(ch)
{case 'w':a--;break;
case 'a':b--;break;
case 's':a++;break;
case 'd':b++;break;
case 'W':a--;ch2=' ';break;
case 'A':b--;ch2=' ';break;
case 'S':a++;ch2=' ';break;
case 'D':b++;ch2=' ';break;
}

arr[a][b]=ch2;
if(ch2==' ') arr[a][b]=175;
clrscr();
cout<<endl;
for(i=0;i<23;i++) for(j=0;j<80;j++) cout<<arr[i][j];
if(ch2==' ') arr[a][b]=' ';
if(ch==13) {for(i=0;i<23;i++) for(j=0;j<80;j++) test[i][j]=arr[i][j];break;}
}
clrscr();
cout<<"So you made your map huh...\n \tlets see how you play...\n\t\n\tPress enter to play.. ";  char ch7=getch();
if(ch7==13)
{
a=12,b=0;
while(m!=-1)
{
arr[a][b]=175;
clrscr();
cout<<"\t\t\tSPACE MAZE\n";
for(i=0;i<23;i++) for(j=0;j<80;j++) cout<<arr[i][j];
arr[a][b]=' ';
ch=getch();

switch(ch)
{
case 'w':a--;break;
case 'a':b--;break;
case 's':a++;break;
case 'd':b++;break;
}
if(a>22) a--;
if(a<0) a++;
if(b<0) b++;
if(b>80) b--;
flag=0;
for(i=0;i<23;i++) for(j=0;j<80;j++) if(test[i][j]==c) {if(test[i][j]!=arr[i][j]) flag=1;}
if(ch==13||flag==1) break;
if(b>79) {flag=2;break;}
}
}
if(flag==1) cout<<"Sorry dude, you lost";
if(flag==2) cout<<"You made it....";
getch();
}