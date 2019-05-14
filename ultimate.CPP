#include<iostream.h>
#include<ctype.h>
#include<process.h>
#include<conio.h>
#include<stdio.h>
#include<time.h>
#include<string.h>
#include<dos.h>
#include<stdlib.h>
#include<math.h>

const float pi=3.14159265358979323846,e=2.71828182845904523536;
const int s1=23,sz1=23,sz2=80;
char arrrr[23][2000],eneh[6]={137,139,132,142,148,152},cj=3;
int k,m=16,n2=1,kills=0,ammo=0,lives=3;


void main()
{start:
clrscr();
int chh;
cout<<"choose...\nOrganizer:\n 1.Calender\n 2.Calculator\n 3.Timer\n 4.Stopwatch\n\nGames::\nFun:\n 5.L-meter\nLevel I:\n 6.Odd-eve\n 7.Cow bulls\n 8.Hollywood\n 9.5 in a row[advanced tic tac toe]\n 10.Casino\nLevel II:\n 11.Dash\n 12.Snake\n 13.Minesweeper\n 14.Build your maze\n\nSpecial:\n 15.Text effects";
cin>>chh;
chh%=16;
if(chh==1)
{first:
clrscr();
int n=6,year=2012,temp=0;
int z[12]={31,0,31,30,31,30,31,31,30,31,30,31};
cout<<"Enter the year\n\n";
cin>>year;
if(year%4==0) z[1]=29;
else z[1]=28;
for(int k=1000;k<4999;k++)
{if(k%4==1) temp+=2;
else temp++;
if(k==year) break;
}
n=((temp)%7);
cout<<n;
for(int i3=1;i3<13&&i3>0;)
{
clrscr();
cout<<"\n\n\t\t\t\t";
if(i3==1)
{cout<<"January";
}
if(i3==2)
{cout<<"February";
}
if(i3==3)
{cout<<"March";

}
if(i3==4)
{cout<<"April";

}
if(i3==5)
{cout<<"May";

}
if(i3==6)
{cout<<"June";

}
if(i3==7)
{cout<<"July";

}
if(i3==8)
{cout<<"August";

}
if(i3==9)
{cout<<"September";

}
if(i3==10)
{cout<<"October";

}
if(i3==11)
{cout<<"November";

}
if(i3==12)
{cout<<"December";

}
cout<<"     "<<year<<endl<<'\t';
for(int k2=0;k2<52;k2++) cout<<'_';
cout<<"\n";
cout<<"\tMon\tTue\tWed\tThur\tFri\tSat\tSun\n\t";
char cc=196;
for(k2=0;k2<52;k2++) cout<<cc;
cout<<endl;

for(int i=0,i1=1;i<6;i++)
{for(int j=0;j<7;j++,i1++)
{cout<<"\t";
if(i1<=z[i3-1]+n&&i1-n>0)cout<<i1-n;

}
cout<<endl;
}
char c=getch();
if(c=='d') {i3++;
n=(n+z[i3-2])%7;
}
else if(c=='a')
{i3--;
n=(7-(7-n+z[i3-1])%7);
}
else if(c==27) goto first;
else break;
}
}
if(chh==2)
{
clrscr();
char exp[30],ch3=13,func[10],op,choice=13,chy=13,ch1=13;
float num1=0,num2=0,res=0,val=0;
int dec=0,yo,j,temp,n1=0,n2=0,flag=0;
long unsigned int fact(int);

while(ch1==13)
	{chy=choice=13;
	clrscr();
	cout<<"Which calculator you want to use??\n\n1)Arithmetic\n2)Scientific\n3)Permutations and combination..\n\n";
	yo=getch()-48;
	if(yo==1)
		{
		while(chy==13)
			{
			clrscr();
			num1=0;num2=0;res=0;n1=0;n2=0;
			cout<<"These are the instructions of how to use this calculator..";
			cout<<"\n((*))This is a simple arithmetic calculator which works only between two numbers(it can have decimal places)..";
			cout<<"\n((*))The format should be like";
			cout<<"\n\n\tNUM1(operator)NUM2\n\teg 2324.76-657.23\t\tYou absolutely cannot use spaces\n\nFollowing expressions are valid..\n\n\t5.2+2.1\t5-2\t5*2\t5/2\t5%2\t5^2\t5!\n";
			cout<<"Now enter the expression\n";
			gets(exp);
			for(int i=0;exp[i]!='\0';i++)
				{
				if((exp[i]>57||exp[i]<48)&&exp[i]!=46)
					{
					op=exp[i];
					for(int j=0;j<i;j++)
						{
						dec=i;
						if(exp[j]==46)
							{
							dec=j;
							break;
							}
						for(int k=0;k<i;k++) if((exp[k]>57||exp[k]<48)&&exp[k]!=46) op=12;
						temp=exp[j];
						num1=(10*num1)+(temp-48);
						n1=(10*n1)+(temp-48);

						}
					for(++dec,j=0;dec<i;dec++)
						{
						temp=exp[dec];
						num1+=((temp-48)/(pow(10,(++j))));
						}
					dec=0;
					for(j=i+1;exp[j]!='\0';j++)
						{
						if(exp[j]==46)
							{
							dec=j;
							break;
							}
						temp=exp[j];
						num2=(10*num2)+(temp-48);
						n2=(10*n2)+(temp-48);
						}

					for(++dec,j=0;exp[dec]!='\0'&&dec>i;dec++)
						{
						temp=exp[dec];
						num2+=((temp-48)/(pow(10,(++j))));
						}
					}
				}
			flag=0;
			switch(op)
				{
				case '+':res=num1+num2;break;
				case '-':res=num1-num2;break;
				case '*':res=num1*num2;break;
				case '/':{if(num2!=0) res=num1/num2;else flag=1;break;}
				case '%':
						{
						if(n1<num1||n2<num2)
							{
							cout<<"cannot use this operator with non-integral numbers\n";
							flag=1;
							}
						else res=n1%n2;
						break;
						}
				case '^':res=pow(num1,num2);break;
				case '!':
						{
						res=fact(n1);
						if(n1==0) res=1;
						if(n1>12||n1<0)
							{
							cout<<"\ncannot calculate factorial..\n";
							flag=1;
							}
						break;
						}
				default :
						{
						cout<<"\nThis is doesnt seem to make sense\n";
						flag=1;
						}
				}

			if(flag!=1) cout<<"\nThe result is "<<res;
			cout<<"\n\nPress enter to restart arithmetic part of the calculator\n";
			chy=getch();
			}
		}
	if(yo==2)
	while(choice==13)
		{
		val=0;res=0;flag=0;
		clrscr();
		cout<<"Here's the functions and their format on how to use them...\n";
		cout<<"\nTrigonometric functions:\n\tcos()\t\tsin()\t\ttan()\n";
		cout<<"\nInverse functions:\n\tacos()\t\tasin()\t\tatan()\n";
		cout<<"\nOther functions:\n\tnatural log=>ln()\t\tlog base 10=>log()\n\n\tlargest integer=>large()\tabsolute value(modulus)=>mod()\n\n\tAntilog(base 10)=>antilog()\tAnti log(base e)=>antiln()\n\tFactorial=>fact()";
		cout<<"\nNow enter the expression\n\t\t\t\t\t\t\tPI->"<<pi<<endl;
		gets(exp);
		val=0;
		for(int i=0;exp[i]!=40;i++) func[i]=exp[i];
		func[i]='\0';
		for(++i;exp[i]!=41;i++)
			{
			if(exp[i]==46)
				{
				dec=i;
				break;
				}
			temp=exp[i];
			val=(10*val)+(temp-48);

			}

		for(++dec,j=0;exp[dec]!=41&&dec>3;dec++)
			{
			temp=exp[dec];
			val+=((temp-48)/(pow(10,(++j))));
			}
		int flag3=1;
		if((!(strcmp(func,"cos")))||(!(strcmp(func,"sin")))||(!(strcmp(func,"tan"))))
			{
			val*=pi/180;
			if(!(strcmp(func,"cos"))) res=cos(val);
			else if(!(strcmp(func,"sin"))) res=sin(val);
			else if(!(strcmp(func,"tan"))) res=tan(val);
			}
		else if((!(strcmp(func,"acos")))||(!(strcmp(func,"asin")))||(!(strcmp(func,"atan"))))
			{
			if(val>-1&&val<1)
				{
				if(!(strcmp(func,"acos"))) res=acos(val);
				else if(!(strcmp(func,"asin"))) res=asin(val);
				}
			else if(!(strcmp(func,"atan"))) res=atan(val);
			else cout<<"\nDomain error\n";
			flag3=0;
			flag=0;
			}
		else if(!(strcmp(func,"ln"))) res=log(val);
		else if(!(strcmp(func,"log"))) res=log10(val);
		else if(!(strcmp(func,"large"))) res=floor(val);
		else if(!(strcmp(func,"mod"))) res=fabs(val);
		else if(!(strcmp(func,"antilog"))) res=pow(10,val);
		else if(!(strcmp(func,"antiln"))) res=pow(e,val);
		else if(!(strcmp(func,"fact"))) {res=fact(val);if(val==0) res=1;if(val>12||val<0){ cout<<"\nCannot calculate the factorial..\n\n";flag=1;}}
		else {cout<<"Invalid input,check the data...\n";flag=1;}
		if(flag3==0) res*=180/pi;
		if(flag!=1) cout<<"\nThe result is "<<res;
		if(flag3==0) cout<<" degrees\n";
		cout<<"\n\nPress enter to restart the scientific part of the calculator\n";
		choice=getch();
		}

	if(yo==3)
	while(ch3==13)
		{
		clrscr();
		cout<<"\n\n\t";
		cout<<"Enter the expression....";
		cout<<"\n\t\t\t(eg 25P24 or 25C2 etc..)\n";
		long unsigned int num=1,den=1;
		int flag=0,k=0,n=0,r=0,temp;
		gets(exp);
		for(int i=0;exp[i]!='\0';i++)
		if(exp[i]=='P'||exp[i]=='C'||exp[i]=='c'||exp[i]=='p')
			{
			for(int j=0;j<i;j++)
				{
				temp=exp[j]-48;
				n=(n*10)+temp;
				}
			k=i;
			for(j=i+1;exp[j]!='\0';j++)
				{
				temp=exp[j]-48;
				r=(10*r)+temp;
				}
			}
		if(exp[k]=='p') exp[k]='P';
		if(exp[k]=='c') exp[k]='C';
		if(n>=r)
			{
			if(exp[k]=='P')
				{
				num=fact(n);
				if(n==r) den=1;
				else den=fact(n-r);
				}
			else if(exp[k]=='C')
				{
				num=fact(n);
				if(n==r) den=fact(r);
				else den=((fact(n-r))*(fact(r)));
				}
			else flag=1;
			}

		else {cout<<"\nHow do you think you can choose "<<r<<" things from just "<<n<<" things...?\n";flag=1;}
		if(n<=12&&flag==0)
			{
			cout<<"\nanswer\t"<<num<<"/"<<den;
			cout<<"\nFinal Answer :  "<<num/den;
			}
		if(n>12) cout<<"\nSorry bro C++ can only calculate upto 12!... :/\n";
		cout<<"\n\n\nHey wanna calculate again??\n";
		cout<<"Press enter to restart the calculator\n";
		ch3=getch();
		}

	clrscr();
	cout<<"\nPress enter to restart the calculator\n";

	ch1=getch();

	}
}
if(chh==3)
{ clrscr();
int s=0,m=0,h=0,t1=0,t2=0;

cout<<"Enter the number of seconds to countdown...\n";
cin>>s;
if(s>=60) {m=s/60;s%=60;}
if(m>=60) {h=m/60;m%=60;}
h%=24;
while(1>0)
{clrscr();
cout<<"\n\n\n\n\t\t\t\t";
if(m==-1) h--;
if(h!=0) cout<<h<<":";
if(m>9) cout<<m<<':';
else if(m>0) cout<<'0'<<m<<':';
else if(m==0) {cout<<"00:";}
else if(m==-1) {m=59;cout<<m<<":";}
if(s>9) cout<<s;
else if(s>0) cout<<'0'<<s;
else if(s==0) {cout<<"00";if(m>0) s=60;}
s--;
if(s==59&&m>=0) m--;
if(s<0) break;
delay(1000);
}
clrscr;
cout<<"\n\n\n\n\n\n\t\t\t";
cout<<"time's up!!!";
getch();
}
if(chh==4)
{clrscr();
int ch;
int i=0,t1,t2=0,m=0,s=0,h=0,lh[20],lm[20],ls[20];
char c=1;
time_t t;
for(int k=0;k<20;k++) lm[k]=ls[k]=lh[k]=0;
while(1>0)
{clrscr();
if(t2==0) cout<<"\n\n#Press any key to start stopwatch\n\n\n\t\t\t\t";
else cout<<"\n\n\n\n\n\n\n\t\t\t\t";

if(s>59) {m++;s%=60;}
if(m>59) {h++;if(ch<60) m=0;else m=ch/60;}
if(c==13)
{
ls[i]=s+1;
lh[i]=h+1;
lm[i]=m+1;
if(i<20) i++;
else i=0;
}

if(h>0) cout<<h<<":";
if(m>9) cout<<m<<":";
else if(m>=0) cout<<'0'<<m<<":";
if(s>9) cout<<s;
else if(s>=0) cout<<'0'<<s;
if(t2==0) {getch();}
t1=time(&t);
cout<<endl<<endl;
for(int k=0;k<20;k++)
{if(!(lh[k]==0&&lm[i]==0&&ls[i]==0))
{cout<<"Lap "<<k+1<<" - ";
if(h>1) cout<<lh[k]-1<<":";cout<<"0";
if(lm[k]<=10)cout<<lm[k]-1;
else cout<<"\b"<<lm[k]-1;
cout<<":";
if(ls[k]>10) cout<<ls[k]-1;
else cout<<'0'<<ls[k]-1;
}
cout<<endl;
}

c=getch();
t2=time(&t);
if(t2!=t1) ch=t2-t1;
else ch=0;
s+=ch;
if(c==27) break;

}
getch();
}

if(chh==5)
{initialphase:
clrscr();
int yo,i,y;
char c=3,c1,n1[30],n2[30];
cout<<"\t\t\t";
for(i=0;i<7;i++) cout<<c;
cout<<"Love-meter";
for(i=0;i<7;i++) cout<<c;
cout<<"\n\nEnter the names..\n\n";
gets(n1);
cout<<c<<endl;
gets(n2);
for(i=0;n1[i]!='\0';i++) yo+=n1[i];
for(i=0;n2[i]!='\0';i++) yo+=n2[i];
cout<<"\n\n\t\t";
for(i=0,y=11;i<20;i++)
{
if(y>100) y=12;
cout<<y<<'%';
delay(50);
cout<<"\b\b\b";
y+=8;
}
cout<<69+yo%32<<'%';
cout<<"\n\n\nPress enter to continue...";
c1=getch();
if(c1==13) goto initialphase;
}
if(chh==6)
{
char vg=' ';
while(vg==' ')
{
clrscr();
randomize();
char ch=1;
int i=0,i1=' ',i2='.',j1=' ',j2='.',flag=1,sum1=0;
while(ch!=13){
while(flag==1) {i1=random(20)+1; if(i1!=i2&&(i1<7||i1==10||i1==20)) flag=0; i2=i1;};
flag=1;
while(flag==1) {j1=random(20)+1; if(j1!=j2&&(j1<7||j1==10||j1==20)) flag=0; j2=j1;};
flag=1;
cout<<i1<<" <--->  "<<j1<<endl;
if(i1==j1) break;
sum1+=i1;
getch();
}
cout<<"Ooouutt.!!";
getch();
clrscr();
cout<<"\n\n\n\n\nYour final score :"<<sum1;
cout<<"\n\nPlay again? (space for yes)";
vg=getch();

}
}
if(chh==7)
{
clrscr();
int strt,flag=0,entry=1,bulls,total,exit1=0,Ttries,choice=1;

cout<<"\t\t\tWELCOME TO THE GAME OF\n\t\t\t   COWS AND BULLS\n\n";
delay(1000);
cout<<"Enter 1 for rules of the game, 2 to start playing the game..\n";
cin>>choice;
if(choice==1)
{
	cout<<"The rules are as follow:\n\n";
	delay(1000);
	cout<<"1) I am sure you very well know the basics of this game..\n";
	delay(1000);
	cout<<"2) The number of bulls indicate the number of characters which are at the same position from the word which has to be guessed..\n";
	delay(2000);
	cout<<"3) Similiarly number of cows indicate the number of characters common to the original word but at different position\n";
	delay(2000);
	cout<<"4) Following words are inapplicable:\n";
	delay(2000);
	cout<<"    a) Words with repeating letters\n";
	cout<<"    b) Words more than or less than the length of four characters\n";
	delay(1000);
	cout<<"\n\nPS if you enter a non-alphabetical character or an inapplicable word, you'll lose one chance\n\n";
}

cout<<"Choose your level:\n\n";
cout<<"1)newbie a.k.a pure NOOB (20 tries)\n";
cout<<"2)still a noob (15 tries)\n";
cout<<"3)player (10 tries)\n";
cout<<"4)professional a.k.a the PRO (5 tries)\n";
cout<<"5)Legendary mode, rajinikanth style (2 tries)\n\n";
cin>>choice;
if(choice==1) Ttries=20;
else if(choice==2) Ttries=15;
else if(choice==3) Ttries=10;
else if(choice==4) Ttries=5;
else if(choice==5) Ttries=2;

choice=1;
int random2;
char str[4],ent[4];
while(choice==1)
{
	time_t t;
	strt=time(&t);
	srand(strt);
	random2=random(9999)+20;
	const int random1=random2;
	entry=1;
	while(entry<=Ttries)
	{
		clrscr();
		bulls=0,total=0,flag=0;
		cout<<"now guess\n\t\t\tPS: "<<Ttries-entry+1<<" tries left\n\n";
		cin>>ent;
		for(int i12=0;ent[i12]!='\0';i12++)
		{
			ent[i12]=tolower(ent[i12]);
		}
		for(int i1=0;ent[i1]!='\0';i1++)
		{
			int a1=isalpha(ent[i1]);
			if(a1==0) flag=42;
		}
		int a2=strlen(ent);
		if(a2!=4) flag=42;
		if(ent[1]==ent[2]||ent[1]==ent[3]||ent[0]==ent[1]||ent[0]==ent[2]||ent[0]==ent[3]||ent[2]==ent[3]) flag=42;
		if(random1%5==0)
		{
			str[0]='r';
			str[1]='a';
			str[2]='g';
			str[3]='e';
			str[4]='\0';
		}
		if(random1%5==1)
		{
			str[0]='t';
			str[1]='r';
			str[2]='a';
			str[3]='y';
			str[4]='\0';
		}
		if(random1%5==2)
		{
			str[0]='f';
			str[1]='i';
			str[2]='n';
			str[3]='e';
			str[4]='\0';
		}
		if(random1%5==3)
		{
			str[0]='d';
			str[1]='e';
			str[2]='s';
			str[3]='k';
			str[4]='\0';
		}
		if(random1%5==4)
		{
			str[0]='g';
			str[1]='r';
			str[2]='o';
			str[3]='w';
			str[4]='\0';
		}


		if(flag!=42)
		{
			for(int i2=0;i2<4;i2++)
			{
				if(ent[i2]==str[0]||ent[i2]==str[1]||ent[i2]==str[2]||ent[i2]==str[3]) total++;
			}
			for(int i3=0;i3<4;i3++)
			{
				if(ent[i3]==str[i3]) bulls++;
			}
			cout<<"\nBULLS: "<<bulls<<" COWS: "<<total-bulls<<"\n";
			if(bulls==4)
			{
				cout<<"WHOA!! CONGRATS DUDE YOU WON.... :D\n\n";
				delay(1000);
				cout<<"You deserve a prize..\n\n";
				delay(3000);
				cout<<"why not give you an infinite loop as a reward\n\n";
				delay(3000);
				cout<<"hehe, just kidding...\nBut I hope you like this..";
				delay(3000);
				for(int i4=0;i4<300;i4++)
				{
					char ch1=i4;
					cout<<"\tPRIZE\t";
					for(int i7=0;i7<10;i7++) cout<<ch1;
					if(i4%4==0) delay(100);
				}
				getch();
				clrscr();
				cout<<"\n\n\n\nHey wanna play again??\n enter 1 to play again, anything else to exit..";
				char io=getch();
				choice=io-48;
				entry=789;
			}
			else if(total==4) cout<<"boy! you sure are close...";
			else if(total>2) cout<<"nice..";
		}
		else
		{
			cout<<"I told you to follow the rules...\n\n";
			delay(700);
			cout<<"Now take that,.. \nYou wasted one try...\n";
			exit1++;
		}
		if(exit1>=Ttries/2)
		{
			clrscr();
			cout<<"\n\n\nI dont know how to put this but I dont think you are interested in playing the game...";
			delay(4000);
			cout<<"\nSo I think its time to say good-bye..";
			delay(4000);
			exit(0);
		}
		entry++;
		getch();
	}
	if(entry==Ttries+1)
	{
		cout<<"\nsorry to see that you lost :(";
		delay(1000);
		cout<<"\n\nHey wanna try again?\nEnter 1 to play again, anything else to exit\n";
		char cf=getch();
		choice=cf-48;
	}

}
}

if(chh==8)
{
 clrscr();
 char hollywood[15],show[40],str[40];
 int seed,random1,choice=1,choice2;
 cout<<"\t\tWelcome to this word game..";
 cout<<"\nEnter 1 if you want to read the rules, 2 to just play the game...\n";
 cin>>choice2;
 if(choice2==1)
 {
 cout<<"\nSo the rules are as follows:\n";
 cout<<"1)You have to guess the movie, so you will have to enter letters as guesses..\n2)I am being very liberal so if you enter  more than one letters, I'll only accept the first letter and if you enter a letter which is already guessed I won't cut any of your chances...\n\n\tSO good luck with the game ^_^";
 getch();
 }
 while(choice==1)
 {
 time_t t;
 seed=time(&t);
 srand(seed);
 random1=random(9999)+5;
 if(random1%5==0)
      {
       strcpy(str,"ace ventura");
       strcpy(show,"a_e _e__u_a");
      }
 else if(random1%5==1)
      {
       strcpy(str,"despicable me");
       strcpy(show,"_e__i_a__e _e");
      }
 else if(random1%5==2)
      {
       strcpy(str,"the proposal");
       strcpy(show,"__e __o_o_a_");
      }
 else if(random1%5==3)
      {
       strcpy(str,"the gods must be crazy");
       strcpy(show,"__e _o__ _u__ _e __a__");
      }
 else if(random1%5==4)
      {
       strcpy(str,"the curious case of benjamin button");
       strcpy(show,"__e _u_iou_ _a_e o_ _e__a_i_ _u__o_");
      }
 int len=strlen(str),i2=0,flag=1,chances=9;
 strcpy(hollywood,"HOLLYWOOD");
 char ent[4];
 while(chances>=0)
 {

 cout<<"\nGuess a letter:\n";
 cout<<"\n\t\t\t\t";
 if (flag!=1)
      {
       hollywood[i2]=176;
       i2++;
      }
 puts(hollywood);
 cout<<endl;
 puts(show);
 cin>>ent;
 flag=0;
 for(int i=0;i<len;i++)
 {if(ent[0]==str[i])
 {
 show[i]=str[i];
 flag=1;
 }
 }
 if (flag!=1) chances--;
 if(strcmp(show,str)==0)
	      {clrscr();
	       cout<<"You win\n";
	       getch();
	       cout<<"\nEnter 1 to play again, 2 to exit\n";
	       cin>>choice;
	       chances=(-2);
	       }

 clrscr();
 }
 if(chances==(-1))
 {
 cout<<"You lost this time...\n";
 getch();
 cout<<"Don't you want a revenge?!\n";
 getch();
 cout<<"Enter 1 to get your revenge, 2 if you're afraid to lose again\n";
 cin>>choice;
 clrscr();
 }
 }
 }
if(chh==9)
{ clrscr();
char c,arr[s1][s1],copy[s1][s1],p1[30]={'P','l','a','y','e','r',' ','1'},p2[30]={'P','l','a','y','e','r',' ','2'};
int player=0,i,j,a=12,b=12,flag=0;
for(i=0;i<s1;i++) for(j=0;j<s1;j++) copy[i][j]=arr[i][j]=' ';
cout<<"press space to enter names..";
char c2;
c2=getch();
if(c2==' ') {clrscr();gets(p1);gets(p2);}
while(flag==0&&c!=27)
{
clrscr();
arr[a][b]=220;
for(i=0;i<s1;i++){for(j=0;j<s1;j++) cout<<arr[i][j]<<' ';
char c1=219;
cout<<' '<<c1;
if(i==2) cout<<"  5 in a row.. ";
if(i==3) cout<<"   or maybe a cloumn";
if(i==4) cout<<"    or a diagonal.. ";
if(i==9) {cout<<"    go ";
if(player%2==0) cout<<p1; else cout<<p2;
}
if(i==10) {cout<<"    its your turn..";}
cout<<endl;
}
c=getch();

if(c=='w')
{arr[a][b]=copy[a][b];
if(a>0) a--;

}
if(c=='a')
{arr[a][b]=copy[a][b];
if(b>0)b--;
}
if(c=='s')
{arr[a][b]=copy[a][b];
if(a<s1-1)a++;
}
if(c=='d')
{arr[a][b]=copy[a][b];
if(b<s1-1)b++;
}
if(c==13)
{
if(copy[a][b]==' '){
if(player%2==0) copy[a][b]=arr[a][b]='X';
else copy[a][b]=arr[a][b]='O';
player++;
}
}

for(i=0;i<s1;i++) for(j=0;j<s1;j++)
{if(copy[i][j]!=' ')
{
if(i<=s1-5)
{if(copy[i][j]==copy[i+1][j])if(copy[i+1][j]==copy[i+2][j])if(copy[i+2][j]==copy[i+3][j])if(copy[i+3][j]==copy[i+4][j]) flag=1;
}
if(j<=s1-5)
{if(copy[i][j]==copy[i][j+1])if(copy[i][j+1]==copy[i][j+2])if(copy[i][j+2]==copy[i][j+3])if(copy[i][j+3]==copy[i][j+4]) flag=1;
}
if(i+j>=4)
{if(copy[i][j]==copy[i+1][j-1])if(copy[i+1][j-1]==copy[i+2][j-2])if(copy[i+2][j-2]==copy[i+3][j-3]) if(copy[i+3][j-3]==copy[i+4][j-4]) flag=1;}
{
if(copy[i][j]==copy[i+1][j+1])if(copy[i+2][j+2]==copy[i+1][j+1])if(copy[i+2][j+2]==copy[i+3][j+3])if(copy[i+3][j+3]==copy[i+4][j+4])flag=1;}

}
}
}
clrscr();
if(flag==1)
{
cout<<"\n\n\n\n\n\t\t:}   ";
if(player%2==1) cout<<p1<<"  won..\n\t\t "<<p2<<" lost.. :P\n";
else cout<<p2<<"  won..\n\t\t "<<p1<<" lost..:D\n";
}
getch();
}
 if(chh==10)
 {
 clrscr();
 int choice=1;
 float balance,balance1,bet_money=0,hehe=0;
 char ch1=205,bet[10];
 while(choice==1)
 {cout<<"How much do you want to start with??\n";
 cin>>balance;
 if(balance>1000000)
 {cout<<"Woah!! you sure seem to invest a lot of money..\nSince you want to start with such huge balance..\nI'll give you $1000 to start with...\nHAPPY?\n*trollface* :P";
 balance=1000;
 }
 getch();
 balance1=balance;
 while(balance>0)
 {clrscr();
 int flag=0,flag2=0;
 cout<<"KEYWORD\t\t\tFUNCTION\t\t\tIf you win\n";
 for(int i=0;i<80;i++) cout<<ch1;
 cout<<"\neven\t\t||\tan even number\t\t||\t+20%\nodd\t\t||\tan odd number\t\t||\t+20%\nprime\t\t||\ta prime number\t\t||\t+50%\na number(1-9)\t||\tthe number itself\t||\t+100%\n";
 for(i=0;i<80;i++) cout<<ch1;
 cout<<"\nHow much do you want to bet...?\t\t    your current balance: $"<<balance<<endl;
 cin>>bet_money;
 if(bet_money>balance) { cout<<"-.- You tried to bet more than the balance you had...-.- I dont like it..!!";int po=bet_money,mo=balance;po%=mo;bet_money=po;}
 cout<<"\n\nWhat's your bet?? -.-\n";
 gets(bet);
 time_t t;
 int seed=time(&t);
 srand(seed);
 int rnd=random(999)+1;
 rnd=rnd%9;
 rnd++;
 if(!(strcmp(bet,"even")))
 {
 for(i=2;i<10;i+=2)
 if(rnd==i)
 {
 flag=1;
 hehe=1.2;
 }
 }
 else if(!(strcmp(bet,"odd")))
 {for(i=1;i<10;i+=2)
 if(rnd==i)
 {
 flag=1;
 hehe=1.2;
 }
 }
 else if(!(strcmp(bet,"prime")))
 {if(rnd==2||rnd==3||rnd==5||rnd==7)
 {
 flag=1;
 hehe=1.5;
 }
 }
 else if(bet[0]>48&&bet[0]<58)
 {rnd+=48;
 if(bet[0]==rnd)
 {
 flag=1;
 hehe=2;
 }
 rnd-=48;
 }

 else if(bet[0]==48) break;
 if(flag==1)
 {balance+=(bet_money*hehe);
  cout<<"Dude you actually won!!!\nnice";
  getch();
 }
 if(flag==0)
 {balance-=bet_money;
 cout<<"lost.. :/";
 getch();
 }
 }
 clrscr();
 cout<<"\n\n\n\n";
 if(balance<=0) cout<<"Hey you lost...\nno hard feelings but wanna try again..(enter 1 to start over)\n";
 else
 {if(balance1<balance)
 cout<<"nice job dude...\nWanna give another try..(enter 1 to start over)\n";
 else
 cout<<"Wanna give another try? (enter 1 to start over)\n";
 }
 cin>>choice;
 }
 getch();

 }

if(chh==11)
{ clrscr();
char eneb[6]={179,220,221,222,240,239};
int i,n1=0,y1,j,n=1;
void laser(),jump();
k=0;
time_t t;
int rnd=time(&t);
for(i=0;i<23;i++) for(j=0;j<2000;j++) arrrr[i][j]=' ';
for(i=0;i<23;i++) for(j=0;j<2000;j++)
{
if(i<4&&i>=0||i<24&&i>18) arrrr[i][j]=219;
else if(i==17&&(j%40==0))
{
srand(rnd);
rnd=rand();
y1=(40*n)-(rnd%40);
arrrr[i][y1]=eneh[rnd%6];
arrrr[18][y1]=eneb[y1%6];
n++;
}
if(i==22&&(j%100==0))
{for(int i1=19;i1<23;i1++) for(int j1=j;j1>j-6;j1--) arrrr[i1][j1]=' ';
n1++;
}
if(i==14&&j%300==6&&j>6) arrrr[i][j]='#';
if(i==14&&j%500==6&&j>6) arrrr[i][j]=cj;

}

cout<<"\n\n\t\t\tC++ dash...!!\n\n\nOk a short intro...\n\nPress 'd' to move right\nPress space to jump\n& Press Enter to shoot lasers (pew pew :P)\n\n\n";
cout<<"'#'--> bullets \n"<<cj<<"- life\n\nEnemies: \t";
for(int i9=0;i9<6;i9++) cout<<eneh[i9]<<"  ";
cout<<"\n\t\t";
for(i9=5;i9>=0;i9--) cout<<eneb[i9]<<"  ";

cout<<"\n\n(some tips: If you press space or enter for a long time.. it will shoot or jump the same number of times.. which maybe a bit troublesome for you....)\n\nEnjoy\n";


getch();
while(lives>=0)
{clrscr();
arrrr[m][n2+1]=2;
arrrr[m+1][n2+1]=179;
arrrr[m+1][n2]=arrrr[m+2][n2]='/';
arrrr[m+1][n2+2]=arrrr[m+2][n2+2]='\\';
if(k>1900) k=0;
for(i=0;i<23;i++) for(j=k;j<80+k;j++) cout<<arrrr[i][j];
cout<<"Lives ";
for(int i8=0;i8<lives;i8++) cout<<cj;
cout<<"\t   Distance covered "<<k/5<<" metres\t   Kills: "<<kills<<"\tammo:"<<ammo;

arrrr[m][n2+1]=' ';
arrrr[m+1][n2+1]=' ';
arrrr[m+1][n2]=arrrr[m+2][n2]=' ';
arrrr[m+1][n2+2]=arrrr[m+2][n2+2]=' ';

char c=getch();
if(c=='d') {k++;n2++;}
else if(c==' ') jump();
else if(c==13) laser();
else if(c==27) break;
if(arrrr[m+2][n2+2]!=' '||arrrr[m+1][n2+2]!=' ') {lives--;}
else if(arrrr[m+3][n2]==' ') {lives--;jump();}
}
}

if(chh==12)
{clrscr();
const int sz=100;
char bullet(char[50]),letterfall(char[50]),credits(char[50]),ch,c=219,x='*',sp[5]={15,21,145,146,158},frame[6]={201,205,187,186,188,200},arr[23][80],test[23][80];
int portalflag=0,flgg[5]={0,0,0,0,0},length=0,t1,t2,t3,t4,t5=0,sp1=0,flg4=0,score=3800,flag1[sz],flag2[sz],flg3=0,var=-2,i,n=0,j,m=0,a=12,b=40;
int i1,i2,j1,j2,flg=1,temp;
time_t t;
t3=t4=1;
for(i=0;i<23;i++) for(j=0;j<80;j++) arr[i][j]=' ';
letterfall("Welcome to snake");
for(i=0;i<sz;i++) flag1[i]=flag2[i]=0;
arr[a][b]=c;
cout<<"\n\n\n\nSimple tips\n\n\n";
cout<<"Use w/a/s/d to move...\n\nAfter every 5 chances a special 'meal' will appear whose value will decrease with the time...\n\nPress Escape to exit the game anytime...";
while(m!=-1)
{ch=getch();
t3=time(&t);
if(t3!=t4) t5+=t3-t4;
if(t3-t4>60||t3-t4<0) t5=0;
while(flg3==1)
{
randomize();
while(flg==1) {i1=random(20); if(i1!=i2) flg=0; i2=i1;};
flg=1;
while(flg==1) {j1=random(70); if(j1!=j2) flg=0; j2=j1;};
flg=1;
if(arr[i1][j1]==' ') {arr[i1][j1]=x;flg3=0;
if(length%5==0) {arr[i1][j1]=sp[sp1%5];t1=time(&t);sp1++;}}
}
if(temp==0||temp==1||temp==2||temp==3) portalflag=0;
if(score>700&&score<=1500)
{
if(flgg[0]==0)
{bullet("LEVEL UP");
length=0;
for(i=0;i<sz;i++) arr[flag1[i]][flag2[i]]=' ';
flgg[0]=1;

for(i=0;i<23;i++)for(j=0;j<80;j++) arr[i][j]=' ';
}
arr[0][52]=203;
arr[22][25]=202;
for(i=1;i<15;i++) arr[i][52]=186;
for(i=8;i<22;i++) arr[i][25]=186;

}
else if(score>1500&&score<=2300)
{
if(flgg[1]==0)
{bullet("LEVEL UP");
length=0;
for(i=0;i<sz;i++) arr[flag1[i]][flag2[i]]=' ';
flgg[1]=1;

for(i=0;i<23;i++)for(j=0;j<80;j++) arr[i][j]=' ';
}
for(i=1;i<79;i+=3) arr[7][i]=205;
for(i=1;i<79;i+=3) arr[15][i]=205;
}
else if(score>2300&&score<=3000)
{
if(flgg[2]==0)
{bullet("LEVEL UP");
length=0;
for(i=0;i<sz;i++) arr[flag1[i]][flag2[i]]=' ';
flgg[2]=1;
for(i=0;i<23;i++)for(j=0;j<80;j++) arr[i][j]=' ';
}
for(i=1;i<79;i+=3) arr[11][i]=205;
for(i=1;i<22;i+=2) arr[i][38]=186;
arr[11][38]=206;
arr[11][39]=205;
}
else if(score>3000&&score<=3700)
{
if(flgg[3]==0)
{bullet("LEVEL UP");
length=0;
for(i=0;i<sz;i++) arr[flag1[i]][flag2[i]]=' ';
flgg[3]=1;
for(i=0;i<23;i++)for(j=0;j<80;j++) arr[i][j]=' ';
}
for(i=1;i<22;i+=2)for(j=1;j<79;j+=2) if(i+j==78)arr[i][j]='/';
for(i=1;i<22;i+=2)for(j=1;j<79;j+=2) if(i==j) arr[i][j]='\\';
for(i=1;i<16;i+=2)for(j=21;j<38;j+=2) if(i==j-20) arr[i][j]='\\';
for(i=17;i>0;i-=2)for(j=37;j<79;j+=2) if(i+j==54) arr[i][j]='/';

}
else if(score>3700)
{if(flgg[4]==0)
{bullet("LEVEL UP");
length=0;
for(i=0;i<sz;i++) arr[flag1[i]][flag2[i]]=' ';
flgg[4]=1;
portalflag=1;
for(i=0;i<23;i++)for(j=0;j<80;j++) arr[i][j]=' ';
}
for(i=5;i<15;i++)arr[i][10]=arr[i][60]=179;
for(j=20;j<52;j++)arr[2][j]=arr[18][j]=196;
}
if(length==0) arr[12][12]=x;

if(n>=1)
{
for(i=sz-2;i>=0;i--)
{flag1[i+1]=flag1[i];
flag2[i+1]=flag2[i];
}
flag1[0]=a;
flag2[0]=b;
n++;
}
if(n>length)
{arr[flag1[length]][flag2[length]]=' ';
}
else if(length<1) arr[a][b]=' ';
switch(ch)
{case 'w':a--;break;
case 'a':b--;break;
case 's':a++;break;
case 'd':b++;break;
}
if(ch==27){for(i=20;i>0;i++)cout<<'\b';cout<<"Well I guess its time to say good bye...................";break;}
if(a<0) a+=23;
if(b<0) b+=79;
if(b>78) b-=79;
if(a>22) a-=23;
if(score>3700)
{for(i=5;i<15;i++)
{if(a==i)
{if(b==10){getch();if(arr[i][b-1]==c) b+=51;else b+=49;}
if(b==60){if(arr[i][b+1]==c) b-=51;else b-=49;}
}
}
for(i=20;i<52;i++)
{if(b==i)
{if(a==2){if(arr[a-1][i]==c) a+=17;else a+=15;}
if(a==18){if(arr[a-1][i]==c) a-=15;else a-=17;}
}
}
}
if(arr[a][b]==x)
{n=flg3=1;
length++;
var=length;
}
if(arr[a][b]==c||arr[a][b]=='/'||arr[a][b]=='\\') flg4=1;
for(i=0;i<6;i++) if(arr[a][b]==frame[i]) flg4=1;
if(var>0) var--;
for(i=0;i<5;i++)
if(arr[a][b]==sp[i])
{flg3=n=1;length++;var=length-1;
t2=time(&t);
int s=(200-((t2-t1)*20));
if(s>0) score+=s;
}
if(flgg[0]==1) {a=12;b=38;flgg[0]=2;}
if(flgg[1]==1) {a=12;b=38;flgg[1]=2;}
if(flgg[2]==1) {a=12;b=38;flgg[2]=2;}
if(flgg[3]==1) {a=12;b=38;flgg[3]=2;}
if(flgg[4]==1) {a=12;b=38;flgg[4]=2;}

arr[a][b]=2;
for(i=i1-2;i<i1+3;i++) for(j=j1-2;j<j1+3;j++) if(arr[i][j]==arr[a][b]) arr[a][b]=153;
clrscr();
cout<<"WElcome to snake..."<<endl;
for(i=0;i<23;i++) for(j=0;j<80;j++) cout<<arr[i][j];
arr[a][b]=c;
t4=time(&t);


if(flg3==1)
{score+=5;
}
if(flg4==1)
{cout<<"you crashed huh... bad luck... ";
getch();
break;
}
cout<<"Your score "<<score<<"\tTime since playing :  "<<t5;
for(i=length-2;i>0;i--)
{if(var==i) arr[flag1[length-1]][flag2[length-1]]=' ';
}
}
getch();
}
if(chh==13)
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

if(chh==14)
{clrscr();
char ch,c=219,arr[23][80],test[23][80];
int flag,i,j,m=0,a=12,b=40,mn=0,portali[2],portalj[2];
for(i=0;i<2;i++) portali[i]=portalj[i]=-1;
cout<<"\n*use wsad to move the pointer\n*to erase use WSAD\n*dont worry painting in c++ is fun..:P\n*if you want to change the element character you can... just change the char 'c'\n\nTip-to exit the game or after finishing the drawing.. press enter";
cout<<"\n\n\nInstructions...\ni)This is a game where you are a character and you have to either move to the right screen or to any end pont..";
cout<<"\nii)Enter 'e' to place an end point..";
cout<<"\niii) Here you can place a pair of portals.. by pressing 'p'\n\now you may start building the maze...";
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
if(a>22) a--;
if(a<0) a++;
if(b<0) b++;
if(b>78) b--;
char gh=240;
if(arr[a][b]!=gh) arr[a][b]=ch2;
if(ch=='e') arr[a][b]=178;
if(ch=='p') {arr[a][b]=240;if(mn<3){portali[mn]=a;portalj[mn]=b;mn++;}if(mn>2) arr[a][b]=219;}
if(ch2==' '&&arr[a][b]!=gh) arr[a][b]=175;
clrscr();
cout<<endl;
for(i=0;i<23;i++) for(j=0;j<80;j++) cout<<arr[i][j];
if(ch2==' '&&arr[a][b]!=gh) arr[a][b]=' ';
if(ch==13) {for(i=0;i<23;i++) for(j=0;j<80;j++) test[i][j]=arr[i][j];break;}
}
clrscr();
int ff=0;
cout<<"So you made your map huh...\n \tlets see how you play...\n\t\n\tPress enter to play.. ";
char ch7=getch();
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
if(ff==1) arr[a][b]=240;
ff=0;
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
int fflag=0;
for(int k=0;k<2;k++)
{if(portali[k]==-1) fflag=1;
}
if(fflag==0)
{
if(a==portali[0]&&b==portalj[0]) {a=portali[1];b=portalj[1];ff=1;}
else if(a==portali[1]&&b==portalj[1]) {a=portali[0];b=portalj[0];ff=1;}


}
flag=0;
char jh=178;
for(i=0;i<23;i++) for(j=0;j<80;j++) if(test[i][j]==c) {if(test[i][j]!=arr[i][j]) flag=1;}
if(ch==13||flag==1) break;
if(arr[a][b]==jh) {flag=2;break;}

if(b>79) {flag=2;break;}

}
}

