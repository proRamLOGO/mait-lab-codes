import java.io.*;
import java.util.*;

public class P15_2DArray {
    public static void main( String[] args ) {

        int arr[][] = new int[4][4] ;
        
        arr[0][0] = 32 ;
        arr[1][0] = 500; arr[1][1] = 300 ;
        arr[2][0] = 39 ; arr[2][1] = 45 ; arr[2][2] = 600 ;

        System.out.println("Array Elements are as follows:");

        for ( int i = 0 ; i < 4 ; ++i ) {
            for ( int j = 0 ; j < 4 ; ++j )
                System.out.print(arr[i][j] + " ");
            System.out.println();
        }

    }

}