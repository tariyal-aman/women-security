#include<iostream>
#include<fstream>
#include<ctime>
#include<string.h>
using namespace::std;
int tt(char t)
{
	if(t=='0')
	return 0;
	else if(t=='1')
	return 1;
	else if(t=='2')
	return 2;
	else if(t=='3')
	return 3;
	else if(t=='4')
	return 4;
	else if(t=='5')
	return 5;
	else if(t=='6')
	return 6;
	else if(t=='7')
	return 7;
	else if(t=='8')
	return 8;
	else if(t=='9')
	return 9;
}

void state()
{
	fstream s;
	s.open("states.txt",ios::in|ios::out);
	char a;
	while(!s.eof())
	{
		s.get(a);
		cout<<a;
	}
	
}
int dist(int t)
{
	fstream s;
	s.open("dist.txt",ios::in|ios::out);
	int a,b,i,j;
	char c,cr[100];
	//cout<<"hi";
	while(!s.eof())
	{
//		cout<<"hi";
		s>>a>>b;
		for(i=0;i<b;++i)
		{
			s>>cr;
			if(a==t)
			{
					cout<<cr<<"\n";
			}
			
		}
		if(a==t)
		break;
	}
	int dis;
	int p=101,q=501;
	//while(p==101)
	
	cin>>dis;
	
	return dis;
}
void filte()
{
	fstream s;
	s.open("time.txt",ios::in|ios::out);
	char r;
	s>>r;
	if(s.eof())
	{
		int i,dd,mm;
		time_t now=time(0);
	tm*ltm=localtime(&now);
	fstream z;
	z.open("time.txt",ios::in|ios::out);
		int ii=ltm->tm_sec,jj=ltm->tm_min,kk=ltm->tm_hour,ll=1900+ltm->tm_year,pp=1+ltm->tm_mon,ddd=ltm->tm_mday;
		z<<ddd<<"\n"<<pp<<"\n"<<ll<<"\n";

	}
	else
	{
	int a,b,c;
	fstream x;
	x.open("time.txt",ios::in|ios::out);
	x>>a>>b>>c;
	int fl=101;
	int i,dd,mm;
		time_t now=time(0);
	tm*ltm=localtime(&now);
	int ii=ltm->tm_sec,jj=ltm->tm_min,kk=ltm->tm_hour,ll=1900+ltm->tm_year,pp=1+ltm->tm_mon,ddd=ltm->tm_mday;
	if(ll>c)
	fl=501;
	if(ll==c)
	if(pp>b)
	fl=501;
	if(pp==b)
	if(ddd>a)
	fl=501;
	if(fl==501)
	{
		fstream p;
		p.open("prob.txt",ios::in|ios::out|ios::trunc);
		p<<" ";
		fstream z;
		z.open("time.txt",ios::in|ios::out|ios::trunc);
		z<<ddd<<"\n"<<pp<<"\n"<<ll<<"\n";
		
	}
	
		
	}
}

