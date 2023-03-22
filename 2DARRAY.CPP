#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a[3][3],mul=1,i,j;
printf("enterr matrix of a:");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&a[i][j]);
}
}
for(i=0;i<3;i++)
{
mul=1;
for(j=0;j<3;j++)
{
mul=mul*a[i][j];
}
printf("\nmultiplication of each row:%d",mul);
}
getch();
}