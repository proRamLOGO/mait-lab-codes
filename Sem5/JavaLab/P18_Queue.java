import java.util.*;
import java.io.*;

public class P18_Queue {

    public static void main( String[] args ) {

        Scanner in = new Scanner( System.in );

        Queue<Double> q = new LinkedList<>() ;

        while (true) {
            System.out.println();
            System.out.print("1. Insert\n2. Remove\n3. Access Front\n4. Exit\nChoice:     ");
            int choice = in.nextInt() ;

            if ( choice==1 ) {
                Double val = in.nextDouble();
                q.add(val);
                System.out.println("Inserted "+val+" successfully");
            } else if ( choice==2 ) {
                System.out.println("Removed "+q.poll()+" successfully");
            } else if ( choice==3 ) {
                System.out.println("Front = "+q.peek());
            } else if ( choice==4 ) {
                break;
            } else {
                System.out.println("Invalid Option!!");
            }
            
        }
        System.out.println() ;

    }

}