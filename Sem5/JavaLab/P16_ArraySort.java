import java.util.*;

public class P16_ArraySort {
    public static void main( String[] args ) {

        Scanner in = new Scanner( System.in );
        
        int n = in.nextInt();
        int arr[] = new int[n];

        for ( int i = 0 ; i < n ; ++i ) {
            arr[i] = in.nextInt();
        }

        Arrays.sort(arr);

        for ( int i = 0 ; i < n ; ++i ) {
            System.out.print(arr[i] + " "); 
        }

        System.out.println();

    }

}