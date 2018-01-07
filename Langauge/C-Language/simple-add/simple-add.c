#include <stdio.h> 

void SimpleAdding(int num[]) { 
  
  // code goes here  
  int res = 0;
  int in = num;
  int i;
  
  if(num < 0 || num > 1000 )
    printf("Out of bounds");
  else
  {
      for( i = 0; i <= in; i++ )
      {
          res += i;
      }
      
      printf("%d", res); 
  }          
}

int main(void) { 

  // disable stdout buffering
  setvbuf(stdout, NULL, _IONBF, 0);
  
  // keep this function call here
  SimpleAdding(gets(stdin));
  return 0;
    
}
