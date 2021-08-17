#include<iostream.h>
#include<conio.h>
#include<time.h>
#include<dos.h>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<fstream.h>
void cdate(int &a,int &b,int &c)
 {	int d1,m1,y1;
	struct date d;
	getdate(&d);
	d1=d.da_day;
	m1=d.da_mon;
	y1=d.da_year;
	a=d1;
	b=m1;
	c=y1;

 }
void credit()
{       char n[10];
	clrscr();

	cout<<"\n\n\t\t\tEnter your first name:";
	gets(n);
	cout<<"\n\n\n                                  CREDIT CARD";
	cout<<"\n\n";
	cout<<"\t\t\t|--------------------------------|\n";
	cout<<"\t\t\t|        4 CLOVER BANK   ------  |\n";
	cout<<"\t\t\t|   ___                 |CLOVER| |\n";
	cout<<"\t\t\t|  | C |                 ------  |\n";
	cout<<"\t\t\t| 1254 3427 1327 9865            |\n";
	cout<<"\t\t\t|      01/01/2019   01/01/2024   |\n";
	cout<<"\t\t\t| 1254 validfrom   validthrough  |\n";
	cout<<"\t\t\t|                                |\n";
	cout<<"\t\t\t|                    MASTER CARD |\n";
	cout<<"\t\t\t|--------------------------------|\n";
	gotoxy(31,18);
	cout<<n;
	gotoxy(50,24);
	cout<<"press any key to continue...";
	getch();
}
void debit()
{       char b[10];
	clrscr();
	cout<<"\n\n\t\t\tEnter your first name:";
	gets(b);
	cout<<"\n\n\n                                  DEBIT CARD";
	cout<<"\n\n";
	cout<<"\t\t\t|--------------------------------|\n";
	cout<<"\t\t\t|        4 CLOVER BANK  ------   |\n";
	cout<<"\t\t\t|   ___                |CLOVER|  |\n";
	cout<<"\t\t\t|  | C |                ------   |\n";
	cout<<"\t\t\t| 1254 3427 1327 9865            |\n";
	cout<<"\t\t\t|      01/01/20XX   01/01/20XX   |\n";
	cout<<"\t\t\t| 1254 validfrom   validthrough  |\n";
	cout<<"\t\t\t|                                |\n";
	cout<<"\t\t\t|                           VISA |\n";
	cout<<"\t\t\t|--------------------------------|\n";
		gotoxy(31,19);
	cout<<b;
	gotoxy(50,24);
	cout<<"press any key to continue...";
	getch();

}
void cheque()
{clrscr();
char ac[8];
char g[10];
cout<<"\n\n\t\tEnter your eight digit account number:";
gets(ac);
cout<<"\n\t\tEnter your first name:";
gets(g);

cout<<"\n\n\n                                  CHEQUE BOOK";
cout<<"\n\n\n";
cout<<"\n\t|-----------------------------------------------------------|";
cout<<"\n\t|  -------  4clover bank                      -- -- ----    |";
cout<<"\n\t| |4CLOVER| z block market                    DD MM YYYY    |";
cout<<"\n\t|  -------  IFSC:ABCD1234567                                |";
cout<<"\n\t| Pay_____________________________________________Or Bearer |";
cout<<"\n\t| _________________________________________ _______________ |";
cout<<"\n\t| _________________________________________|Rs|____________||";
cout<<"\n\t|                                                           |";
cout<<"\n\t| |A/c No.        |     NTX                                 |";
cout<<"\n\t|                                            _____________  |";
cout<<"\n\t|PAYABLE AT ALL BRANCHES OF 4CLOVER IN INDIA    Signature   |";
cout<<"\n\t|-----------------------------------------------------------|";
gotoxy(20,21);
cout<<ac;
gotoxy(55,21);
cout<<g;
gotoxy(50,24);
cout<<"press any key to continue...";
getch();

}
void about_us()
{clrscr();
cout<<"\n\n\n********************************************************************************\n";
cout<<"The Bank has brand image and trust reposed by its customers have been reflected";
cout<<" in the growing customer base and rising business graph of the Bank.\n";
cout<<"Domestic business of the Bank has crossed the milestone of Rs.10 lakh crore.\n";
cout<<"The bank has been able to reach out to its customers across the nation with \n";
cout<<" nearly 7000 branches,of which nearly 62% branches are in Rural and Semi Urban Areas.";
sleep(6);
gotoxy(50,24);
cout<<"press any key to continue...";
getch();
}
void faq()
{clrscr();
cout<<"\n\n********************************************************************************\n";
cout<<"1. What is PassBook?\n";
cout<<"   PassBook is a book to ease customers to view their statement,transaction\n";
cout<<"   details and transaction history.\n";
cout<<"2. What Is A Debit Card ?\n";
cout<<"   A Debit Card provides access to ATMs for cash withdrawals, balance enquiries";
cout<<"   and mini statement,on-line electronic payment for purchases from your savings";
cout<<"   / current (individual) accounts.You can also transfer funds through ATM to\n";
cout<<"   your own / other and also transfer / receive funds to / from any MasterCard\n";
cout<<"   or Maestro card holder (Debit or Credit card) of other selected banks.\n";
cout<<"3. What Is PIN (Personal Identification Number)?\n";
cout<<"   PIN is a unique 4 digit number that allows you to access your account through";
cout<<"   Debit Card at ATMs.For safety, your PIN should always be kept completely\n";
cout<<"   confidential and your card too should remain in your possession and not to be";
cout<<"   handed over to anyone else. Neither write PIN on the Back of the Debit card\n";
cout<<"   nor Keep Debit Card along with PIN.\n";
cout<<"4. What Is The Validity Of 4clover Debit Card ?\n";
cout<<"   Debit Card is valid for 7 years.\n";
cout<<"5. What Is NEFT ? (To Enquire The IFSC Code)\n";
cout<<"   NEFT stands for `National Electronic Funds Transfer`.\n";
cout<<"   NEFT system is a nation wide funds transfer system to facilitate transfer\n";
cout<<"   of funds from any bank branch to any other bank branch.\n";
sleep(10);
gotoxy(50,24);
cout<<"press any key to continue...";
getch();
}
class emp_details
{ int eno;
  char pob[40];
  char name[40];
  int DOB[3];
  char g[10];
  char address[100];
  char mobile_no[11];
  char mname[30];
  char fname[30];
  char idproof[20];
  char idtype;
  int DOJ[3];
  char post[20];
  float salary;
  char department[20];
  int departmentno;
  int leaves;

