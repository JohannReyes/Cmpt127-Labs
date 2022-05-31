// declaration of function implemented in reverse.c
void reverse( int arr[], unsigned int len ){

  int temp;

  if(len%2 != 0)
  {
    for(int i=0; i<(len-1)/2; i++)
    {
      temp = arr[i];
      arr[i] = arr[len-1-i];
      arr[len-1-i] = temp;
    }
  }
  else
  {
    for(int i=0; i<len/2; i++)
    {
      temp = arr[i];
      arr[i] = arr[len-i-1];
      arr[len-i-1] = temp;
    }
  }

}
