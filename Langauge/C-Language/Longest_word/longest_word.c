#include <stdio.h> 
#include <string.h>

typedef struct
{
    char words[100][100];
    int wordsizes[100];
    int NoOfWords;
} WordSplitter;

void SentenceSplit( char * sen, WordSplitter *word_splitter ) {
    int sentence_len = strlen(sen);
    int i;
    int word_index = 0, char_index = 0;
    
    //printf("sentence length = %d", sentence_len);
    for(i = 0; i <= sentence_len; i++ )
    {
        if( ( sen[i] >= 'A') && (sen[i] <= 'Z') //caps
         || ( sen[i] >= 'a') && (sen[i] <= 'z') //small
         ||  ( sen[i] >= '0') && (sen[i] <= '9') //num
          )
          {
             // printf("found ascii%c", sen[i]);
            word_splitter->words[word_index][char_index] = sen[i];
            char_index++;
          }
          else if( (sen[i] == ' ' ) || (sen[i] == ' ') || (sen[i] == '\0') || (sen[i] == '\n'))
          {
              //word deliiter found
             // printf("Delimiter found");
              word_splitter->wordsizes[word_index] = char_index;
              word_index++;
              char_index = 0;
          }
          else
          {
              //printf("Do Nothing");
          }
    }
    word_splitter->NoOfWords = word_index;
    
}
void LongestWord(char * sen) { 
  
  // code goes here  
  WordSplitter word_splitter;
  int longest_index = 0, longest_size = 0, i;
  
  SentenceSplit(sen, &word_splitter);
  
  for(i = 0; i < word_splitter.NoOfWords; i++)
  {
      if(word_splitter.wordsizes[i] > longest_size )
      {
          longest_size = word_splitter.wordsizes[i];
          longest_index = i;
      }
  }
  printf("%s", word_splitter.words[longest_index]); 

    
}


int main(void) { 

  // disable stdout buffering
  setvbuf(stdout, NULL, _IONBF, 0);
  
  // keep this function call here
  LongestWord(gets(stdin));
  return 0;
    
} 
