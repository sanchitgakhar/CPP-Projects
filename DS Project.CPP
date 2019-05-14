#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<string.h>
#include<process.h>
#include<stdlib.h>
#include<fstream.h>
#include<string.h>
#include<math.h>

void repinsert(long int,long int);



class employee
{       char empname[30];
	char empgroup[30],empsubgroup[30],designation[30];
	long int empid,intercomm;

	public:
		void enterdetails();
		void showdetails();
		void modify();
		char returnempname[30];


		long int returnempid()
		{return empid;
		}
};
class projects{
	long int pid;
	char proname[300],prodiv[30],prodept[30];
	public:
		long int repid[20];
		int nor;
		char projectname[30];

		long int returnpid()
		{ return pid;
		}



		void proenter();
		void reportview();
		void proview();
};
class keywords
{
	long int repid;
	char keyword[10][100];
	public:
		void getrepid(int r)
		{
			repid=r;
		}
		void keyenter();
		int keymatch(char*);
};

class reports
{
long int repid, empid,pid;
	char redept[30],rediv[30],reportid[100],repname[300];
	public:
	keywords kw;

		void enterreports(long int,long int);
		void showreports();
		long int returnrid()
		{ return repid;
		}

};

void textbox(char arr[50])
{ clrscr();
  int l;
  char ch;
  l=strlen(arr);
  ch=220;
  for(int x=0;x<80;x++)    cout<<ch;
  ch=219;  cout<<ch;
  for(x=1;x<79;x++) cout<<" ";
  cout<<ch<<endl<<ch;
  for(x=1;x<40-(l/2);x++) cout<<" ";
  cout<<arr;
  for(x=40+l/2+1;x<80;x++)  cout<<" ";
  cout<<ch;
  for(x=0;x<80;x++) cout<<" ";
  ch=219; cout<<ch;
  ch=220;
  for(x=1;x<79;x++) cout<<ch;
  ch=219; cout<<ch;

}


	void empshowdetails(long int eid)
		{
		employee e;
		ifstream f;
		f.open("emp.dat",ios::in|ios::binary);
		f.read((char*)&e,sizeof(e));
		while(!f.eof())
		{

			if(e.returnempid()==eid)

			{
				e.showdetails();
				getch();
			}
				f.read((char*)&e,sizeof(e));
		}

		f.close();
		}



	void proj_reportshow(long int rep)
		{    reports re;
		ifstream f;

		f.open("report.dat",ios::in|ios::binary);
		f.read((char*)&re,sizeof(re));
		while(!f.eof())
		{

			if(re.returnrid()==rep)
			{
				re.showreports();
				getch();
			}
				f.read((char*)&re,sizeof(re));
		}

		f.close();

		}


void employee::enterdetails()
		{
			cout<<"\nEnter Name of employee:-";
			gets(empname);
			cout<<"Enter the employee id:-";
			cin>>empid;
			cout<<"Enter the Group/Major Decipline:-";
			gets(empgroup);
			cout<<"Enter the Sub-division of the employee:-";
			gets(empsubgroup);
			cout<<"Enter the designation:-";
			gets(designation);
			cout<<"Enter the intercomm number:-";
			cin>>intercomm;
			strcpy(returnempname,empname);
		}


