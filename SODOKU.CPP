#include<iostream.h>
#include<conio.h>

void main()
{clrscr();      //19,54
int i,row=0,flag=0,flag2=0,column=0,yo=223,chances=0;
char arr[9][9]={{' ',' ',' '},{' ',' ',' '},{' ',' ',' '},{' ',' ',' '},{' ',' ',' '},{' ',' ',' '},{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}};
char ch=219;
while(chances<9)
{clrscr();
flag2=0;
cout<<"\n  "<<arr[0][0]<<"  "<<ch<<"  "<<arr[0][1]<<"  "<<ch<<"  "<<arr[0][2]<<"  "<<arr[0][3]<<"  "<<arr[0][4]<<"  "<<arr[0][5]<<"  "<<arr[0][6]<<"  "<<arr[0][7]<<"  "<<arr[0][8]<<"  "<<endl;
for(i=0;i<18;i++)
{ch=yo;
cout<<ch;
}
ch=219;
cout<<"\n  "<<arr[1][0]<<"  "<<ch<<"  "<<arr[1][1]<<"  "<<ch<<"  "<<arr[1][2]<<"  "<<arr[1][3]<<"  "<<arr[1][4]<<"  "<<arr[1][5]<<"  "<<arr[1][6]<<"  "<<arr[1][7]<<"  "<<arr[1][8]<<"  "<<endl;
for(i=0;i<18;i++)
{ch=yo;
cout<<ch;
}
ch=219;
cout<<"\n  "<<arr[2][0]<<"  "<<ch<<"  "<<arr[2][1]<<"  "<<ch<<"  "<<arr[2][2]<<"  "<<arr[2][3]<<"  "<<arr[2][4]<<"  "<<arr[2][5]<<"  "<<arr[2][6]<<"  "<<arr[2][7]<<"  "<<arr[2][8]<<"  "<<endl;

if(chances%2==0)
{while(flag2!=1)
{cout<<"\nPlayer1:\nEnter row number..\n";
cin>>row;
cout<<"\nEnter column number..\n";
cin>>column;
if(arr[row-1][column-1]=='X'||arr[row-1][column-1]=='O'||row>3||column>3) cout<<"re-enter";
else
{arr[row-1][column-1]='X';
flag2=1;
}
}
}
}
getch();
}
