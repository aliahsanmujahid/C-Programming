#include<stdio.h>
#include<math.h>
#include<conio.h>

int get_1st_weekday(int year){

int day;
day = (((year-1)*365) + ((year - 1)/4) - ((year-1)/100)+((year)/400)+1) %7;

return day;

}


int calender(int year){

int month,daysInMonth,weekDay=0,staringDay,day;

char *months[] = {"January","February","March","April","May","June","July","August","September","October","November","December" };
int monthDay[] = {31,28,31,30,31,30,31,30,31,30,31,30};

if(year%4==0&&year%100!=0||year%400==0){
    monthDay[1] = 29;

}
staringDay = get_1st_weekday(year);
for(month=0;month<12;month++){

    daysInMonth=monthDay[month];
    printf("\n\n-----------------%s[%d]-----------------\n",months[month],year);
    printf("   Sun  Mon  Tue  Wed  Thurs  Fri  Sat\n");

    for(weekDay=0;weekDay<staringDay;weekDay++){

    printf("     ");
    }
    for(day=1;day<=daysInMonth;day++){

     printf("%5d",day);

     if(++weekDay>6){
       printf("\n");
       weekDay=0;
     }
     staringDay=weekDay;
}

}

}
int fm(int date, int month, int year) {
int fmonth, leap;
if ((year % 100 == 0) && (year % 400 != 0))
leap = 0;
   else if (year % 4 == 0)
  leap = 1;
else
  leap = 0;

  fmonth = 3 + (2 - leap) * ((month + 2) / (2 * month))+ (5 * month + month / 9) / 2;

 fmonth = fmonth % 7;

  return fmonth;
}
int day_of_week(int date, int month, int year) {

   int dayOfWeek;
   int YY = year % 100;
   int century = year / 100;

   printf("\n    Date: %d/%d/%d \n", date, month, year);

   dayOfWeek = 1.25 * YY + fm(date, month, year) + date - 2 * (century % 4);

   //remainder on division by 7
   dayOfWeek = dayOfWeek % 7;

   switch (dayOfWeek) {
      case 0:
         printf("    Day = Saturday");
         break;
      case 1:
         printf("    Day = Sunday");
         break;
      case 2:
         printf("    Day = Monday");
         break;
      case 3:
         printf("    Day = Tuesday");
         break;
      case 4:
         printf("    Day = Wednesday");
         break;
      case 5:
         printf("    Day = Thursday");
         break;
      case 6:
         printf("    Day = Friday");
         break;
      default:
         printf("    Incorrect data");
   }
   return 0;
}

int main(){
    while(1){
int choice,year,month,date;
system("Color 37");
printf("\n\n");
printf("    1. For Day.\n");
printf("    2. For Calender.\n");
printf("    Enter Choice: ");
scanf("%d",&choice);
printf("\n\n");
switch(choice){

case 1:
    printf("\n    Enter the Year/Month/Date: ");
    scanf("%d%d%d", &year,&month,&date);

    day_of_week(date,month, year);
    break;
case 2:
    printf("    Enter Year: ");
    scanf("%d",&year);
    calender(year);
break;
default:

    printf("Invalid Choice");

}

    }
getch();

}