void employee::showdetails()
		{
			cout<<"\n\nName of employee:-";
			cout<<empname;
			cout<<"\nEmployee id:-"<<empid;
			cout<<"\nGroup/Major Decipline:-";
			cout<<empgroup;
			cout<<"\nSub-division of the employee:-";
			cout<<empsubgroup;
			cout<<"\nDesignation:-";
			cout<<designation;
			cout<<"\nIntercomm number "<<intercomm;
		}

		void reports::enterreports(long int rid,long int projid)
		{	cout<<"Enter Name of Report Name:-";
			gets(repname);
			repid=rid;
			cout<<"Enter the Group/Major Decipline of Report:-";
			gets(redept);
			cout<<"Enter the Sub-division of the Report:-";
			gets(rediv);
			cout<<"Enter the Employee id:-";
			cin>>empid;

			pid=projid;

			kw.getrepid(repid);
		       kw.keyenter();



		}
		void reports::showreports()
		{
			cout<<"\nReport Name:-"<<repname;
			cout<<"\nReport Id:-"<<repid;
			cout<<"\nReport Group: "<<redept;
			cout<<"\nReport Division :-"<<rediv;
			cout<<"\nProject id:-"<<pid;
			cout<<"\nReport Generated Employee Id:-"<<empid;
			cout<<"\n\nDo you want to view Details of Employee who generated the report (y/n):-";
			char ch;
			cin>>ch;
			if(ch=='y')
			{
				empshowdetails(empid);

			}

		}


		void keywords::keyenter()
		{	int n=0;

			char ch='y';
			cout<<"Enter the Keywords in the Reports:\n";
			while(n!=10&&ch=='y')
			{
			cout<<"Keyword-"<<n+1<<":\t";
			gets(keyword[n]);
			n++;
			cout<<"More keywords? (y/n):-";
			cin>>ch;
			}
		}

		int keywords::keymatch(char str[100])
		{  	int i;
			for(i=0;i<10;i++)
			{ if(!strcmpi(keyword[i],str))
			  { return 1;
			  }

			}
			return 0;
		}

		void projects::proenter()
		{       int i=0; nor=0;
			char ch='y';
			cout<<"\nEnter Name of Project:-";
			gets(proname);
			strcpy(projectname,proname);
			cout<<"Enter the Project id:-";
			cin>>pid;
			cout<<"Enter the Group/Major Decipline of Project:-";
			gets(prodept);
			cout<<"Enter the Sub-division of the Project:-";
			gets(prodiv);
			while(ch=='y'&&i<20)
			{  cout<<"Enter report id of report"<<i+1<<": ";
			   cin>>repid[i];
			   repinsert(repid[i],pid);
			   i++;   nor++;
			   cout<<"\nDo you want to enter more reports?(y/n):-";
			   cin>>ch;
			}
		}


		void projects::proview()
		{
			cout<<"\nProject Name:-";
			puts(proname);
			cout<<"Project id:-";
			cout<<pid;
			cout<<"\nGroup/Major Decipline of Project:-";
			puts(prodept);
			cout<<"Sub-division of the Project:-";
			puts(prodiv);
			cout<<"No. of reports:-"<<nor;
			cout<<"\n\nDo you want to view any report?(y/n):-";
			char ch='y';
			cin>>ch;
			if(ch=='y')
			reportview();
		}
		void projects::reportview()
		{       long int r;
			char ch='y';
			for(int i=0;i<nor;i++)
			{ cout<<endl<<i+1<<". Report id:- "<<repid[i];
			}
			cout<<"\nEnter the report id you want to view:- ";
			cin>>r;
			 proj_reportshow(r);
			cout<<"\nDo you want to view another report?(y/n):-";
			cin>>ch;
			if(ch=='y')
			{ reportview();
			}

		 }



void empsubscreen();
void reportsubscreen();
void prosubscreen();

void mainscreen()
{       clrscr();
	int choice;
	textbox("Main Menu ");
	cout<<"\n1)Employee Details\n2)Reports\n3)Projects\n4)Exit\n";
	choice=getch();
	switch(choice)
	{ 	case 49: empsubscreen();	break;
		case 50:  reportsubscreen();	break;
		case 51: prosubscreen(); break;
		case 52: exit(0); break;
		default: 	cout<<"Wrong choice\n";
					mainscreen();
	}

}

void empview();
void empinsert();
void empupdate();


