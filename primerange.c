#include <stdio.h>
#include <conio.h>
void main()
{
int num1, num2, i, j, flag, temp, count = 0;
printf("Enter the value of num1 and num2 \n");
scanf("%d %d", &num1, &num2);
if (num2 < 2)
{
printf("0");
exit(0);
}
temp = num1;
if ( num1 % 2 == 0)
{
num1++;
}
for (i = num1; i <= num2; i = i + 2)
{
flag = 0;
for (j = 2; j <= i / 2; j++)
{
if ((i % j) == 0)
{
flag = 1;
break;
}
}
if (flag == 0)
{
count++;
}
}
printf("%d", count);
getch();
}
