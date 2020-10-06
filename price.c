#include <stdio.h>
int main(){

float shirt,pant,shoes,belt,shocks,Total_Price,d10,v15,price;
printf("Enter 5 Items Price: ");
scanf("%f %f %f %f %f",&shirt,&pant,&shoes,&belt,&shocks);

Total_Price = shirt+pant+shoes+belt+shocks;
printf("Total Price = %.1f\n",Total_Price);
d10 = (Total_Price*10)/100;
printf("Discount = %.1f\n",d10);

v15 = (Total_Price*15)/100;
printf("Vat = %.1f\n",v15);

if(Total_Price>=10000){
    price = Total_Price-1000-d10;
    printf("Price With Discount and Gift = %.1f\n",price);
}else{
  price = Total_Price-d10;
  printf("Price With Discount = %.1f\n",price);
}

printf("Total Payable Price with Vat: %.1f",price+v15);

return 0;
}
