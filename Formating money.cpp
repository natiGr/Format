//============================================================================
// Name        : Formating.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <stdio.h>   //   * printf *
#include <locale.h>
#include<iostream>
#include<string>
#include <stdio.h>
#include <stdlib.h>
#include <iomanip>

using namespace std;

int main ()
{
double money;
cout<<"enter money"<<endl;
cin>>money;
  setlocale (LC_MONETARY,"");
  struct lconv * lc;
 lc=localeconv();



 printf ("Local Currency Symbol is:%s\n",lc->currency_symbol);
 printf ("The symbol is:%s\n",lc->int_curr_symbol);
 printf (" All sum is :  %4.2f %s\n",money,lc->currency_symbol);




	//long double mon = 123.45; // or std::string mon = "123.45";



  return 0;
}