if(flag==1) cout<<"Sorry dude, you lost";
if(flag==2) cout<<"You made it....";
getch();
}
if(chh==15)

{ clrscr();
int choice=0;
char y=' ',screensaver(char[50]),letterfall(char[50]),bullet(char[50]),credits(char[50]),ch[40];
while(y==' '){
clrscr();
cout<<"Enter effect:\n\n\n 1.screensaver\n 2.letterfall\n 3.bullet\n 4.credits\n";
cin>>choice;
choice%=5;
cout<<"\n\nEnter text\n";
gets(ch);
if(choice==1) screensaver(ch);
if(choice==2) letterfall(ch);
if(choice==3) bullet(ch);
if(choice==4) credits(ch);
cout<<"\n\nwanna try again? (space->yes)\n";
y=getch();
}
}

clrscr();
cout<<"wanna start over? (Space-yes)";
char chooice=getch();
if(chooice==' ') goto start;
}
long unsigned int fact(int a)
{
long unsigned int c=1;
for(a;a>0;a--) c=c*a;
return c;
}


void laser()
{char ch=175;
int k5=k;
while(k5<80+k&&ammo>0)
{clrscr();
arrrr[m+1][k5+3]=ch;
arrrr[m][n2+1]=2;
arrrr[m+1][n2+1]=179;
arrrr[m+1][n2]=arrrr[m+2][n2]='/';
arrrr[m+1][n2+2]=arrrr[m+2][n2+2]='\\';

for(int i5=0;i5<23;i5++) for(int j5=k;j5<80+k;j5++) cout<<arrrr[i5][j5];
cout<<"Lives ";
for(int i8=0;i8<lives;i8++) cout<<cj;
cout<<"\t   Distance covered "<<k/5<<" metres\t   Kills: "<<kills<<"\tammo:"<<ammo;
arrrr[m][n2+1]=' ';
arrrr[m+1][n2+1]=' ';
arrrr[m+1][n2]=arrrr[m+2][n2]=' ';
arrrr[m+1][n2+2]=arrrr[m+2][n2+2]=' ';
if(arrrr[m+1][k5+4]!=' ') {arrrr[m+1][k5+4]=arrrr[m+2][k5+4]=arrrr[m+1][k5+3]=' ';break;}
arrrr[m+1][k5+3]=' ';
k5++;
delay(25);
}
if(k5<80+k&&k5!=k) kills++;
if(ammo>0) ammo--;
}

