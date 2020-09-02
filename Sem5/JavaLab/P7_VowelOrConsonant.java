import java.io.*;
import java.util.*;
import java.lang.*;

public class P7_VowelOrConsonant {

	public static void main( String[] args ){

        String s = args[0] ;
        s = s.toUpperCase() ;

        boolean vowel = false ;
        for ( int i = 0 ; i < s.length() ; ++i ) 
            if ( s.charAt(i)=='A' || s.charAt(i)=='E' || s.charAt(i)=='I' || s.charAt(i)=='O' || s.charAt(i)=='U' ) {
                vowel = true ;
                break ;
            }
        
        if (vowel) {
            System.out.println("Vowel in String.") ;
        } else {
            System.out.println("Consonants only in String.") ;
        }  
		
	}

}