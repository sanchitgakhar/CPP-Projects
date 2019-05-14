#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
const int sz1=23,sz2=80;
void main()
{ clrscr();
char arr[sz1][sz2],copy[sz1][sz2],bomb[sz1][sz2],c,frame[6]={201,205,187,186,188,200},x=178;
time_t t;
int bomi[300],bomj[300],i,j,bombs,flag=0,a,b,n2=0,i3=time(&t);
a=12;b=40;
cout<<"Minesweeper.. ";
cout<<"\n\n\nUse w/a/s/d to move cursor, \nPress Enter like you left click,\nPress m to mark a bomb i.e right click...\n\n\t\tEnjoy";
cout<<"\n\nEnter number of bombs..(1-350)\n";
cin>>bombs;
bombs=bombs%300;
for(i=0;i<sz1;i++) for(j=0;j<sz2;j++)
{
bomb[i][j]=arr[i][j]=copy[i][j]=' ';
bomb[0][j]=arr[0][j]=frame[1];
bomb[i][0]=arr[i][0]=frame[3];
bomb[22][j]=arr[22][j]=frame[1];
bomb[i][78]=arr[i][78]=frame[3];
bomb[0][0]=arr[0][0]=frame[0];
bomb[0][78]=arr[0][78]=frame[2];
bomb[22][0]=arr[22][0]=frame[5];
bomb[22][78]=arr[22][78]=frame[4];
}
while(n2<bombs)
{
srand(i3);
i3=rand();
if(bomb[i3%23][i3%80]==' ') {bomb[i3%23][i3%80]='*';bomi[n2]=i3%23;bomj[n2]=i3%80;}
else n2--;
n2++;
}
for(i=0;i<sz1;i++)for(j=0;j<80;j++)
{int n=0;
if(bomb[i][j]==' ')
{if(bomb[i-1][j+1]=='*') n++;
if(bomb[i-1][j]=='*') n++;
if(bomb[i-1][j-1]=='*') n++;
if(bomb[i+1][j+1]=='*') n++;
if(bomb[i+1][j]=='*') n++;
if(bomb[i+1][j-1]=='*') n++;
if(bomb[i][j+1]=='*') n++;
if(bomb[i][j-1]=='*') n++;
if(n!=0) {bomb[i][j]=n+48;n=0;}
}
}
while(1>0)
{clrscr();
arr[a][b]=254;
cout<<"\t\t\tMinesweeper...\t\n";
for(i=0;i<sz1;i++) for(j=0;j<sz2;j++) cout<<arr[i][j];
c=getch();
if(c=='w')
{arr[a][b]=copy[a][b];
a--;
if(a<1) a++;
}
if(c=='a')
{arr[a][b]=copy[a][b];
b--;
if(b<1) b++;
}
if(c=='s')
{arr[a][b]=copy[a][b];
a++;
if(a>21) a--;
}
if(c=='d')
{arr[a][b]=copy[a][b];
b++;
if(b>77) b--;
}
if(c=='m') copy[a][b]=arr[a][b]=c;
if(c==13)
{if(bomb[a][b]=='*') break;
else if(bomb[a][b]>'0'&&bomb[a][b]<'9') copy[a][b]=arr[a][b]=bomb[a][b];
else if(bomb[a][b]==' ')
{bomb[a][b]=copy[a][b]=arr[a][b]=x;
int i1=0,i2=0;
while(1>0)
{i2=i1;
for(i=0;i<23;i++) for(j=0;j<80;j++)
{if(bomb[i][j]==x)
{if(bomb[i+1][j]==' ') {bomb[i+1][j]=x; i1++;}
if(bomb[i-1][j]==' ') {bomb[i-1][j]=x;i1++;}
if(bomb[i][j+1]==' ') {bomb[i][j+1]=x;i1++;}
if(bomb[i][j-1]==' ') {bomb[i][j-1]=x;i1++;}
}
}
if(i1==i2) break;
}
}
}
int yo=0;
for(i=0;i<sz1;i++)for(j=0;j<sz2;j++) {if(bomb[i][j]==x) copy[i][j]=arr[i][j]=x;if(arr[i][j]=='m')yo++;  }
if(c==27) break;
int flg=0;flag=0;

for(i=0;i<bombs;i++) {if(arr[bomi[i]][bomj[i]]=='m') {flag=1;} else flg=1;}
if(flag>flg&&yo==bombs) break;
}
getch();
clrscr();
if(flag==1) cout<<"YOU WON\n";
else cout<<"BOOOOOOooooOOOOOOOOOoooOOOO00000OOOOM\n";
for(i=0;i<23;i++) for(j=0;j<80;j++) cout<<bomb[i][j];
getch();
}
