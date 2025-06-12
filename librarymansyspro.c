#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct staff{
	char name[20];
	long int id;
};
struct libmem{
	char name[20];
	long int id;
};
struct books{
	char name[20];
	long int id;
};
void signinsignup(){
	FILE *fptr;
    fptr = fopen("F:\\signs.txt", "w+"); 
    if (fptr == NULL)
  {
    printf("Error opening file!!");
  }
  printf("Welcome to E-library\n\nI have always imagined that Paradise will be a kind of a Library.\n\t        Jorge Luis Borges\n         (1899-1986. Argentine writer) \n\n");
  printf("When in doubt go to the library.\n\t J.K. Rowling\n\n");
  printf("Bad libraries build collections, good libraries build services, great libraries build communities.\n\t         R. David Lankes \n");
  
  printf("Email: \nPassword: \n");

}
int main()
{
	signinsignup();
}
