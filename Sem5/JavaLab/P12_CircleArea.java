import java.io.*;
import java.lang.*;

public class P12_CircleArea {
	public static void main( String[] args ){
        
        double radius = Double.parseDouble(args[0]); 
        double area = radius * radius * 3.1417 ;
        
        System.out.println("The area for your given circle with radius "+radius+" is "+area);
        
	}

}