void empsubscreen()
{ clrscr();
	int ch;
	textbox("Employee Menu ");
	cout<<"\n1)View Employee Details\n2)Insert New Employee Details\n3)Update Employee Details\n4)Home\n5)Exit\n";
	ch=getch();
	switch(ch)
	{ 	case 49: empview();	break;
		case 50:  empinsert();	break;
		case 51:empupdate();	break;
		case 52: mainscreen();	 break;
		case 53: exit(0);break;
		default: 	cout<<"Wrong choice\n";
					empsubscreen();
	    }
}
void empview()
{	int ch;
	char s[30];
	long int sr;
	employee e;
	int found=0;
	ifstream f;
	clrscr();
	f.open("emp.dat",ios::in|ios::binary);


	cout<<"1)Search by Employee Name\n2)Search by Employee id\n";
	ch=getch();
	if(ch==49)
	{
		cout<<"\nEnter search name:-";
		gets(s);
		f.read((char*)&e,sizeof(e));
	  while(!f.eof())
		{

			if(!strcmpi(e.returnempname,s))
			{
				e.showdetails();
				found=1;
				getch();
			}
			f.read((char*)&e,sizeof(e));
		}


	}
	else if(ch==50)
	{
		cout<<"\nEnter search id:- ";
		cin>>sr;
		f.read((char*)&e,sizeof(e));
		while(!f.eof())
		{

			if(e.returnempid()==sr)
			{
				e.showdetails();
				found=1;
				getch();
			}
			f.read((char*)&e,sizeof(e));
		}

	}
	else
	{	cout<<"wrong choice entered";
		empview();
	}
	if(found==0)
	{ cout<<"\n Not found!";
	  getch();
	}

	f.close();
	empsubscreen();

}
void empinsert()
{  fstream f;
    employee e;
    clrscr();
  char name[30],ch='y';
  f.open("emp.dat",ios::app|ios::binary);
  cout<<"\nInsert new Empolyee Details\n ";

  while(ch=='y')
  {
    e.enterdetails();
    f.write((char*)&e,sizeof(e));
    cout<<"Do you want to enter new Employee Details?(y/n):-";
    cin>>ch;
  }
  f.close();
  empsubscreen();
}



void employee::modify()
{ char neg[30],nesg[30],ned[30];
	long int ninterc;
	clrscr();
	cout<<"Current Details in our Records:";
  showdetails();
  cout<<"\nEnter new details: \n";

			cout<<"Enter the Group/Major Decipline/(enter '-' to retain old data):";
			gets(neg);
			cout<<"Enter the Sub-division of the employee/(enter '-' to retain old data):";
			gets(nesg);
			cout<<"Enter the designation/(enter '-' to retain old data):";
			gets(ned);
			cout<<"Enter the intercomm number/(enter '0' to retain old data):";
			cin>>ninterc;
  if(strcmp(neg,"-")!=0)
  strcpy(empgroup,neg);
  if(strcmp(nesg,"-")!=0)
  strcpy(empsubgroup,nesg);
  if(strcmp(ned,"-")!=0)
  strcpy(designation,ned);
  if(ninterc!=0)
  intercomm=ninterc;
}

void empupdate()
{ clrscr();
  employee s,e;
  fstream fio;
  fio.open("emp.dat",ios::in|ios::out|ios::binary);
  long int r;
  int pos;
  char found='f';
  cout<<"\nEnter Employee-Id whose record is to be modified:-";
  cin>>r;
  while(!fio.eof())
  { pos=fio.tellg();
    fio.read((char*)&s,sizeof(s));
    if(s.returnempid()==r)
    { s.modify();
      fio.seekg(pos);
      fio.write((char*)&s,sizeof(s));
      found='t';
      break;
    }
  }
  if(found=='f')
  cout<<"Record not found\n";
  fio.seekg(0);
  cout<<"Update complete\n";
  fio.close();
  getch();
  empsubscreen();
}

void repsearch();

void reportsubscreen()
{
	reports r;
	clrscr();
	int ch;
	textbox("Report Menu ");
	cout<<"\n1)Search Report by Keyword\n2)Home\n3)Exit\n";
	ch=getch();
	switch(ch)
	{
		case 49: repsearch();	break;
		case 50: mainscreen();	 break;
		case 51: exit(0);break;
		default: 	cout<<"Wrong choice\n";
					reportsubscreen();
	    }
}

void repinsert(long int rid,long int pid)
{
	fstream f;
    reports rep;
    clrscr();
  //	char ch='y';
  f.open("report.dat",ios::app|ios::binary);
  cout<<"\nInsert new Report\n ";

 // while(ch=='y')
 // {
    rep.enterreports(rid,pid);
    f.write((char*)&rep,sizeof(rep));
   // cout<<"Do you want to enter new record?(y/n) ";
   // cin>>ch;
 // }
  f.close();
     //	reportsubscreen();

}

