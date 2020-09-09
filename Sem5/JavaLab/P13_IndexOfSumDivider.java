import java.io.*;
import java.util.*;

public class P13_IndexOfSumDivider {
    public static void main( String[] args ) {

        Scanner in = new Scanner( System.in );
        
        int n = in.nextInt();
        int arr[] = new int[n];
        int total_sum = 0, temp_sum = 0 ;

        for ( int i = 0; i < n; ++i ) {
            arr[i] = in.nextInt();
            total_sum += arr[i] ;
        }
        
        boolean found = false ;
        for ( int i = 0; i < n; ++i ) {
            temp_sum += arr[i] ;
            if ( temp_sum == total_sum/2) {
                found = true ;
                System.out.println("Sum of elements before and after index "+i+" have same sum.\n");
                break ;
            }
        }

        if ( !found ) 
            System.out.println("No such index where sum of elements before and after it have same sum.\n");       

    }

}