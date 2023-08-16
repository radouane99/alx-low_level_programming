#include <stdio.h>
#include "main.h"
/**
* Positive_or_negative - converts day of month to day of year, without accounting
* for leap year
* @month: month in number format
* @day: day of month
* Return: day of year
*/
void positive_or_negative(int i){
if (i>0){
printf("%d is positive \n",i);
}
else if (i==0){
printf("%d is zero \n",i);
}
else
{ 
printf("%d is negative \n",i);
}
}
