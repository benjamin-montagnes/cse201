// put these two lines at the top of the file
#include <cstdlib>
#include <ctime>

#include <iostream>

int main()
{
   // initialize the random number generator
   // (you only need to do this once)
   srand(time(NULL));

   double final=0;
   // r below will be between 0.0 and 1.0
   for (int a=0; a<100000; a+=1){
       float x = (float) rand() / RAND_MAX;
       float y = (float) rand() / RAND_MAX;
       if ((x*x + y*y) <=1) final +=1;
   }
   std::cout << 4*(final/100000) << std::endl;
   return 0;
}