#include <stdio.h> 

void FirstReverse(char * str) { 
  
  // code goes here  
  int len = strlen(str);
  int i;
  char res[len];
  
  for(i=0;i<len;i++)
  {
      res[i] = str[len-1-i];
  }
  
  printf("%s", res); 
            
}

int main(void) { 

  // disable stdout buffering
  setvbuf(stdout, NULL, _IONBF, 0);
  
  // keep this function call here
  FirstReverse(gets(stdin));
  return 0;
    
} 