  public:

 void gdata()
   {clrscr();
	cout<<"\n----------------------------ENTER EMPLOYEE DETAILS----------------------------\n";
    cout<<"\n\n\t\tEnter employee number:";
    cin>>eno;
    cout<<"\t\tEnter Name :";
    gets(name);
    cout<<"\t\tEnter Date Of Birth(dd/mm/yyyy) :";
    cin>>DOB[0];
    gotoxy(52,7);
    cout<<"/";
    cin>>DOB[1];
    gotoxy(55,7);
    cout<<"/";
    cin>>DOB[2];
    cout<<"\t\tEnter gender(Female/Male/Other):";
    gets(g);
    cout<<"\t\tEnter Address:";
    gets(address);
    cout<<"\t\tEnter Mobile number:";
    gets(mobile_no);
    cout<<"\t\tEnter your place of birth:";
    gets(pob);
    cout<<"\t\tEnter mothers name :";
    gets(mname);
    cout<<"\t\tEnter fathers name :";
    gets(fname);
    cout<<"\t\tEnter date of joining:";
     cin>>DOJ[0];
     gotoxy(41,14);
     cout<<"/";
     cin>>DOJ[1];
     gotoxy(44,14);
     cout<<"/";
     cin>>DOJ[2];
     cout<<"\t\tEnter designation:";
     gets(post);
    cout<<"\t\tEnter salary per annum:";
     cin>>salary;
    cout<<"\t\tEnter department number(1/2/3/4):";
    cin>>departmentno;
    cout<<"\t\tEnter department name(Managment/cash/clerk/audit):";
    gets(department);
    cout<<"\t\tEnter number of leaves:";
    cin>>leaves;

    id_proof();
}
    void id_proof()


