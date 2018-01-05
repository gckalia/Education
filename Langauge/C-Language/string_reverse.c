#include <stdio.h>
#include <string.h>

void FirstReverse(char * str ) { 
  
  // code goes here  
  int len = strlen(str);
  int i;
  char res[len+1];
  
  for(i=0;i<len;i++)
  {
      res[i] = str[len-1-i];
  }
  res[i] = 0;
  
  printf("%s", res); 
            
}


int main(void) { 

  // disable stdout buffering
  setvbuf(stdout, NULL, _IONBF, 0);
  
  // keep this function call here
  FirstReverse(gets(stdin));
  return 0;
    
}