void jump()
{int flg=0;
while(m<17){clrscr();
arrrr[m][n2+1]=2;
arrrr[m+1][n2+1]=179;
arrrr[m+1][n2]=arrrr[m+2][n2]='/';
arrrr[m+1][n2+2]=arrrr[m+2][n2+2]='\\';
for(int i6=0;i6<23;i6++) for(int j6=k;j6<80+k;j6++) cout<<arrrr[i6][j6];
cout<<"Lives ";
for(int i8=0;i8<lives;i8++) cout<<cj;
cout<<"\t   Distance covered "<<k/5<<" metres\t   Kills: "<<kills<<"\tammo:"<<ammo;
arrrr[m][n2+1]=' ';
arrrr[m+1][n2+1]=' ';
arrrr[m+1][n2]=arrrr[m+2][n2]=' ';
arrrr[m+1][n2+2]=arrrr[m+2][n2+2]=' ';
if(flg==0) m--;
else m++;
k++;
n2++;
if(m<10) {flg=1;}
delay(50);
for(int i0=0;i0<6;i0++) if(arrrr[m+2][n2+2]==eneh[i0]||arrrr[m+2][n2+1]==eneh[i0]||arrrr[m+2][n2]==eneh[i0]) kills++;
if(arrrr[m+1][n2+2]=='#'||arrrr[m+1][n2+1]=='#'||arrrr[m][n2+1]=='#'||arrrr[m+2][n2+2]=='#') {ammo+=15;}
if(arrrr[m+1][n2+2]==3||arrrr[m+1][n2+1]==3||arrrr[m][n2+1]==3||arrrr[m+2][n2+2]==3) lives++;

}
m--;
}

