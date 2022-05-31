#include <stdio.h>
// declaration of function implemented in scrambled.c
int scrambled( unsigned int arr1[], unsigned int arr2[], unsigned int len ){
  
  int num =1, arrCheck[100]={0}; //pre sets array

  if(len>0)
  {
    for(int i=0; i<len; i++)
    {
      arrCheck[arr1[i]] += 1;
    }

    for(int i=0; i<len; i++)
    {
      arrCheck[arr2[i]] -=1;
    }

    for(int i=0; i<len; i++)
    {
      if(arrCheck[arr1[i]] != 0)
      {
        num = 0;
      }
    }
  }

  return num;
}
 
