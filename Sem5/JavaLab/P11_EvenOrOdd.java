import java.io.*;
import java.lang.*;

public class P11_EvenOrOdd {
	public static void main( String[] args ){
        
        int num = Integer.parseInt(args[0]); 

        System.out.print("Your given number "+num+" is ");
        
        if ( (num&1) == 1 ) {
            System.out.println("ODD.");
        }
        else {
            System.out.println("EVEN.");
        }
		
	}

}