void com(char user[100])
{
	system("cls");
	filte();
	fstream sd;
	int ad=0;
	sd.open("ban.txt",ios::in|ios::out);
	char nn[100];
	while(!sd.eof())
	{
		sd>>nn;
		if(sd.eof())
		break;
		if(strcmp(nn,user)==0)
		{
			++ad;
		}
	}
//	cout<<ad;
	if(ad<2)
	{
	
	cout<<"\tIF U KNOW THE NAME OF VICTIM THEN PRESS 1 OTHERWISE 2\n\t";
	int t;
	cin>>t;
	char name[100];
	cin.ignore();
	if(t==1)
	{
		cout<<"\tENTER NAME\n\t";
		 name[100];
			gets(name);
	}
	else 
	{
	name[0]='N';
	name[1]='.';
	name[2]='A';	
	}
	
		state();
	cout<<"\tENTER STATE \n\t";
	int stat,dis;
	cin>>stat;
	cout<<"\tENTER DISTRICT \n\t";
	dis=dist(stat);
	char area[100];
	cout<<"\tENTER ADDRERSS \n\t";
	cin.ignore();
	gets(area);
	char local[100];
	cout<<"\tENTER LOCALITY OR NEAR BY AREA\n\t";
	gets(local);	
	cout<<"\tENTER A BRIEF DESCRIPTION ABOUT THE PROBLEM SUFFERED BY VICTIM\n\t";
	char prob[100];
	gets(prob);
	//cout<<"NAME  - "<<name<<"\nSTATE -  "<<stat<<"\nDISTRICT -  "<<dis<<"\nAREA -  "<<area<<"\nLOCALITY -  "<<local<<"\nPROBLEM -  "<<prob;
	fstream s;
	s.open("prono.txt",ios::in|ios::out|ios::app);
	int probno;
	s>>probno;
	//cout<<probno;
	s.close();
	fstream z,z1;
	z.open("prob.txt",ios::in|ios::out|ios::app);
	z<<user<<"\n"<<probno<<"\n"<<name<<"\n"<<stat<<"\n"<<dis<<"\n"<<area<<"\n"<<local<<"\n"<<prob<<"\n";
		z1.open("database.txt",ios::in|ios::out|ios::app);
			z1<<user<<"\n"<<probno<<"\n"<<name<<"\n"<<stat<<"\n"<<dis<<"\n"<<area<<"\n"<<local<<"\n"<<prob<<"\n";
	fstream x;
	cout<<"\t\t\tCOMPLAIN NUMBER OF THIS PROBLEM IS - "<<probno<<"\n\t\t\tPLEASE NOTE IT DOWN,IT WILL HELP YOU IN FUTURE\n\t\tPRESS 1 IF YOU HAVE NOTED IT\n\t\t\t";
	int tyty;
	cin>>tyty;
	++probno;
	x.open("prono.txt",ios::in|ios::out);
	x<<probno;
}
else
cout<<"\t\tSORRY YOUR LOGIN ID HAS BEEN BLOCKED DUE TO IRREVELANT ACCESS\n\t\t\t";
}
void ngo()
{
	fstream s;
	s.open("ngo.txt",ios::in|ios::out);
	char a;
	while(!s.eof())
	{
		s.get(a);
		cout<<a;
	}
	
}
void log()
{
	system("cls");
		cout<<"\t\t\t\tWELCOME TO LMHY(LET ME HELP YOU)\n\t\t\tENTER YOUR USERNAME\n\t\t\t";
	char password[100];
	cin.ignore();
	int aa,bb;
	
	
	char z;
	int pp=101,as,ad,af,ag;

		char user[100],ar[100];
			int b=501,a=101,i,j;
			long long int aadhar,mobile;
			char passw[100];
			int state,dist;
			char az[100];
	while(a==101)
	{
		b=101;
		gets(az);
		for(i=0;ar[i]!='\0';++i)
		{
			if(az[i]==' ')
			{
				puts("\t\t\tYOU HAVE ENTERED AN INVALID USERNAME i.e. IT DO NOT COSISIT OF BLANK SPACES\n\t\t\t");
				b=501;
				break;
			}
	}
	if(b==101)
	{
	
	fstream s;
	s.open("login.txt",ios::in|ios::out);
	int q;
	
	while(!s.eof())
{
	s.get(z);
	s.get(z);
	while(z!='\n')
	{	
		s.get(z);
	}
	s.get(z);
	while(z!='\n')
	{
		s.get(z);
	}
	s.get(z);
		while(z!='\n')
			{
		s.get(z);
		
			}
	
	s>>aadhar>>mobile>>state>>dist;

	s.get(z);
	s.get(z);
	while(z!='\n')
	{	
	//	cout<<z;
		s.get(z);
	}
	s.get(z);
	while(z!='\n')
	{
	//	cout<<z;
		s.get(z);
	}	
	s>>user>>passw;
	if(strcmp(user,az)==0)
	{
		b=501;
		break;
	}

}
	if(b==501)
	a=501;
	else
	cout<<"\t\t\tInvalid usename\n\t\t\t";
}

}
char userr[100];
strcpy(userr,user);
a=101;
cout<<"\t\t\tENTER YOUR PASSWORD\n\t\t\t";
	while(a==101)
	{
		b=101;
		gets(az);
		for(i=0;ar[i]!='\0';++i)
		{
			if(az[i]==' ')
			{
				puts("\t\t\t\tYOU HAVE ENTERED AN INVALID PASSWORD i.e. IT DO NOT COSISIT OF BLANK SPACES\n");
				b=501;
				break;
			}
			else if(az[i]>='0'&&az[i]<='9')
			{
			}
			else
			{
				puts("\t\t\t\tYOU HAVE ENTERED AN INVALID password\n");
				b=501;
				break;
			}
	}
	if(b==101)
	{
	
	fstream s;
	s.open("login.txt",ios::in|ios::out);
	int q;
	
	while(!s.eof())
{
//	char name[100]={' '},fname[100]={' '},mname[100]={' '},add[100]={' '},dob[100]={' '};
	s.get(z);
	s.get(z);
	while(z!='\n')
	{	
	//	name[q]=z;
		s.get(z);
	//cout<<z;	
	}
	s.get(z);
	while(z!='\n')
	{
	//	fname[q]=z;
		s.get(z);
		//cout<<z;
	}
	s.get(z);
		while(z!='\n')
			{
	//	mname[q]=z;
		s.get(z);
		//cout<<z;
			}
	
	s>>aadhar>>mobile>>state>>dist;
	//cout<<aadhar<<" "<<state;
	s.get(z);
	s.get(z);
	//cout<<z;
	while(z!='\n')
	{	
	//	cout<<z;
		s.get(z);
	}
	s.get(z);
	while(z!='\n')
	{
	//	cout<<z;
		s.get(z);
	}	
	s>>user>>passw;
	if(strcmp(passw,az)==0)
	{
		if(strcmp(user,userr)==0)
		{
			b=501;
		break;
		}
		
	}
	//cout<<user;

}
	if(b==501)
	a=501;
	else
	cout<<"\t\t\tWRONG PASSWORD\n\t\t\t";
}

}
system("cls");
cout<<"\t\t\t\t\t\tHELLO "<<user;
void abc(char ab[100]);
abc(user);
int ty=2;
while(ty==2)
{
	system("cls");
	puts("\n\t\t1.log out\n\t\t2.go back to main menu\n");
	cout<<"\t\t";
	cin>>ty;
	if(ty==2)
	abc(user);
}
	
}
void comme()
{
	system("cls");
puts("\t\tENTER YOUR CHOICE\n\t\t1.DROP A REVIEW\n\t\t2.CHECK THE REVIEWS\n\t\t");
int a;
cout<<"\t\t";
cin>>a;
cin.ignore();
if(a==1)
{
	system("cls");
	char msg[10000];
	puts("\t\tENTER YOUR MESSAGE\n\t\t");
	cout<<"\t\t";
	gets(msg);
	fstream s;
	s.open("chat.txt",ios::in|ios::out|ios::app);
	s<<"USER - "<<msg<<"\n\n";
	
	
}
else if(a==2)
{
	system("cls");
fstream p;
p.open("chat.txt",ios::in|ios::out);
puts("\t\tCOMMENT BOX");
char c;
while(!p.eof())
{
	p.get(c);
	cout<<c;
}	
}	
}
void acco()
{
	system("cls");
	cout<<"\t\tENTER YOUR CHOICE\n\t\t1.COMMENT SECTION(YOU CAN SHARE YOUR REVIEVS HERE)\n\t\t2.COMPLAINS ON TAKING ACTION\n\t\t";
	int ya;
	cin>>ya;
	if(ya==2)
	{
	system("cls");
	long long int com,com1;
	puts("\t\tENTER YOUR COMPLAIN NUMBER");
	cout<<"\t\t";
	cin>>com;
	com1=com;
	//cout<<com1<<"\n";
	fstream s;
	s.open("database.txt",ios::in|ios::out);
	char ar[100],a,br[00];
	int  c,p=501,d;
	long long int t;
	while(!s.eof())
	{
		s>>ar>>t>>br>>c>>d;
			if(s.eof())	
			break;
		s.get(a);
		s.get(a);
		while(a!='\n')
		{
			s.get(a);
		}
		
		s.get(a);
		while(a!='\n')
		{
			s.get(a);
		}
		
		s.get(a);
		while(a!='\n')
		{
			s.get(a);
		}
		if(t==com1)
		{
			//cout<<"yes";
			p=101;
			break;
		}
		//cout<<t<<" "<<com1<<"\n";
	}
	if(p==101)
	{
		puts("\t\t\tACTION TAKED OR NOT\n\t\t\tPRESS '1' FOR YES AND ANY OTHERE DIGIT FOR NO");
			int a;
			cout<<"\t\t\t";
			cin>>a;
			if(a==1)
			{
				system("cls");
				puts("\t\t\tTHANK YOU FOR THIS INFORMATION");
				fstream sd;
				sd.open("result.txt",ios::in|ios::out|ios::app);
				sd<<c<<" "<<"1\n";
			}
			else
			{
				system("cls");
				puts("\t\t\tSORRY FOR INCONVINIENCE,WE WILL HELP YOU SOON");
				fstream ss;
				ss.open("noti.txt",ios::in|ios::out|ios::app);
				ss<<com1<<" "<<c<<" "<<d<<"\n";
				fstream sd;
				sd.open("result.txt",ios::in|ios::out|ios::app);
				sd<<c<<" "<<"0\n";

			}
	}
	else 
	cout<<"\t\tINVALID COMPLAIN NUMBER\n\t\t";
}
else if(ya==1)
comme();
else 
cout<<"WRONG CHOICE";
}
void rights()
{
	system("cls");
	puts("\t\t\tENTER YOUR CHOICE - \n\t\t\t1.UNITED NATIONS HUMAN RIGHTS\n\t\t\t2.INDIAN FUNDAMENTAL RIGHTS\n\t\t\t3.WOMEN'S' RIGHTS IN CONSTITUTION OF INDIA\n\t\t\t");
	int t;
	cout<<"\t\t\t";
	cin>>t;
	system("cls");
	if(t==1)
	{
	fstream s;
	s.open("imp.txt",ios::in|ios::out);
	char r;
	while(!s.eof())	
	{
		s.get(r);
		cout<<r;
	}
	}
	else if(t==2)
	{
		fstream s;
	s.open("imp2.txt",ios::in|ios::out);
	char r;
	while(!s.eof())	
	{
		s.get(r);
		cout<<r;
	}
	}
	else if(t==3)
	{
			fstream s;
	s.open("imp3.txt",ios::in|ios::out);
	char r;
	while(!s.eof())	
	{
		s.get(r);
		cout<<r;
	}

		}	
}
void abc(char user[100])
{
	system("cls");
	cout<<"\n\t\t\t\tENTER YOUR CHOICE\n\t1.COMPLAINING ABOUT CRIMES AGAINST WOMENS ie DOMESTIC VOILENCE,DOWRY,CHILD MARRAIGE,SEX RACKETS\n";
cout<<"\t2.SEE THE DETAILS OF NGO's\t\t\t\n\t3.COMPLAIN ACCOMPLISHED\t\n\t4.RIGHTS OF A PERSON";
int t;
cout<<"\n\t";
cin>>t;
if(t==1)
com(user);
else if(t==2)
ngo();
else if(t==3)
acco();
else if(t==4)
rights();
system("pause");

}
void filter()
{
	
	fstream s;
	s.open("time.txt",ios::in|ios::out);
	char r;
	s>>r;
	if(s.eof())
	{ 
			int i,dd,mm;
		time_t now=time(0);
	tm*ltm=localtime(&now);
		int ii=ltm->tm_sec,jj=ltm->tm_min,kk=ltm->tm_hour,ll=1900+ltm->tm_year,pp=1+ltm->tm_mon,ddd=ltm->tm_mday;
		s<<ddd<<"\n"<<pp<<"\n"<<ll<<"\n";

	}
}
void strt()
{
	
cout<<"\n\tSIGNUP------------------->>LOGIN---------------------------------->>\n";
cout<<"\t       fill up basic                by entering               -----------------------------------\n ";
cout<<"\t     details and select              username                 |                |                 |\n";
cout<<"\t      a username and                   and                    |                |                 |\n";
cout<<"\t         password                   password                  |                |                 |\n";
cout<<"\t                                                              |                |                 |\n";
cout<<"\t                                                              |                |                 |\n";
cout<<"\t                                                              |                |                 | \n";
cout<<"\t                                 ________________________ COMPLAIN         CONTACT TO        COMPLAIN \n";
cout<<"\t                                |                        ANNONYMOUSLY        NGO'S          ACCOMPLISHED\n";
cout<<"\t                                |                                                             OR NOT?\n";
cout<<"\t                                |                                                                 | \n";
cout<<"\t                           ALL THE COMPLAINS                                                      |\n";
cout<<"\t                            WILL BE SEND TO                                    ___________________|\n";
cout<<"\t                              ALL NEAR BY                                      |\n";
cout<<"\t                           POLICE STATIONS                                     |\n";
cout<<"\t                                                                               |\n";
cout<<"\t                                                                        1.COMMENTS SECTION\n";
cout<<"\t                                                                        2.COMPLAINS ON NOT TAKING ACTIONS\n";
cout<<"\t                                                                        3.REVIEW ABOUT RELEIF TO VICTIM\n";
cout<<"\n\n\t       **EVERYTHING WILL BE DONE ANNONMOUSLY(YOUR IDENTITY WILL NOT BE DISCLOSED \n";

}

