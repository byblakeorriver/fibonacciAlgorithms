#include <iostream>
#include "Fibv1.h"
#include "Fibv2.h"
#include "Fibv3.h"
using namespace std;

int main()
{
   int n = 0;
   int alg=0;
   long long result = 0;
   cout << "Please Enter a number n to find the nth number in the fibonacci sequence: "<< endl;
   cin >> n;
   cout << "Now which algorithm would you like to use?"<< endl;
   cin >> alg;
   if(alg==1)
   {
		result = fibv1(n);
   }
   if(alg==2)
   {
		result = fibv2(n);
   }
   if(alg==3)
   {
		result = fibv3(n);
   }

   cout << "The nth fibonacci number is: "<< endl;
   cout << result;
   return 0;
}