     {	clrscr();
	int a;
	cout<<"\n\n\t\t   CHOOSE YOUR ID PROOF:\n";
	cout<<"\n\n\t\t\t1.Aadhar Card";
	cout<<"\n\n\t\t\t2.Pancard";
	cout<<"\n\n\t\t\t3.Passport";
	cout<<"\n\n\t\t\tEnter choice<1-3>:";
	cin>>a;
	if(a==1)
		{cout<<"\n\n\n\t\t\tEnter aadhar number:";
		idtype='a';
		gets(idproof);
		}
	else if(a==2)
		{cout<<"\n\n\n\t\t\tEnter Pancard number:";
		idtype='p';
		gets(idproof);
		}
	else if(a==3)
		{cout<<"\n\n\n\t\t\tEnter Passport number:";
		idtype='P';
		gets(idproof);
		}


    }
   void pdata()
    {

	cout<<"\nEmployee number:"<<eno;
	cout<<"\nName:"<<name;
	cout<<"\nPlace of birth:"<<pob;
	cout<<"\nDate of birth:"<< DOB[0]<<"/"<<DOB[1]<<"/"<<DOB[2];
	cout<<"\nGender:"<<g;
	cout<<"\nAddress:"<<address;
	cout<<"\nContact number:"<<mobile_no;
	cout<<"\nId proof:"<<idproof;
	cout<<"\nMother's name:"<<mname;
	cout<<"\nFather's name:"<<fname;
	cout<<"\nDate of joining:"<<DOJ[0]<<"/"<<DOJ[1]<<"/"<<DOJ[2];
	cout<<"\nDesignation:"<<post;
	cout<<"\nDepartment Name(Management/Cash/Clerk/Audit):"<<department;
	cout<<"\nDepartment number(1/2/3/4)"<<departmentno;
	cout<<"\nNumber of leaves taken per year:"<<leaves;
	cout<<"\nSalary per annum:"<<salary;
	sleep(2);
	gotoxy(50,24);
       cout<<"press any key to continue...";
       getch();
}
 void disp()
{
	cout<<eno<<"\t"<<name<<"\t"<<g<<"\t"<<mobile_no<<"\t"<<post<<"\t\t"<<departmentno;
}
	int geteno()
		{ return eno; }
	void e_modify();
	void e_delete();
	void e_search();
}e1;
void e_read()
{clrscr();
cout<<"----------------------------------------------------------------------\n";
 cout<<" Eno.\tName\t\tGender\tContact\t\tPost\t\tDepartment no.\n";
 cout<<"----------------------------------------------------------------------\n";
	ifstream f;
	f.open("employee.dat",ios::binary);
	while(!f.eof())
	{	f.read((char*)&e1,sizeof(e1));
		if(f.eof())
			break;
		e1.disp();
	}
	f.close();
	sleep(2);
	gotoxy(50,24);
cout<<"press any key to continue...";
getch();

}
void e_write()
{          clrscr();
	ofstream f;
      cout<<"\n----------------------------ENTER EMPLOYEE DETAILS----------------------------\n";
	f.open("employee.dat",ios::app||ios::binary);
	char ans='y';
	while(ans=='y')
	{	e1.gdata();
		f.write((char*)&e1,sizeof(e1));
		cout<<"\t\t\tDo you want to continue?:";
		cin>>ans;
		cout<<"\n";
	}
	f.close();
 }