char letterfall(char str[50])
{clrscr();
int n=20;
for(int k=0;str[k]!='\0';k++)
{for(int i=0;i<10;i++)
{clrscr();
for(i=0;i<10;i++)
{clrscr();
for(int j=i;j>=0;--j) cout<<endl;
for(j=0;j<k+n;j++) cout<<' ';
cout<<str[k];
for(j=10-i;j>0;--j) cout<<endl;
for(int m=0;m<n;m++)cout<<' ';
for(j=0;j<k;j++) cout<<str[j];
if(i==9) {clrscr();for(int l=0;l<11;l++)cout<<endl;for(int m=0;m<n;m++)cout<<' ';for(m=0;m<=k;m++) cout<<str[m];}

delay(50);
}
}
}
return 0;
}

char credits(char c[50])
{clrscr();
for(int i=25;i>0;--i){clrscr();
for(int j=i;j>0;--j) cout<<endl;
for(int l=0;c[l]!='\0';l++);
for(j=(80-l)/2;j>0;--j) cout<<" ";
cout<<c;
delay(100);
}
return 0;
}
char bullet (char str[50])
{ clrscr();
int l=strlen(str);
for(int i=0;i<80-l;i++)
{clrscr();
for(int j=0;j<13;j++) cout<<endl;
for(j=0;j<i;j++) cout<<" ";
puts(str);
delay(60);
}
return 0;
}

char screensaver (char c[50])
{ clrscr();
randomize();
char ch=1;
int i1,i2,j1,j2,flag=1;
while(ch!=27){clrscr();
while(flag==1) {i1=random(20); if(i1!=i2) flag=0; i2=i1;};
flag=1;
while(flag==1) {j1=random(70); if(j1!=j2) flag=0; j2=j1;};
flag=1;
for(i1;i1>0;i1--) cout<<endl;
for(j1;j1>0;j1--) cout<<' ';
cout<<c;
ch=getch();
}
return 0;
}

