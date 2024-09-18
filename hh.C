#include<stdio.h>
int main()
{	
	char name[100];
	FILE *fp;
	fp=fopen("te.txt","w");
	scanf("%s",&name);

	fputs(name,fp);





}