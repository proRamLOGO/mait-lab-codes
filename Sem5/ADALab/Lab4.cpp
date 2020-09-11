#include<iostream>
#include<math.h>

using namespace std ;

int linear_search( int arr[], int key, int n ) {

    for ( int i = 0 ; i < n ; ++i )
        if ( arr[i]==key ) // Value FOUND
            return i ;
   
    return -1 ; // Value NOT FOUND

}

int binary_search( int arr[], int key, int lo, int hi ) {

    // Check array for sorted.
    for ( int i = 1 ; i < n ; ++i )
        if ( arr[i]<arr[i-1] )
            return -2 ; // Array NOT SORTED

    while( lo <= hi ) {

        int mid = (lo+hi)>>1;

        if ( arr[mid]==key )
            return mid ; // Value FOUND
        else if ( arr[mid] > key )
            hi = mid-1 ; //Search in Left Interval
        else 
            lo = mid+1 ; //Search in Right Interval

    }

    return -1 ; // Value NOT FOUND

}

int ternary_search ( int arr[], int key, int lo, int hi ) {

    // Check array for sorted.
    for ( int i = 1 ; i < hi-lo+1 ; ++i )
        if ( arr[i]<arr[i-1] )
            return -2 ; // Array NOT SORTED

    while ( lo <= hi ) {

        int m1 = lo + ( hi-lo )/3 ,
            m2 = hi - ( hi-lo )/3 ;
        
        if ( arr[m1] == key )
            return m1 ; // Value FOUND
        if ( arr[m2] == key )
            return m2 ; // Value FOUND
        
        if ( key < arr[m1] )
            hi = m1-1; //Search in Left Interval
        if ( key > arr[m2] )
            lo = m1+1; //Search in Right Interval
        else
            lo = m1+1, hi = m1-1; //Search in Central Interval

    }

    return -1 ; // Value NOT FOUND

}

int jump_search ( int arr[], int key, int n ) {

    // Check array for sorted.
    for ( int i = 1 ; i < n ; ++i )
        if ( arr[i]<arr[i-1] )
            return -2 ; // Array NOT SORTED

    int jump = sqrt(n), idx=0;
    
    // Perform jumps of sqrt(n) size
    for ( idx = 0 ; idx < n && arr[idx]<key ; idx+=jump );  
    
    int left  = max(0,idx-jump), // since idx-jump might be negative
        right = min(idx,n-1) ; // since i may exceed than n    
    
    return binary_search(arr,key,left,right) ; // Value NOT FOUND

}

int interplation_search( int arr[], int key, int lo, int hi ) {

    // Check array for sorted.
    for ( int i = 1 ; i < n ; ++i )
        if ( arr[i]<arr[i-1] )
            return -2 ; // Array NOT SORTED

    while ( hi >= lo && arr[lo]<=key && arr[hi]>=key ) {

        if ( lo==hi ) 
            return (arr[lo]==key) ? lo : -1 ; // Last Index Compared

        int mid = lo + ( (key-arr[lo]) * ( (hi-lo)/(arr[hi]-arr[lo]) ) ) ;

        if ( arr[mid]==key )
            return mid ; // Value FOUND
        else if ( arr[mid] > key )
            hi = mid-1 ; //Search in Left Interval
        else 
            lo = mid+1 ; //Search in Right Interval

    }

    return -1 ; // Value NOT FOUND

}

int exponential_search( int arr[], int key, int n ) {

    // Check array for sorted.
    for ( int i = 1 ; i < n ; ++i )
        if ( arr[i]<arr[i-1] )
            return -2 ; // Array NOT SORTED
    
    int factor;
    for ( factor = 1 ; factor < n && arr[factor]<key ; factor<<=1 );
    
    int left  = factor>>1 , 
        right = min(factor,n-1) ; // since factor may exceed than n    
    
    return binary_search(arr,key,left,right) ; // Value NOT FOUND

}

int fibonacci_binarySearch( int arr[], int key, int lo, int hi ) {

    int ans = -1 ;

    while( lo <= hi ) {

        int mid = (lo+hi)>>1;

        if ( arr[mid]==key )
            return mid ; // Value FOUND
        else if ( arr[mid] >= key )
            ans=mid, hi = mid-1 ; //Search in Left Interval + Record it
        else 
            lo = mid+1 ; //Search in Right Interval

    }

    return ans ;

}

int fibonacci_search( int arr[], int key, int n ) {

    // Check array for sorted.
    for ( int i = 1 ; i < n ; ++i )
        if ( arr[i]<arr[i-1] )
            return -2 ; // Array NOT SORTED
    
    // Create a fib array
    int fib[n+1] = {0} ;
    fib[1] = fib[2] = 1 ;
    for ( int i = 3 ; i<= n ; ++i )
        fib[i] = fib[i-1] + fib[i-2] ;
    // Fib array created

    int lo=0, hi=n-1 ;

    while ( lo <= hi ) {

        if (hi==lo)
            return (arr[lo]==key) ? lo : -1 ; // Last Index Compared

        int m = fibonacci_binarySearch(fib,hi-lo+1,0,hi-lo+1) ; // Always >= 2
        int mid = lo + fib[m-2] ;

        if ( arr[mid]==key )
            return mid ; // Value FOUND
        else if ( arr[mid] >= key )
            hi = mid-1 ; //Search in Left Interval
        else 
            lo = mid+1 ; //Search in Right Interval

    }

    return -1 ; // Value NOT FOUND

}

int main() {

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("Lab4_output.txt","w",stdout);
    #endif

    // Driver program to be written.    

    return 0;

}