void emp_details::e_modify()
{       clrscr();
	fstream f;
	long pos;
	int no;
	char found='n';
	cout<<"\n----------------------------CORRECTION/MODIFICATION---------------------------\n ";
	f.open("employee.dat",ios::in|ios::out);
	cout<<"\n\n\t\t\tEnter employee number to be modified:";
	cin>>no;
	while(!f.eof())
	{	pos=f.tellg();
		f.read((char*)&e1,sizeof(e1));
		if(f.eof())
			break;
		if(e1.geteno()==no)
			{	found='y';
				e1.gdata();
				f.seekg(pos);
				f.write((char*)&e1,sizeof(e1));
			}
	}
	if(found=='n')
		cout<<"\n\t\t*******************Not   found*************************";
	f.close();
	clrscr();
	f.open("employee.dat",ios::in||ios::binary);
		cout<<"--------------------------------------------------------------------------------";
	cout<<"\n\n\t\t\tMODIFICATION MADE\n";
	while(!f.eof())
	{	f.read((char*)&e1,sizeof(e1));
		if(f.eof())
		break;
		if(e1.geteno()==no)
		e1.pdata();
	}
	f.close();
}
void emp_details::e_search()
{          clrscr();
	emp_details e1;
	int a;
	char found='n';
	ifstream f;
	f.open("employee.dat",ios::binary);
	cout<<"------------------------------EMPLOYEEE DETAILS------------------------------";
	cout<<"\n\n\t\t\tEnter employee number to be searched:";
	cin>>a;
	while(!f.eof())
	{
		f.read((char*)&e1,sizeof(e1));
		if(e1.geteno()==a)
		{	e1.pdata();
			found='y';
			break;
		}
	}
	if(found=='n')
		cout<<"\n\n\t\t\tEntered employee number does not exist\n";
		f.close();
}
void emp_details::e_delete()
{	clrscr();
	ifstream fin;
	ofstream fout;
	int b;
	char found='n';
	fin.open("employee.dat",ios::in);
	fout.open("temp.dat",ios::out);
	cout<<"----------------------------DELETE EMPLOYEE DETAILS---------------------------\n";
	cout<<"\t\tEnter employee number to be deleted:";
	cin>>b;
	while(!fin.eof())
	{
		fin.read((char*)&e1,sizeof(e1));
		if(fin.eof())
		break;
		if(e1.geteno()==b)
			found='y';
		else
			fout.write((char*)&e1,sizeof(e1));
	}
	if(found=='n')
		cout<<"\n\n\t\tNot found\n";
	  fin.close();
	  fout.close();
	  remove("employee.dat");
	  rename("temp.dat","employee.dat");
}

class account
 {
  char acc_no[8];
  char name[30];
  char DOB[3];
  char gender[10];
  char address[50];
  char mobile_no[11];
  char aadhar_no[15];
  char security[3][15];
  long int pin;
  float amount;
  public:

  account()
  {amount=1000;}

   char *getacc_no()
   {return acc_no;}

  int passcheck(int p);

   void getdata()
   {clrscr();
   cout<<"\n---------------------------------ENTER DETAILS--------------------------------";
    cout<<"\n\n\t\tEnter Name :";
    gets(name);
    cout<<"t\tEnter Date Of Birth(dd/mm/yyyy) :";
    cin>>DOB[0];
    gotoxy(47,7);
    cout<<"/";
    cin>>DOB[1];
    gotoxy(50,7);
    cout<<"/";
    cin>>DOB[2];
    cout<<"\t\tEnter gender(Female/Male/Others):";
    gets(gender);
    cout<<"\t\tEnter Address:";
    gets(address);
    cout<<"\t\tEnter Mobile number:";
    gets(mobile_no);
    cout<<"\t\tEnter account number:";
    gets(acc_no);
    cout<<"\t\tEnter Aadhar card number:";
    gets(aadhar_no);

    security_question();
    clrscr();
    gotoxy(17,11);
    cout<<"---Your Account has been succesfully created---";
    gotoxy(30,12);
    cout<<"Your pin is :";
	randomize();
	pin=random(10000);
	cout<<pin;
	getch();
    }
    void security_question()
    {	clrscr();
	cout<<"\n\n\t\t\tAnswer the following security questions:";
	cout<<"\n\n\t\tWhich is your favorite book?:";
	gets(security[0]);
	cout<<"\n\n\t\tWhat is your place of birth?:";
	gets(security[1]);
	cout<<"\n\n\t\tWhich is your favorite food?:";
	gets(security[2]);
    }

    void file_modify();
    float get_amount()
    {return amount;}

    void file_delete();
    void display()
    {   clrscr();
	cout<<"\n\n\t\t\tName:"<<name;
	cout<<"\n\n\t\t\tAccount number:"<<acc_no;
	cout<<"\n\n\t\t\tDate of birth:"<< DOB[0]<<"/"<<DOB[1]<<"/"<<DOB[2];
	cout<<"\n\n\t\t\tGender:"<<gender;
	cout<<"\n\n\t\t\tAddress:"<<address;
	cout<<"\n\n\t\t\tContact number:"<<mobile_no;
	cout<<"\n\n\t\t\tAadhar card number:"<<aadhar_no;

   }

   void amount_change(float m)
   { amount=m;
   }
   void cus_search();
   void file_read();
   void file_write();
 }s1;
