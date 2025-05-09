#include <stdio.h>
int main()
{
int year=2000;
while(year<=2050)
{year++;
if(year%4==0&&year%100!=0||year%400==0)
{printf("%dÊÇÈòÄê",year);}
}
return 0;
}
