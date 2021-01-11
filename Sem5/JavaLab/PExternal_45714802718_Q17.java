/************************************************************

Submitted By:-
Name: Shubh Bansal
Roll No.: 45714802718
Group: 5C9
Batch: 2018-22
Stream: CSE
Dated: January 11, 2021

Submitted for "5C789 END TERM PRACTICAL"

Question No. attempted : Q17

Problem Statement: Write a java program to implement the Vignere cipher. Use the Key "MELON" to encrypt any sentence and show encryption and decryption.

Assumptions: We assume that the input has to be taken from user using Scanner class. We assume that the cipher will work for both lowercase and uppercase alphabets and will ignore non-alphabetic characters.

************************************************************/

import java.util.*;

public class PExternal_45714802718_Q17 {

    public static String vigenereCipher( String sentence, String key ) {

        String cipherWord;   
        StringBuilder cipher = new StringBuilder();

        for ( int i = 0 ; i < sentence.length() ; ++i ) {
            
            if ( 'A' <= sentence.charAt(i) &&  sentence.charAt(i) <= 'Z') {
                
                int val = ((sentence.charAt(i)-'A') + (key.charAt(i%key.length())-'A') )% 26 ;
                cipher.append((char)(val+65)) ;
            
            } else if ( 'a' <= sentence.charAt(i) &&  sentence.charAt(i) <= 'z') {
                
                int val = ((sentence.charAt(i)-'a') + (key.charAt(i%key.length())-'A') )% 26 ;
                cipher.append((char)(val+97)) ;
            
            } else {

                cipher.append(sentence.charAt(i)) ;
            
            }
        }

        cipherWord = String.valueOf(cipher);
        return cipherWord;

    }
	public static void main( String[] args ){
        
        Scanner in = new Scanner( System.in );
        
        String key, sentence, cipherWord;   

        System.out.print("\nGive the sentence you want to cipher using Vigenere Cipher Technique. Press 'ENTER' after you are done. Numbers and Symbols will be IGNORED!\nKEY used will be \"MELON\"\n> ");
        
        sentence = in.nextLine();
        key = "MELON";
        
        cipherWord = vigenereCipher(sentence,key);

        System.out.println("\nCipher for your given sentence:\n\""+sentence+"\"\naccording to key "+key+" is:\n\""+ cipherWord + "\"\n");
        
        in.close();

	}

}