void account::file_read()
{
	ifstream f;
	cout<<"------------------------------------------------------------------------------\n";
	cout<<"ACCOUNT NO.\tNAME\tDOB\tGENDER\tCONTACT NO.\n";
	cout<<"------------------------------------------------------------------------------\n";
	f.open("data.dat",ios::binary);
	while(!f.eof())
	{	f.read((char*)&s1,sizeof(s1));
		if(f.eof())
			break;
	   cout<<acc_no<<"\t"<<name<<"\t"<<DOB[0]<<"/"<<DOB[1]<<"/"<<DOB[2]<<"\t"<<gender<<"\t"<<mobile_no;
	}
	f.close();
		sleep(2);
	gotoxy(50,24);
cout<<"press any key to continue...";
getch();

}
void account::file_write()
{          clrscr();
	ofstream f;

	f.open("data.dat",ios::app||ios::binary);
		s1.getdata();
		f.write((char*)&s1,sizeof(s1));


	f.close();

 }


 void account::cus_search()
   { clrscr();

	 char temp_acc[8];
	 char found='n';
	 ifstream f;
	 cout<<"\n--------------------------------CUSTOMER DETAILS------------------------------";
	 f.open("data.dat", ios::binary) ;
	 cout<<"\n\n\t\t\t Enter Account no. :";
	 gets(temp_acc);


       while(!f.eof())
       {
		f.read((char*)&s1,sizeof(s1));
		if(strcmpi(s1.acc_no,temp_acc)==0)
		{
		 display();
		 found='y';
		 break;

		}

       }
	   if(found=='n')
	   cout<<"\n\n\n\t\t\tInvalid Account Number";
		sleep(2);
	gotoxy(50,24);
cout<<"press any key to continue...";
getch();

   }

 void account::file_modify()
  {      clrscr();
	char acc[8];
	int check,pass;
	fstream f;
	long pos;
	cout<<"\n-----------------------------CORRECTION/MOIDIFICATION-------------------------\n";
	char found='n';
	f.open("data.dat",ios::in|ios::out|ios::binary);
	cout<<"\n\n\t\t\tEnter your account number:";
	gets(acc);
		cout<<"\n\n\t\t\tEnter your password:";
	cin>>pass;
       check=passcheck(pass);
       if(check==1)
       {
	while(!f.eof())
	{	pos=f.tellg();
		f.read((char*)&s1,sizeof(s1));
		if(f.eof())
			break;
		if(s1.getacc_no()==acc)
			{	found='y';
				s1.getdata();
				f.seekg(pos);
				f.write((char*)&s1,sizeof(s1));
			}
	}
	cout<<"\n\n\n\t\t\tMODIFICATION WAS MADE";
       }
    if(found=='n')
	cout<<"*******************Not   found*************************";
    f.close();
	sleep(2);
	gotoxy(50,24);
cout<<"press any key to continue...";
getch();


}
 void account::file_delete()
{	clrscr();
	cout<<"--------------------------------DELETE ACCOUNT--------------------------------\n";
	ofstream fstore;
	ifstream fin;
	ofstream fout;
	int pass;
	char acc[8];
	char ans[20];
	char found='n';
	fstore.open("deldata.dat",ios::out|ios::binary);
	fin.open("data.dat",ios::in|ios::binary);
	fout.open("temp.dat",ios::out|ios::binary);
	cout<<"................................................................................";
	cout<<"\t\tEnter your account no :";
	cin>>acc;


	while(!fin.eof())
	{
		fin.read((char*)&s1,sizeof(s1));
		if(fin.eof())
		break;
		if(s1.getacc_no()==acc)
			{
			 found='y';
			 cout<<"\n\n\\t\t\tWithdraw your savings.";
			 fstore.write((char*)&s1,sizeof(s1));
			}
		else
			fout.write((char*)&s1,sizeof(s1));

	}


	if(found=='n')
		cout<<"\n\n\n\t\tAccount was Not found\n";
	fin.close();
	fout.close();
	fstore.close();
	remove("data.dat");
	rename("temp.dat","data.dat");
		sleep(2);
	gotoxy(50,24);
cout<<"press any key to continue...";
getch();

}

