//Q.2 Write a Program to create a login mechanism by entering the right email & password. You can compare it with your desired email & password.
#include<stdio.h>
void main()
{
	char email[100]="admin@gmail.com";
	char password[100]="123456";
	
	char user_email[100], user_password[100];
	
	printf("enter your Email");
	gets(user_email);
	
	printf("enter tour Password");
	gets(user_password);
	
	if(strcmp(email,user_email)==0 && strcmp(password,user_password)==0)
	{
		printf("\n login sucessfully");
	}
	else
	{
		printf("\n login failed");
	}
}