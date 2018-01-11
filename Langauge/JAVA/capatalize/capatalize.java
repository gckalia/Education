import java.util.*; 
import java.io.*;

class Main {  
  public static String LetterCapitalize(String str) { 
  
    // code goes here   
    /* Note: In Java the return type of a function and the 
       parameter types being passed are defined, so this return 
       call must match the return type of the function.
       You are free to modify the return type. */
      
      int index = 0;
      String out_str = str.substring(0, 1).toUpperCase() + str.substring(1);
      //System.out.print("Index"+ word_index);
      do
      {
          if( index < out_str.length())
          {
            index = out_str.indexOf(" ", index);
          
              //System.out.print("Next Index "+ index + "\n");
              if( index != -1)
              {
                 //extract the first letter of the word and capatalize
                 int word_index = index + 1;
                 if( word_index < out_str.length() )
                 {
                     String capatalize = out_str.substring(word_index, word_index+1).toUpperCase();
                     out_str = out_str.substring(0, word_index) + capatalize + out_str.substring(word_index+1);
                      //System.out.print("word Index: " + word_index + "\n");
                     // System.out.print("Out: " + out_str + "\n");
                      //Search from next word
                      index++;
                 }
                 else
                 {
                     index = -1;
                 }
              }
          }
          else
          {
              index = -1;
          }
          //System.out.print("Index "+ index + "\n");
      } while(index != -1 );// word_index > -1 );
       
    return out_str;
    
  } 
  
  public static void main (String[] args) {  
    // keep this function call here     
    Scanner s = new Scanner(System.in);
    System.out.print(LetterCapitalize(s.nextLine())); 
  }   
  
}