int account::passcheck(int p)
 { int r=0;
   char ans[15];
	if(p!=pin)
	{	cout<<"\n\n\t\t\tWrong password";
		cout<<"\n\n\n\t\tAnswer security questions:";
		cout<<"\n\n\t\t\tWhich is your favorite book?:";
		gets(ans);
		if(strcmpi(security[0],ans)!=0)
		     {
		      cout<<"\n\n\t\t\tWhat is your place of birth?:";
		      gets(ans);
			 if(strcmpi(security[1],ans)!=0)
			 {
			  cout<<"\n\n\t\t\tWhich is your favorite food?:";
			  gets(ans);
			   if(strcmpi(security[2],ans)!=0)
			     cout<<"\n\n\t\t\tAuthentication failure";
			   else
			    r=1;
			 }
			 else
			  r=1;
		     }
		     else
		     r=1;
		}

       else
	r=1;
    return r;

 }

class passbook
{ char acc_no[13];
  int date[3];
  char particulars[30];
  char type;
  float amount;
  float t_balance;

  public:
   void get_pass()
   { cout<<date<<"\t"<<particulars;
    if(type=='d')
      cout<<"\t";
    else
     cout<<"\t\t";
     cout<<amount;
     cout<<"\t"<<t_balance;
     }
     void add_withdraw(char t);

     char *get_acc()
     {return acc_no;}

     void enter_pass();
     void view_passbook();
 }p1;

  void passbook::view_passbook()
  { ifstream f;
  char temp_acc[13];
  cout<<"\n\n\n\t\t\tEnter Account No.:";
  gets(temp_acc);

  clrscr();
  f.open("pass_data.dat",ios::in|ios::binary);
  cout<<"__________________________________________________________________\n";
  cout<<"DATE \t PARTICULARS \t AMOUNT CREDIT \t AMOUNT DEBIT \t BALANCE";
  cout<<"_________________________________________________________________\n";

  while(!f.eof())
  {f.read((char*)&p1,sizeof(p1));
    if(f.eof())
     break;
    if(strcmpi(temp_acc,acc_no)==0)
      get_pass();

  }
  f.close();
  }

  void passbook::add_withdraw(char t)
  {
     clrscr();
  char found='n';
    fstream f1,f2;
    float money,tmoney;
    char temp_acc[13];
    cout<<"\n\n\t\t\tEnter Acc. no. :";
    gets(temp_acc);

    f1.open("data.dat",ios::binary|ios::in);

    while(!f1.eof())
    { f1.read((char*)&s1,sizeof(s1));
       if(f1.eof())
	break;
       if(strcmpi(temp_acc,s1.getacc_no())==0)
       {	tmoney=s1.get_amount();
		found='y';
	break;
       }

    }
  if(found=='y')
 {   if(t=='d')
    {
     cout<<"\n\n\t\t\tEnter the Amount to be deposited:";
     cin>>money;
  tmoney=tmoney+money;
  cout<<"\n\n\t\t\tReason:";
  gets(particulars);
  cout<<"\n\n\t\t\tRs."<<money<<" was added to your account";
  cout<<"\n\n\t\t\tYour account balance is "<<tmoney;
    }
    else if(t=='w')
    {
     cout<<"\n\n\t\t\tEnter the amount you want to withdraw:";
     cin>>money;
	if(money>tmoney)
	  { cout<<"\n\n\t\t\tInsufficient Balance";
	   sleep(2);
	    gotoxy(50,24);
	    cout<<"press any key to continue...";
	    getch();

	  }
	else
	  {tmoney=tmoney-money;
	  cout<<"\n\n\t\t\tEnter reason:";
	  gets(particulars);
	  cout<<"\n\n\t\t\tRs."<<money<<" was withdrawn from your account";
	  cout<<"\n\n\t\t\tAccount balance is :"<<tmoney;
	    gotoxy(50,24);
	    sleep(2);
	    cout<<"press any key to continue...";
	    getch();
	  }
      }
    strcpy(acc_no,s1.getacc_no());
    cdate(date[0],date[1],date[2]);
    type=t;
    amount=tmoney;
    t_balance=tmoney;
    f2.open("pass_data.dat",ios::binary|ios::app|ios::out);
    f2.write((char*)&p1,sizeof(p1));
    long pos;
    char found='n';
	while(!f1.eof())
	{	pos=f1.tellg();
		f1.read((char*)&s1,sizeof(s1));
		if(f1.eof())
			break;
		if(s1.getacc_no()==temp_acc)
			{	found='y';
				s1.amount_change(tmoney);
				f1.seekg(pos);
				f1.write((char*)&s1,sizeof(s1));
			}
	}
    }
	if (found=='n')
	{ cout<<" \n\n\t\t\tnot found ";  }
  }





