import java.io.*;
import java.util.*;

public class P14_ArrayAverage {
    public static void main( String[] args ) {

        Scanner in = new Scanner( System.in );
        
        int n = 4;
        int arr[] = new int[n];
        int total_sum = 0;

        for ( int i = 0 ; i < n ; ++i ) {
            arr[i] = in.nextInt();
            total_sum += arr[i] ;
        }

        System.out.println("Average of array values is "+(total_sum/4.0)+"\n");

    }

}