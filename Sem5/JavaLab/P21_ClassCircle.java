import java.util.*;

public class P21_ClassCircle {

    public static class Circle {

        public double radius, area, circumfence, cx, cy ;

        public Circle( double radius) throws ArithmeticException {

            if ( radius < 0 ) {
                throw new ArithmeticException();
            }
            this.cx = 0 ;
            this.cy = 0 ;
            this.radius = radius;
            this.area = 3.1417 * radius * radius ; 
            this.circumfence = 2 * 3.1417 * radius ;
        }

        public double getArea() {
            return this.area ;
        }

        public double getCircumfence() {
            return this.circumfence ;
        }

    }

    public static void main( String[] args ) {

        Scanner in = new Scanner( System.in );
        
        // Circle
        System.out.print("\nEnter radius of circle (without units):       ") ;
        double radius = in.nextDouble();

        try {
            Circle circle1 = new Circle(radius) ;
            System.out.println("\nRadius of circle is : " + circle1.radius + " units") ;
            System.out.println("Ordinate of centr of circle is : "+circle1.cx);
            System.out.println("Abcissa  of centr of circle is : "+circle1.cy);
            System.out.println("Area of circle is " + circle1.getArea() + " units") ;
            System.out.println("Circumfence of circle is " + circle1.getCircumfence() + " units\n") ;
        }
        catch (ArithmeticException e) {
            System.out.println("Circle radius cannot be NEGATIVE !!");
        }

    }

}