void main()
{	clrscr();
cout<<"\n";
cout<<"               MMMMMMM   MMM\n";
cout<<"             MMMMMMMMM   MMMMM\n";
cout<<"            MMMMMMMMMM  MMMMMMMM\n";
cout<<"           MMM    MMMMMMMMMMMMMMMM\n ";
cout<<"           MM     MMMMMMMMMMMMMMMM\n";
cout<<"            MM   MMMMMMMMMMMMMMMMM\n";
cout<<"             MMMMMMMMMMMMMMMMMMMM\n";
cout<<"              MMMMMMMMMMMMMMMMM\n";
cout<<"    MMMMM      MMMMMMMMMMMMMM     MMMMMM\n";
cout<<"  MMMMMMMMMM     MMMMMMMMMM    MMMMMMMMMMM\n";
cout<<" MMMM     MMMMMM   MMMMMM   MMMMMMMMMMMMMMM\n";
cout<<" MMM      MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n";
cout<<" MMM MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n";
cout<<"  MMMMMMMMMMMMMMMMMMMM  MM   MMMMMMMMMMMMM\n";
cout<<"     MMMMMMMMMMMMMMM M  MMM     MMMMMMM\n";
cout<<"     MMMMMMMMMMMMMM  M   MMM      MMMMM\n";
cout<<"     MMMMMMMMMMMMM   MM   MM       MMMMM\n";
cout<<"    MMMMMMMMMMMMMM   MM    MM       MMMM\n";
cout<<"     MMMMMMMMMMMM    MMM    MMM     MMM\n";
cout<<"      MMMMMMMMMM     MMMM    MMMMMMMMM\n";
cout<<"        MMMMMM        MMMM     MMMMM\n";
cout<<"                       MMMMM\n";
cout<<"                         MM\n";
gotoxy(51,11);
sleep(2);
cout<<"WELCOME TO 4CLOVER BANK";
gotoxy(45,13);
sleep(1);
cout<<"\t   With you all the way";
gotoxy(50,24);
sleep(1);
cout<<"press any key to continue...";
getch();


	  clrscr();
	int ch=1,z=1,e=1;
	while(ch==1||ch==2)
	{       clrscr();
		cout<<"______________________________________________________________________________";
		gotoxy(30,3);
		cout<<"WELCOME TO 4CLOVER BANK\n";
		cout<<"______________________________________________________________________________";
		sleep(1);
		gotoxy(22,12);
		cout<<"1.Customer";
		cout<<"\t\t\t2.Employee";
		gotoxy(37,14);
		cout<<"3.Exit";
		gotoxy(30,18);
		cout<<"ENTER YOUR CHOICE : ";
		cin>>ch;
		clrscr();
		if(ch==1)
		{	while((z>=0)&&(z<=10))
		       {
			clrscr();
		cout<<"______________________________________________________________________________";
		gotoxy(30,3);
		cout<<"WELCOME CUSTOMER TO 4CLOVER BANK\n";
		cout<<"______________________________________________________________________________";

			sleep(2);
			gotoxy(15,6);
			cout<<"1. New Customer";
			cout<<"\t\t\t2. Customer Details";
			gotoxy(15,8);
			cout<<"3. Deposit/Withdraw Money";
			cout<<"\t\t\t4. View Transactions";
			gotoxy(15,10);
			cout<<"5. Correct details";
			cout<<"\t\t\t6. Delete Account";
			gotoxy(15,12);
			cout<<"7.FAQ's";
			cout<<"\t\t\t8. Issue Cards/Cheque";
			gotoxy(15,14);
			cout<<"9. About us";
			cout<<"\t\t\t10. View all ";
			gotoxy(33,16);
			cout<<"0.Back";
			gotoxy(30,18);
			cout<<"ENTER YOUR CHOICE<0-10> : ";
			cin>>z;

		if(z==1)
		   s1.file_write();
		else if(z==2)
		   s1.cus_search();
		else if(z==4)
		   p1.view_passbook();
		else if(z==5)
		   s1.file_modify();
		else if(z==6)
		   s1.file_delete();
		else if(z==9)
			about_us();
		else if(z==7)
			faq();
		else if(z==10)
		     s1.file_read();
		else if(z==0)
		 break;
		else if(z==3)
		{int u;
		cout<<"______________________________________________________________________________";
		gotoxy(30,3);
		cout<<"TRANSACTIONS PORTAL\n";
		cout<<"______________________________________________________________________________";
		gotoxy(15,12);
		cout<<" 1.Deposit";
		cout<<"\t\t\t2.Withdraw";
		gotoxy(33,13);
		cout<<"3.Back";
		gotoxy(30,15);
		cout<<"ENTER YOUR CHOICE :";
		cin>>u;
		clrscr();
		if(u==1)
		p1.add_withdraw('d');
		else if(u==2)
		p1.add_withdraw('w');
		}
		else if(z==8)
			{    clrscr();
				cout<<"---------------------------------ISSUE CORNER---------------------------------\n";
				cout<<"\n\n\n\t\t\tWhat do you want to issue?";
				cout<<"\n\n\t\t\t1.Debit card";
				cout<<"\n\t\t\t2.Credit card";
				cout<<"\n\t\t\t3.Cheque book";
				int r;
				cout<<"\n\n\t\t\tEnter your choice: ";
				cin>>r;
				if(r==1)
				       debit();
				else if(r==2)
					credit();
				else if(r==3)
					cheque();

				else
				{ clrscr();
				  gotoxy(35,20);
				  cout<<"\n\n\n\t\t\tINVALID CHOICE";


				}
		       }
		  }
	   }

      else if(ch==2)
	   {
		while((e>=0)&&(e<6))
		{ clrscr();
		cout<<"______________________________________________________________________________";
		gotoxy(30,3);
		cout<<"WELCOME EMPLOYEE TO 4CLOVER BANK\n";
		cout<<"______________________________________________________________________________";

			sleep(2);
			gotoxy(15,6);
			cout<<"1. Enter data";
			cout<<"\t\t\t2. See data";
			gotoxy(15,8);
			cout<<"3. Modify data";
			cout<<"\t\t\t4. Delete data";
			gotoxy(15,10);
			cout<<"5. Search data";
			cout<<"\t\t\t0. Back";
			gotoxy(30,13);
			cout<<"ENTER YOUR CHOICE<0-5> :";
			cin>>e;
		if(e==1)
			e_write();
		else if(e==2)
			e_read();
		else if(e==3)
		       e1.e_modify();
		else if(e==0)
		     break;
		else if(e==4)
		       e1.e_delete();
		else if(e==5)
		      e1.e_search();


		}
	   }
       else
       break;
      }
      getch();
}



