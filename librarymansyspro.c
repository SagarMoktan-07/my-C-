#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void signinsignup();
void login();
void createnewid();

struct staff{
	char name[20];
	long int empid;
	long long int num;
	char pass[20];
};
struct libmem{
	char name[20];
	long int bid;
};
struct books{
	char name[20];
	long int bid;
};


int main()
{
	signinsignup();
	return 0;
}


void signinsignup()
{
	int ch1=0;
	long long int num1=0;
	FILE *fptr;
    fptr=fopen("F:\\signs.txt", "w+"); 
    if (fptr == NULL)
  {
    printf("Error opening file!!");
  }
  printf("Welcome to E-library\n\nI have always imagined that Paradise will be a kind of a Library.\n\t        Jorge Luis Borges\n         (1899-1986. Argentine writer) \n\n");
  printf("When in doubt go to the library.\n\t J.K. Rowling\n\n");
  printf("Bad libraries build collections, good libraries build services, great libraries build communities.\n\t         R. David Lankes \n");
  printf("1.Login \n2.Create a new id \n");
  printf("Enter your choice, any other number or charecter will result in the termination of the program.\n");
  scanf("%d",&ch1);
  if(ch1==1)
  {
  	login();
  }
  else if(ch1==2)
  {
  	createnewid();
  }
  else 
  {
	exit(0);
  }

}
void login()
{

}
void createnewid()
{
	int i=0,loweral=0,upperal=0,special=0,numbs=0;
    struct staff a;
	FILE *fp;
	fp=fopen("F:\\newmember.txt","a+");
	if(fp==NULL)
	{
        printf("Error opening file!");
    }
	printf("Enter your name: ");
  	scanf("%d",a.name);
  	fflush(stdin);
  	printf("Enter your employid: ");
  	scanf("%ld",&a.empid);
  	printf("Enter your number ");
  	scanf("%lld",&a.num);
  	fflush(stdin);
  	again:
  	printf("Enter a password:(Your password must contain A-Z,a-z,0-9,any other special character.)\n ");
  	scanf("%s",&a.pass);
    for(i=0;a.pass[i]!='\0';i++)
    {
    	if(a.pass[i]>=97&&a.pass[i]<=122)
    	{
    		loweral++;
		}
		else if(a.pass[i]<=90&&a.pass[i]>=65)
		{
		    upperal++;
		}
		else if(a.pass[i]>=48&&a.pass[i]<=57)
		{
			numbs++;
		}
		else 
		{
			special++;
		}
	}
	if(loweral==0||upperal==0||numbs==0||special==0)
	{
		printf("Please try again your password is not strong.\n");
		goto again;
	}
	fwrite(&a,sizeof(a),1,fp);
}
