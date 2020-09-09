import java.util.*;

public class P19_MethodOverloading {

    public static double area( double radius ) {
        // Area of Circle
        return 3.1417 * radius * radius ;
    }
    public static double area( double side1, double side2, double side3 ) {
        // Area of Triangle
        double s = (side1 + side2 + side3)/2 ;
        return Math.sqrt( s*(s-side1)*(s-side2)*(s-side3)) ;
    }
    public static double area( double length, double width ) {
        // Area of Rectangle
        return length * width ;
    }
    public static void main( String[] args ) {

        Scanner in = new Scanner( System.in );

        double radius, s1, s2, s3, length, width;

        // Rectange
        System.out.println("\nEnter dimensions of Rectangle without units:");
        length = in.nextDouble();
        width  = in.nextDouble();
        System.out.println("Area of Rectangle is "+area(length, width)+" units.");

        // Triangle
        System.out.println("\nEnter the sides of Triangle without units:");
        s1 = in.nextDouble();
        s2 = in.nextDouble();
        s3 = in.nextDouble();
        System.out.println("Area of Rectangle is "+area(s1,s2,s3)+" units.");

        // Circle
        System.out.println("\nEnter the radius of Circle without units:");
        radius = in.nextDouble();
        System.out.println("Area of Rectangle is "+area(radius)+" units.\n");


    }

}