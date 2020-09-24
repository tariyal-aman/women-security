
#include<iostream>
#include<fstream>
#include<ctime>
#include<string.h>
#include<unistd.h>
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
void filter(int aa,int bb)
{
//	cout<<aa<<" "<<bb;
//	sleep(2);
system("cls");
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
	else
	{
		fstream aq;
		
		aq.open("prob.txt",ios::in|ios::out);
		while(!aq.eof())
		{
		//	cout<<"hi";
			char ar[100],br[100],cr[100],dr[100],er[100],d,e;
			long long int ttt;
			int a1,a2,a3;
			aq>>ar>>ttt>>br>>a1>>a2;
			if(aq.eof())
			break;
			aq.get(d);
			aq.get(d);
			//aq.get(d);
		//cout<<d;
			
			while(d!='\n')
			{
			
				aq.get(d);
			//cout<<d;
			}
			
			aq.get(d);
			while(d!='\n')
			{
			//	cout<<d;
				aq.get(d);
			}
			aq.get(d);
			while(d!='\n')
			{
			//	cout<<d;
				aq.get(d);
			}
			if(a1==aa&&a2==bb)
			{
			int asz=7;
		char asx=asz;
		cout<<asx;
				break;
			}
		}
		//cout<<"hi";
		
	}
	
		
	}
}
void comp(int aa,int bb)
{
	system("cls");
	fstream z;
	int yy=101;
	
	
	char ar[100],br[100],cr[100],dr[100],arr[100],brr[100];
	int i,a,b,d;
char c;
//cout<<"aman";
	z.open("prob.txt",ios::in|ios::out);
	while(!z.eof())
	{
		
		//z.get(c);
		//cout<<"hi";
		z>>ar>>a>>br;
		
		//cout<<ar<<"\n";
		z>>b>>d;
		//cout<<b<<d;
		if(z.eof())
		break;
		if(b==aa&&d==bb)
		{
			yy=501;
			cout<<"\t\tUSERNAME - "<<ar<<"\n\t\tNAME OF THE VICTIM - "<<br<<"\n\t\tCOMPLAIN NUMBBER - "<<a<<"\n\t\tSTATE NUMBER - "<<b<<"\n\t\tSTATE NUMBER - "<<d<<"\n";
		}
		if(b==aa&&d==bb)
		cout<<"\t\tADDRESS - ";
		z.get(c);
		z.get(c);
		
		while(c!='\n')
		{
				if(b==aa&&d==bb)
				cout<<c;
				z.get(c);
		}
		if(b==aa&&d==bb)
		cout<<c;
		z.get(c);
		if(b==aa&&d==bb)
		cout<<"\t\tLOCALITY  - ";
		
		while(c!='\n')
		{
				if(b==aa&&d==bb)
				cout<<c;
				z.get(c);
		}
		if(b==aa&&d==bb)
		
		cout<<c;
		if(b==aa&&d==bb)
		cout<<"\t\tPROBLEM  - ";
		
		z.get(c);
		while(c!='\n')
		{
				if(b==aa&&d==bb)
				cout<<c;
				z.get(c);
		}
		
		cout<<"\n\n";
	}
	if(yy==101)
	{
		cout<<"\n\t\t NO COMPLAINS";
	}
	
}
void com()
{
	system("cls");
	cout<<"\t\t\tENTER THE COMPLAIN NUMBER\n\t\t\t";
	long int t;
	cin>>t;
		char ar[100],br[100],cr[100],dr[100],arr[100],brr[100];
		int i,a,b,d;
		char c;

	fstream z;
	z.open("database.txt",ios::in|ios::out);
	int tr=101;
	while(!z.eof())
	{
		//z.get(c);
		//cout<<"hi";
		z>>ar>>a>>br;
		if(t==a)
		{
			tr=501;
			break;
		}
		//cout<<ar<<"\n";
		z>>b>>d;
		//cout<<b<<d;
		if(z.eof())
		break;
		z.get(c);
		z.get(c);
		while(c!='\n')
		{
				//if(b==aa&&d==bb)
			//	cout<<c;
				z.get(c);
		}
		//cout<<c;
		z.get(c);
		
		while(c!='\n')
		{
		//		cout<<c;
				z.get(c);
		}
		//cout<<c;
		z.get(c);
		while(c!='\n')
		{
		//		cout<<c;
				z.get(c);
		}
		
		
	}
	
				long long int aadhar,mobile;
			char passw[100],user[100];
			int state,dist;
int as=101;
	char az;
		fstream s;
	s.open("login.txt",ios::in|ios::out);
	int q;
	if(tr==101)
	{
		cout<<"\t\t\tinvalid complain number\n\t\t\t";
		return;
	}
	while(!s.eof())
{
	s.get(az);
	s.get(az);
	while(az!='\n')
	{	
		s.get(az);
	}
	s.get(az);
	while(az!='\n')
	{
		s.get(az);
	}
	s.get(az);
		while(az!='\n')
			{
		s.get(az);
		
			}
	
	s>>aadhar>>mobile>>state>>dist;

	s.get(az);
	s.get(az);
	while(az!='\n')
	{	
	//	cout<<az;
		s.get(az);
	}
	s.get(az);
	while(az!='\n')
	{
	//	cout<<az;
		s.get(az);
	}	
	s>>user>>passw;
	if(strcmp(user,ar)==0)
	{
		b=501;
		as=801;
		break;
	}

}
	cout<<"\t\t\tADHAR NUMBER OF APPLICANT- "<<aadhar<<"\n\t\t\tMOBILE NUMBER OF APPLICANT- "<<mobile<<"\n\n\t";
	fstream rr;
	rr.open("ban.txt",ios::in|ios::out|ios::app);
	rr<<ar<<"\n";
}

