import java.util.*;

public class P20_ClassCircle {

    public static class Circle {

        public double radius, cx, cy ;

        public Circle() {
            this.radius = 100;
            this.cx = 0;
            this.cy = 0;
        }

    }

    public static void main( String[] args ) {

        Circle circle = new Circle();
        System.out.println("Radius of circle is : "+circle.radius);
        System.out.println("Ordinate of centr of circle is : "+circle.cx);
        System.out.println("Abcissa  of centr of circle is : "+circle.cy);

    }

}