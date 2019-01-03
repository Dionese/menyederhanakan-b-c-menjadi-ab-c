#include<stdio.h>
int pecahan();
int main()
{
pecahan();
}
int pecahan()
{
int a,b,l,t;
printf("Program Menyederhanakan bilangan pecahan\n\n);
printf("Masukan Pembilang :");
scanf("%d",&a);
printf("Masukan Penyebut :");
scanf("%d",&b);
t=a/b;
l=a%b;
if(a%b==0)
printf("bilangan (%d/%d)\nDisederhanakan menjadi%d"a,b,t);
else if(a%b !=0)
printf("Bilangan (%d/%d)\nDisederhanakan menjadi(%d %d %d)",a,b,t,l,b);

}