void repsearch()
{       int ch;
	char s[30];
	int found=0;
	clrscr();
	reports r;
	ifstream f;
	f.open("report.dat",ios::in|ios::binary);
	cout<<"Enter search keyword:-";
		gets(s);
		f.read((char*)&r,sizeof(r));
	  while(!f.eof())
		{
			if(r.kw.keymatch(s))
			{
				r.showreports();
				found=1;
				getch();
			}
			f.read((char*)&r,sizeof(r));
		}

		f.close();

		if(found==0)
		{ cout<<"Not Found!";
		 getch();
		}
	  reportsubscreen();
}

void projectinsert();
void projectview();

void prosubscreen()
{
	clrscr();
	textbox("Project Menu");
	projects p;
	int ch;
	cout<<"\n1)Insert Project Details\n2)View Poject\n3)Home\n4)Exit\n";
	ch=getch();
	switch(ch)
	{ 	case 49: projectinsert();	break;
		case 50:  projectview();	break;
		case 51: mainscreen();	 break;
		case 52: exit(0);break;
		default: 	cout<<"Wrong choice\n";
					prosubscreen();
	    }
}

void projectinsert()
{ 	projects p;
	fstream f;
	clrscr();
	f.open("proj.dat",ios::out|ios::app|ios::binary);
	char ch='y';
	while(ch=='y')
	{
	   p.proenter();
	   f.write((char*)&p,sizeof(p));
	   cout<<"Do you want to enter new Project?(y/n):- ";
	   cin>>ch;
	}
	f.close();
	prosubscreen();
}

 void  sel_projectshow(long int projid) ;

void projectview()
{ projects p;
	long int projid;

		fstream f;
		clrscr();
		f.open("proj.dat",ios::in|ios::binary);
		f.read((char*)&p,sizeof(p));
		while(!f.eof())
		{
		  cout<<"\nProject Id:"<<p.returnpid();
		  cout<<"\nProject Name:";
		  puts(p.projectname);
		  cout<<"No.of Reports in the Project:-"<<p.nor;
		  cout<<"\n";
		  f.read((char*)&p,sizeof(p));
		}

		  f.close();
		cout<<"\nEnter the Project Id to view the Details:-";
		cin>>projid;
		sel_projectshow(projid);



}
void  sel_projectshow(long int projid)
{  projects pe;
	clrscr();
		ifstream f;
		f.open("proj.dat",ios::in|ios::binary);
		f.read((char*)&pe,sizeof(pe));
		while(!f.eof())
		{

			if(pe.returnpid()==projid)
			{
				pe.proview();
				getch();
			}
				f.read((char*)&pe,sizeof(pe));
		}

		f.close();
		cout<<"\nDo you want to view more projects?(y/n):-";
		char ch;
		cin>>ch;
		if(ch=='y')
		projectview();
		else
		prosubscreen();


}

void sintxt(char a[])
{
	for(int l=0;a[l]!='\0';l++);
	int y=30-l,i;
	float x;
	while(!kbhit())
	{
		clrscr();
		if(y>0)
		{
		for(i=0;i<y;i++) cout<<endl;
		}
		y--;
		for(int j=0;j<l;j++)
		{x=10*sin((float)(y+j)/2);
		for(i=0;i<x+40;i++) cout<<' ';cout<<a[j]<<endl;
		}
		delay(150);
	}
	clrscr();
	for(int j=0;j<l;j++)
	{
	for(i=0;i<40;i++) cout<<' ';cout<<a[j]<<endl;
	}
	getch();

}

char bullet (char str[50])
{
  char a[5]="CSMRS";
  int l=strlen(str);
  for(int i=0;i<80-l;i++)
  { clrscr();

   for(int x=0;x<5;x++)
	{
	for(int y=0;y<40;y++) cout<<' ';cout<<a[x]<<endl;
	}
	cout<<endl<<endl;
    for(int j=0;j<i/2;j++) cout<<" ";
    puts(str);
    delay(60);
  }
  getch();
return 0;
}

char credits(char c[50])
{	clrscr();
	for(int i=25;i>10;--i)
	{ clrscr();
	  for(int j=i;j>0;--j) cout<<endl;
	  int l=strlen(c);
	  for(j=(80-l)/2;j>0;--j) cout<<" ";
	 cout<<c;
	  delay(100);
	}
	getch();
	return 0;
}


int main()
{
		sintxt("CSMRS");
		bullet("Central Soil and Materials Research Station");
		credits("Projects and Reports Management System");
		mainscreen();

		return 0;
}