void ngodet()
{
	system("cls");
	cin.ignore();
	cout<<"\t\t\tENTER THE NAME OF NGO\n\t\t\t";
	char name[100],br[100],cr[100],mob1[100],mob[100];
	cout<<"ENTER NAME OF NGO\n\t\t\t";
	gets(name);
	cout<<"\t\t\tENTER THE DETAILS OF NGO\n\t\t\t";
	gets(br);
	cout<<"\t\t\tENTER THE ACHIEVEMENTS OF NGO\n\t\t\t";
	gets(cr);
	cout<<"\t\t\tENTER CONTACT NUMBER \n\t\t\t";
	gets(mob);
	cout<<"\t\t\tENTER ANOTHER MOBILE NUMBER or EMAIL ADDRESS\n\t\t\t";
	gets(mob1);
	fstream s;
	s.open("ngo.txt",ios::in|ios::out|ios::app);
	s<<"name - "<<name<<"\nDETAILS - "<<br<<"\nACHIEVEMENTS - "<<cr<<"\nCONTACT NUMBER - "<<mob<<"\nCONTACT NUMBER/EMAIL ADDRESS - "<<mob1<<"\n";
	
}

void ngo()
{
	system("cls");
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
	cout<<"\t\t\tWELCOME TO LMHY\n\t\t\t";
	cout<<"ENTER USERNAME  \n\t\t\t";
	int p=101,a,b;
	char u[100],pa[100];
	int q=101,i;
	char az[100];
		char username[100],pass[100];
a=101;
int aa,bb;
char z;
b=501;
while(a==101)
	{
		b=101;
		gets(az);
		for(i=0;az[i]!='\0';++i)
		{
			if(az[i]==' ')
			{
				puts("\t\t\tYOU HAVE ENTERED AN INVALID USERNAME i.e. IT DO NOT COSISIT OF BLANK SPACES\n\t\t\t");
				b=501;
				break;
			}
	}
	fstream s;
	s.open("pls.txt",ios::in|ios::out);
	
	while(!s.eof())
{
	s.get(z);
	s.get(z);
	while(z!='\n')
	{
	//	cout<<z;
		s.get(z);
	}
	//cout<<"here"<<z;
	s>>aa>>bb;
	//cout<<aa;
	s.get(z);
	s.get(z);
	//cout<<z;
	while(z!='\n')
	{
	//	cout<<z;
		s.get(z);
	}
	
	s>>u>>pa;
	if(strcmp(u,az)==0)
	{
		//cout<<u;
		b=501;
		break;
	}
	
	}
		
	if(b==501)
	a=501;
	else
	cout<<"\t\t\tplease enter a valid username\n\t\t\t";
	
	}
	cout<<"\t\t\tENTER PASSWORD\n\t\t\t";
	char ar[100];
	a=101;
	while(a==101)
	{
		b=101;
		gets(ar);
		for(i=0;ar[i]!='\0';++i)
		{
				if(ar[i]==' ')
			{
				puts("\t\t\tYOU HAVE ENTERED AN INVALID PASSWORD \n\t\t\t");
				b=501;
				break;
			}
			else if(ar[i]>='0'&&ar[i]<='9')
			{
			}
			else
			{
				puts("\t\t\tYOU HAVE ENTERED AN INVALID password \n\t\t\t");
				b=501;
				break;
			}

	}
	fstream s;
	s.open("pls.txt",ios::in|ios::out);
	
	while(!s.eof())
{
	s.get(z);
	s.get(z);
	while(z!='\n')
	{
	//	cout<<z;
		s.get(z);
	}
	//cout<<"here"<<z;
	s>>aa>>bb;
	//cout<<aa;
	s.get(z);
	s.get(z);
	//cout<<z;
	while(z!='\n')
	{
	//	cout<<z;
		s.get(z);
	}
	
	s>>u>>pa;
	if(strcmp(pa,ar)==0)
	{
		//cout<<u;
		if(strcmp(u,az)==0)
		{
		b=501;
		break;	
		}
		
	}
	
	}
		
	if(b==501)
	a=501;
	else
	cout<<"\t\t\tplease enter a valid password\n\t\t\t";
	
	}
	
cout<<"\t\t\tHELLO "<<az;
	void abc(int ,int );
	abc(aa,bb);
	int apo=2;
	while(apo==2)
	{
		system("cls");
		puts("\t\t\tENTER YOUR CHOICE\n\t\t\t1.LOGOUT\n\t\t\t2.GO BACK TO MAIN MENU\n");
		cout<<"\t\t\t";
		cin>>apo;
		if(apo==2)
		abc(aa,bb);
	}
}
void noti(int aa,int bb)
{
	system("cls");
		fstream s;
		s.open("noti.txt",ios::in|ios::out);
		long long int y;
		int a,b,no=0;
		while(!s.eof())
		{
			s>>y>>a>>b;
			if(a==aa&&b==bb)
			{
				++no;
			}
		}
		cout<<"\t\t\tYOU HAVE "<<no<<" NOTIFICATIONS";
		fstream ss;
		if(no!=0)
		{
		
		cout<<"PLEASE TAKE SOME ACTION FOR THESE COMPLAINS ASAP\n\t\t\t";
		int tyt=7;
		char aap=tyt;
		cout<<aap;
		
		}
		ss.open("noti.txt",ios::in|ios::out);
		while(!ss.eof())
		{
			ss>>y>>a>>b;
			if(a==aa&&b==bb)
			{
					cout<<"COMPLAIN NUMBER - "<<y<<"\n\t\t\t";
			}
		}
		fstream aaz;
		aaz.open("noti.txt",ios::in|ios::out|ios::trunc);
}
void res(int aa)
{
	system("cls");
	float ar[36];
	int i,a,b,x,y;
	for(i=0;i<36;++i)
	{
	x=0;
	y=0;
	fstream s;
	s.open("result.txt",ios::in|ios::out);
		while(!s.eof())
	{
	   		s>>a>>b;
	   		if(s.eof())
	   		break;
			   if(a==(i+1))
			   {
				if(b==1)
				++x;
				++y;		   	
				}
	}
//	cout<<x<<" "<<y<<"\n";
	if(y==0)
	ar[i]=0;
	else
	ar[i]=(float)x/y;
	ar[i]=ar[i]*100;
}
float br[2][36];
int tp;
//for(tp=0;tp<36;++tp)
for(i=0;i<36;++i)
{

br[0][i]=ar[i];
br[1][i]=i+1;
}
int j;
for(i=0;i<36;++i)
{
	for(j=0;j<36-i-1;++j)
	{
		if(br[0][j]<br[0][j+1])
		{
		//	cout<<br[j];
			float te=br[0][j];
			br[0][j]=br[0][j+1];
			br[0][j+1]=te;
			float tee=br[1][j];
			br[1][j]=br[1][j+1];
			br[1][j+1]=tee;
		}
	}
}

for(i=0;i<36;++i)
//cout<<br[0][i]<<" "<<br[1][i]<<"\n";
char tr;
int al,as;
for(i=0;i<36;++i)
{
char kl[100];
fstream sa;
sa.open("st.txt",ios::in|ios::out);
//cout<<br[1][i];
	for(as=0;as<br[1][i];++as)	
	sa>>kl;
	cout<<"\t\t\tRANK '"<<i+1<<"' - ";
cout<<kl;
cout<<"\n";
}


}
void abc(int aa,int bb)
{
	system("cls");
	filter(aa,bb);
cout<<"\n\t\t\tENTER YOUR CHOICE\n\t\t\t1.WANT TO SEE THE COMPLAINS\n\t\t\t2.WANT TO COMPLAIN ABOUT A FAKE COMPLAIN\n\t\t\t3.SEE THE DETAILS OF NGO'S'\n\t\t\t4.ENTER THE DETAILS OF A NGO\n\t\t\t";
cout<<"5.NOTIFICATIONS\n\t\t\t6.RANKING(STATE WISE)\n\t\t\t7.CHECK REVIEWS\n\t\t\t";
int at;
cin>>at;
system("cls");
if(at==1)
comp(aa,bb);
else if(at==2)
com();
else if(at==3)
ngo();
else if(at==4)
ngodet();
else if(at==5)
{
	noti(aa,bb);
}
else if(at==6)
res(aa);
else if(at==7)
{
puts("\t\t\tENTER YOUR CHOICE\n\t\t1.DROP A REVIEW\n\t\t2.CHECK THE REVIEWS\n\t\t");
int a;
cout<<"\t\t";
cin>>a;
cin.ignore();
if(a==1)
{
	char msg[10000];
	system("cls");
	puts("\t\tENTER YOUR MESSAGE\n\t\t");
	cout<<"\t\t";
	gets(msg);
	fstream s;
	s.open("chat.txt",ios::in|ios::out|ios::app);
	s<<"AUTHORITY - "<<msg<<"\n\n";
	
	
}
else if(a==2)
{
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
else 
cout<<"\t\t\tWRONG CHOICE\n\t\t\t";
system("pause");

}
void sin()
{
	system("cls");
		cout<<"\n\t\t\tWELCOME TO LMHY\n\t\t\tENTER NAME OF SHO\n\t\t\t";
	char ar[100];
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
				cout<<"\t\t\tYOU HAVE ENTERED AN INVALID NAME PLEASE ENTER A NAME WHICH CONSIST OF ALPHABETS ONLY\n\t\t\t";
				break;
			}
		}
		if(b==101)
		a=501;
		else
		cout<<"\t\t\tENTER YOUR NAME\n\t\t\t";
			
	}
	cout<<"\t\t\tENTER THE ADDRESS OF POLICE STATIONS\n";
	int stat,disct;
	state();
	cout<<"\t\t\tENTER STATE\n \t\t\t";
	cin>>stat;
		cout<<"\t\t\tENTER DISTRICT\n \t\t\t";
	 disct=dist(stat);
	 cin.ignore();
	 	cout<<"\t\t\tENTER YOUR COMPLETE ADDRESS\n\t\t\t";
	char addr[100],c;
	gets(addr);
	fstream s;
	cout<<"\t\t\tENTER A USERNAME THROUGH U CAN LOGIN \n\t\t\t";
	int p=101;
	
	char u[100],pa[100];
	int q=101;
	char az[100];
		char username[100],pass[100];
