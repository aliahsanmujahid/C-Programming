#include <stdio.h>
int main(){

float shirt,pant,shoes,belt,shocks,Total_Price,discount,vat,price;
printf("Enter 5 Items Price: ");
scanf("%f %f %f %f %f",&shirt,&pant,&shoes,&belt,&shocks);

Total_Price = shirt+pant+shoes+belt+shocks;

discount = (Total_Price*10)/100;


vat = (Total_Price*15)/100;


if(Total_Price>=10000){
    price = Total_Price-1000-discount;

}else{
  price = Total_Price-discount;

}

printf("Total Price Is: %.1f",price+discount);

}
