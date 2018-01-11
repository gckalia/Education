#include <stdio.h> 
#include <string.h>

void LetterChanges(char * str) { 
  
  // code goes here
  int len = strlen(str);
  char out[len];
  int i;
  
  for(i = 0; i < len; i++ )
  {
      if(str[i] == 'Z')
        out[i] = 'A';
      else if (str[i] == 'z')
        out[i] = 'a';
      else if ( ( (str[i] >= 'A') && (str[i] < 'Z'))
             || ((str[i] >= 'a') && (str[i] < 'z'))
             )
             {
                 out[i] = (char)(((int)str[i])+1);
             }
        else
        {
            out[i] = str[i];
        }
        
        //Capatalize Vowels
        out[i] = out[i] == 'a' ? 'A' : out[i] == 'e' ? 'E' : out[i] == 'i' ? 'I': out[i] == 'o'? 'O': out[i] == 'u'? 'U': out[i];
  }
  
  out[i] = 0;
  printf("%s", out); 
            
}

int main(void) { 

  // disable stdout buffering
  setvbuf(stdout, NULL, _IONBF, 0);
  
  // keep this function call here
  LetterChanges(gets(stdin));
  return 0;
    
}
