#include<iostream>


 using namespace std;

int main()
{


   int ordArray[10] = {21,22,23,24,25,26,27,28,29,30};


   for ( int i=0; i < 10; i++ )
   {

      if (ordArray[i]% 2 == 0 )
        ordArray[i] = -1;

   }

   for ( int j=0; j < 10; j++ )
      cout <<ordArray[j]<< endl;


   cin.get();

   return 0;

}
