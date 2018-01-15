import java.util.*; 
import java.io.*;

class Main {  
  public static String SimpleSymbols(String str) { 
  
    // code goes here   
    /* Note: In Java the return type of a function and the 
       parameter types being passed are defined, so this return 
       call must match the return type of the function.
       You are free to modify the return type. */
    char curr_char = '0';
    char prev_char = '0';
    char next_char = '0';
    String out_str = "true";
    int i = 0;
    boolean parsing_done = false;
    boolean pattern_found = false;
    boolean wrong_pattern_found = false;
    
    if( Character.isLetterOrDigit(str.charAt(0)))
    {
        wrong_pattern_found = true;
    }
    do
    {
        if( str.length() < 3 )
        {
            parsing_done = true;
        }
        else
        {
            int last_index = str.length() - 1;
            if( i + 2 == last_index )
            {
                parsing_done = true;
                //pattern_found = false;
                //System.out.print("Check of last index" + i + last_index );    
                next_char = str.charAt(i+2);
                curr_char = str.charAt(i+1);
                prev_char = str.charAt(i);
            }
            else if( i+2 > last_index )
            {
                parsing_done = true;
            }   //pattern_found = false;
            else
            {
                next_char = str.charAt(i+2);
                curr_char = str.charAt(i+1);
                prev_char = str.charAt(i);
            }
            
            if(Character.isLetterOrDigit(curr_char))
            {
                if(prev_char == '+' && next_char == '+')
                {
                    i++;
                    pattern_found = true;
                }
                else
                {
                    wrong_pattern_found = true;
                    parsing_done = true;
                }
            }
            else
            {
                i++;
            }
        }
    } while( !parsing_done );
    
    if(wrong_pattern_found )
    {
        out_str = "false";
    } 
    else if( pattern_found )
        out_str = "true";
    else
        out_str = "false";
        
    return out_str;
    
  } 
  
  public static void main (String[] args) {  
    // keep this function call here     
    Scanner s = new Scanner(System.in);
    System.out.print(SimpleSymbols(s.nextLine())); 
  }   
  
}
