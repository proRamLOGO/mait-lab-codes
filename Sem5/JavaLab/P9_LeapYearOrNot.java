import java.io.*;
import java.lang.*;

public class P9_LeapYearOrNot {
	public static void main( String[] args ){
        
        int year = Integer.parseInt(args[0]); 
        boolean isLeap = ( (year%4==0 && year%100!=0) || year%400==0 );

        System.out.print(year+" is ");
        if (isLeap) {
            System.out.println("a leap year.");
        } else {
            System.out.println("NOT a leap year.");
        }
		
	}

}