a=101;
int aa,bb;
char z;
b=501;
while(a==101)
	{
		b=501;
		gets(az);
		for(i=0;ar[i]!='\0';++i)
		{
			if(az[i]==' ')
			{
				puts("\t\t\tYOU HAVE ENTERED AN INVALID USERNAME i.e. IT DO NOT COSISIT OF BLANK SPACES\n\t\t\t");
				b=101;
				break;
			}
	}
	fstream s;
	s.open("pls.txt",ios::in|ios::out);
	
	while(!s.eof())
{
	s.get(z);
	s.get(z);
	while(z!='\n')
	{
	//	cout<<z;
		s.get(z);
	}
	//cout<<"here"<<z;
	s>>aa>>bb;
	//cout<<aa;
	s.get(z);
	s.get(z);
	//cout<<z;
	while(z!='\n')
	{
	//	cout<<z;
		s.get(z);
	}
	
	s>>u>>pa;
	
	if(strcmp(u,az)==0)
	{
		b=101;
		puts("\t\t\tYOU HAVE ENTERED A PREEXISTING USERNAME SO PLEASE USE DIFFERENT USERNAME\n\t\t\t");	
		break;
	}
	
	}
		
	if(b==501)
	a=501;
	
	}
	
	puts("\t\t\tEnter a password through you can login (it can contain DIGITS only)\n\t\t\t");
	
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
			puts("\t\t\tyou have entered an invslid password so please enter a valid password (digits only)");
			break;
		}
		}
	if(q==501)
	p=501;		
}
else
puts("\t\t\tplease enter a valid password i.e whic contains greater than or equals to 6 digits");
}
	cout<<"\t\t\tYOUR USERNAME - "<<az<<"\n\t\t\tYOUR PASSWORD - "<<sum;
	s.open("pls.txt",ios::in|ios::out|ios::app);
	s<<ar<<"\n"<<stat<<"\n"<<disct<<"\n"<<addr<<"\n"<<az<<"\n"<<sum<<"\n";

}
int main()
{
	system("color F0");
	cout<<"\t\t\tHERE YOU CAN LOGIN AND SIGN UP AS A HIGHER AUTHORITY (POLIC STATION SHO,etc) \n\t\t\t";
	cout<<"\t\t\tENTER YOUR CHOICE\n\t\t\t1.LOGIN\n\t\t\t2.SIGNUP\n\t\t\t";
	int t;
	cin>>t;
	cin.ignore();
	if(t==1)
	log();
	else if(t==2)
	sin();
	system("pause");
}
