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

        public Circle( double radius, double cx, double cy ) throws ArithmeticException {

            if ( radius < 0 ) {
                throw new ArithmeticException();
            }
            this.cx = cx ;
            this.cy = cy ;
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
        
        // Circle 1
        System.out.print("\nEnter radius of circle 1 (without units):       ") ;
        double radius1 = in.nextDouble();

        try {
            Circle circle1 = new Circle(radius1) ;
            System.out.println("\nRadius of circle 1 is : " + circle1.radius + " units") ;
            System.out.println("Ordinate of centr of circle 1 is : "+circle1.cx);
            System.out.println("Abcissa  of centr of circle 1 is : "+circle1.cy);
            System.out.println("Area of circle 1 is " + circle1.getArea() + " units") ;
            System.out.println("Circumfence of circle 1 is " + circle1.getCircumfence() + " units\n") ;
        }
        catch (ArithmeticException e) {
            System.out.println("Circle radius cannot be NEGATIVE !!");
        }
        
        // Circle 2
        System.out.print("\nEnter radius of circle 2 (without units):       ") ;
        double radius2 = in.nextDouble();
        System.out.print("Enter ordinate of circle 2 (without units):       ") ;
        double cx = in.nextDouble();
        System.out.print("Enter abcissa of circle 2 (without units):       ") ;
        double cy = in.nextDouble();

        try {
            Circle circle2 = new Circle(radius2,cx,cy) ;
            System.out.println("\nRadius of circle 2 is : " + circle2.radius + " units") ;
            System.out.println("Ordinate of centr of circle 2 is : "+circle2.cx);
            System.out.println("Abcissa  of centr of circle 2 is : "+circle2.cy);
            System.out.println("Area of circle 2 is " + circle2.getArea() + " units") ;
            System.out.println("Circumfence of circle 2 is " + circle2.getCircumfence() + " units\n") ;
        }
        catch (ArithmeticException e) {
            System.out.println("Circle radius cannot be NEGATIVE !!");
        }

    }

}