void sin()			
{
	system("cls");
	strt();
	cout<<"\n\n\nPRESS '1' TO DO SIGNUP\n\t\t\t";
	char tr;
	cin>>tr;
	system("cls");
	int ge;
	cin.ignore();
	cout<<"\t\t\tITS SIGN UP PAGE\n\t\t\tENTER YOUR NAME\n\t\t\t";
	char ar[100],br[100],cr[100],dr[100],arr[100],brr[100];
	int a=101,i,j,b=101;
	while(a==101)
	{
		b=101;
		gets(ar);
		for(i=0;ar[i]!='\0';++i)
		{
			if(ar[i]>='A'&&ar[i]<='Z')
			{
				b=101;
			}
			else if(ar[i]>='a'&&ar[i]<='z')
			{
				b=101;
			}
			else if(ar[i]==' ')
			{
				b=101;
			}
			else
			{
				b=501;
				cout<<"\t\t\tYOU HAVE ENTERED AN INVALID NAME PLEASE ENTER A NAME WHICH CONSIST OF ALPHABETS ONLY\n";
				break;
			}
		}
		if(b==101)
		a=501;
		else
		cout<<"\t\t\tENTER YOUR NAME\n";
			
	}
	cout<<"\t\t\tENTER  FATHER'S NAME\n\t\t\t";
	 a=101;
	 b=101;
	while(a==101)
	{
		b=101;
		gets(brr);
		for(i=0;brr[i]!='\0';++i)
		{
			if(brr[i]>='A'&&brr[i]<='Z')
			{
				b=101;
			}
			else if(brr[i]>='a'&&brr[i]<='z')
			{
				b=101;
			}
			else if(brr[i]==' ')
			{
				b=101;
			}
			else
			{
				b=501;
				cout<<"\t\t\tYOU HAVE ENTERED AN INVALID NAME PLEASE ENTER A NAME WHICH CONSIST OF ALPHABETS ONLY\n";
				break;
			}
		}
		if(b==101)
		a=501;
		else
		cout<<"\t\t\tENTER FATHER'S NAME\n";
			
	}
	cout<<"\t\t\tENTER  MOTHER'S NAME\n\t\t\t";
	a=101;
	 b=101;
	while(a==101)
	{
		b=101;
		gets(cr);
		for(i=0;cr[i]!='\0';++i)
		{
			if(cr[i]>='A'&&cr[i]<='Z')
			{
				b=101;
			}
			else if(cr[i]>='a'&&cr[i]<='z')
			{
				b=101;
			}
			else if(cr[i]==' ')
			{
				b=101;
			}
			else
			{
				b=501;
				cout<<"\t\t\tYOU HAVE ENTERED AN INVALID NAME PLEASE ENTER A NAME WHICH CONSIST OF ALPHABETS ONLY\n";
				break;
			}
		}
		if(b==101)
		a=501;
		else
		cout<<"\t\t\tENTER MOTHER'S NAME\n";
			
	}
		int p=101,q,ii;
	long long int su=0;
char er[100];

while(p==101)
	{
	q=501;
	su=0;
			cout<<"\t\t\tENTER YOUR ADHAR NUMBER\n\t\t\t";
		gets(er);
		if(strlen(er)==12)
		{
	for(ii=0;er[ii]!='\0';++ii)
	{
			if(er[ii]>='0'&&er[ii]<='9')
		{

			su=(su*10)+tt(er[ii]);
			
		}
		else
		{
			q=101;
			puts("\t\t\tyou have entered an incorrect ADHAR number so please enter a correct ADHAR NUMBER (digits only)\n");
			break;
		
		}
	
	}
}
else
{
	q=101;
	puts("\t\t\tyou have entered an incorrect ADHAR number so please enter a correct ADHAR number(digits only and contains 12 didts only)\n");
		
}
	if(q==501)
		p=501;		
}
	p=101;
	while(p==101)
	{
	q=501;
	su=0;
		cout<<"\t\t\tENTER YOUR MOBILE NUMBER\n\t\t\t";
		gets(dr);
		if(strlen(dr)==10)
		{
	for(ii=0;dr[ii]!='\0';++ii)
	{
			if(dr[ii]>='0'&&dr[ii]<='9')
		{

			su=(su*10)+tt(dr[ii]);
			
		}
		else
		{
			q=101;
			puts("you have entered an incorrect mobile number so please enter a correct mobile number(digits only)\n\t\t\t");
			break;
		
		}
		
	}
}
else
{
	q=101;
	puts("you have entered an incorrect mobile number so please enter a correct mobile number(digits only and contains 10 didts only)\n\t\t\t");
		
}
	if(q==501)
		p=501;		
}
	cout<<"ENTER ADDRESS\n\t\t\t";
	state();
	cout<<"\t\t\tENTER STATE\n\t\t\t";
	int st;
	cin>>st;
	cout<<"\t\t\tENTER DISTRICT\n\t\t\t";
	int dis=dist(st);
	cout<<"\t\t\tENTER YOUR LOCAL ADDRESS\n\t\t\t";
	cin.ignore();
	gets(arr);
	cout<<"\t\t\tENTER YOUR GENDER\n\t\t\t1.MALE\n\t\t\t2.FEMALE\n\t\t\t3.OTHERS\n\t\t\t";
	cin>>ge;
	cin.ignore();
	cout<<"\t\t\tENTER YOUR DTAE OF BIRTH of OF FORMAT FORMAT (DD:MM::YYYY).....eg.(04:04:2017)\n\t\t\t";
		p=101;
		 q=501;
		while(p==101)
		{
			q=501;
			gets(br);
			if(strlen(br)==10)
			{
				for(j=0;br[j]!='\0';++j)
				{
					if(j==2||j==5)
					{
				
				
					if(br[j]!=':')
					{
						q=501;
						puts("\t\t\tplease enter a valid date ie of format (DD:MM:YYYY)....eg.(04:04:1997)\n");
						break;
					}
					
			}
			else
			{
				if(br[j]>='0'&&br[j]<='9')
				{
				q=101;	
				}
				else
				{
					
						puts("\t\t\tplease enter a valid date ie of format (DD:MM:YYYY)....eg.(04:04:1917)\n");
					q=501;
					break;
				}
			}
				}
			}
			else
			{
				q=501;
				
						puts("\t\t\tplease enter a valid date ie of format (DD:MM:YYYY)....eg.(04:04:1917)\n");
			}
			if(q==101)
			p=501;
		}
			a=101;
			int pp=101,as,ad,af,ag;
			char z;
	
	char user[100];
			b=501;
			long long int aa,bb,passw;
			char az[100];
			cout<<"\t\t\tENTER A USERNAME\n\t\t\t";
	while(a==101)
	{
		b=501;
		gets(az);
		for(i=0;ar[i]!='\0';++i)
		{
			if(az[i]==' ')
			{
				puts("YOU HAVE ENTERED AN INVALID USERNAME i.e. IT DO NOT COSISIT OF BLANK SPACES\n\t\t\t");
				b=101;
				break;
			}
	}
	fstream s;
	s.open("login.txt",ios::in|ios::out);
	
	while(!s.eof())
{
	s.get(z);
	s.get(z);
	while(z!='\n')
	{
		s.get(z);
	}
	s.get(z);
	while(z!='\n')
	{
		s.get(z);
	}
	s.get(z);
	while(z!='\n')
	{
		s.get(z);
	}
	
	s>>aa>>bb>>as>>ad;
	s.get(z);
	while(z!='\n')
	{
		s.get(z);
	}
	s.get(z);
	while(z!='\n')
	{
		s.get(z);
	}
		s.get(z);
	while(z!='\n')
	{
		s.get(z);
	}
	
	s>>user>>passw;
	
	if(strcmp(user,az)==0)
	{
		b=101;
		puts("YOU HAVE ENTERED A PREEXISTING USERNAME SO PLEASE USE DIFFERENT USERNAME\n\t\t\t");	
		break;
	}
	
	}
		
	if(b==501)
	a=501;
	
	}

			
			puts("Enter a password through you can login (it can contain DIGITS only)\n\t\t\t");
	
	int sum;
	p=101;
	q=501;
	char ba[100];
	while(p==101)
	{
		q=501;
		sum=0;
			cin>>ba;
			if(strlen(ba)>=6)
			{
		
	for(i=0;ba[i]!='\0';++i)
	{
		if(ba[i]>='0'&&ba[i]<='9')
			sum=(sum*10)+tt(ba[i]);
		else
		{
			q=101;
			puts("you have entered an invslid password so please enter a valid password (digits only)\n\t\t\t");
			break;
		}
		}
	if(q==501)
	p=501;		
}
else
puts("please enter a valid password i.e whic contains greater than or equals to 6 digits\n\t\t\t");
}

	
	fstream s;
	s.open("login.txt",ios::in|ios::out|ios::app);
		puts("name ");
		puts(ar);
		puts(" f name ");
		puts(brr);
		puts(" m name ");
		puts(cr);
		puts("mobile ");
		puts(dr);
		puts(" A mobile 1");
		puts(er);
		puts("local address ");
		puts(arr);
		puts("DOB ");
		puts(br);
		cout<<"gender"<<ge<<"\nSTATE"<<st<<"\nDISTRICT"<<dis<<"\n"<<sum;	
		s<<ar<<"\n"<<brr<<"\n"<<cr<<"\n"<<er<<"\n"<<dr<<"\n"<<st<<"\n"<<dis<<"\n"<<arr<<"\n"<<br<<"\n"<<az<<"\n"<<sum<<"\n";
	
	
}
int main()
{	
system("color F0");
cout<<"\t\t\tHERE U CAN ;LOGIN SIGNIN AS A USER\n\t\t\t";
	cout<<"\t\t\tENTER YOUR CHOICE\n\t\t\t1.login\n\t\t\t2.signup\n\t\t\t";
	int t;
	cin>>t;
	if(t==1)
	log();
	else if(t==2)
	sin();
	else
	cout<<"\t\t\tWRONG CHOICE";
	
}
