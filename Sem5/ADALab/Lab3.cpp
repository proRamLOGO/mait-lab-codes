#include<iostream>
#include<random>

using namespace std ;

void countingSort( int arr[], int n ) {

    int max_element = 0 ;
    for ( int i = 0 ; i < n ; ++i )
        max_element = max(max_element, arr[i]);
    
    const int N = max_element+1 ;
    int *freq = new int[N]{0};

    for ( int i = 0 ; i < n ; ++i )
        ++freq[arr[i]] ;
    
    int k = 0 ;
    for ( int i = 0 ; i < N ; ++i ) 
        while ( freq[i]-- ) 
            arr[k++] = i ;

}

void radixCountSort(int arr[], int n, int t ) { 
    
    int ans[n], count[10] = {0}; 
  
    for ( int i = 0 ; i < n ; ++i ) 
        ++count[ (arr[i]/t)%10 ]; 
  
    for ( int i = 1 ; i < 10 ; ++i ) 
        count[i] += count[i - 1]; 
  
    for ( int i = n-1; i > -1 ; --i ) { 
        ans[count[ (arr[i]/t)%10 ] - 1] = arr[i]; 
        count[ (arr[i]/t)%10 ]--; 
    } 

    for ( int i = 0 ; i < n ; ++i ) 
        arr[i] = ans[i]; 
} 

void radixSort( int arr[], int n ) {

    int max_element = 0 ;
    for ( int i = 0 ; i < n ; ++i )
        max_element = max(max_element, arr[i]);

    for ( int i = 1; max_element/i > 0; i *= 10 ) 
        radixCountSort(arr, n, i);
}

int shellSort(int arr[], int n) { 
    
    for ( int gap = n>>1 ; gap ; gap>>=1 ) 
        for (int i = gap; i < n; ++i ) { 
            int temp = arr[i], j = i ;             
            for ( j = i ; j>=gap and arr[j-gap]>temp ; j-=gap )  
                arr[j] = arr[j - gap]; 
            arr[j] = temp; 
        } 
        
    return 0; 
} 

int main() {

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("Lab3_output.txt","w",stdout);
    #endif

    const int N = 10000;

    for ( int i = 1 ; i <= 5 ; ++i ) {

        const int n = N*i;
        int best[n], worst[n], average[n];

        cout << "\nn = " << n << endl ;

        // ----------------------------------------------------------------

        // 1. Counting Sort
        cout << "\nCounting Sort\n" ;

        for ( int i = 0 ; i < n ; ++i ) {
            best[i] = 1, average[i] = 10000, worst[i] = rand()%n+1 ;
        }
        
        clock_t start,end ; 
        start = clock() ;

        // Best case 
        start = clock() ;
        countingSort(best,n) ;
        end = clock() ;
        printf("Time for Best Case:    %.8f secs\n", (double(end - start)/double(CLOCKS_PER_SEC))) ; 

        // averag case 
        start = clock() ;
        countingSort(average,n) ;
        end = clock() ;
        printf("Time for Average Case: %.8f secs\n", (double(end - start)/double(CLOCKS_PER_SEC))) ; 

        // worst case 
        start = clock() ;
        countingSort(worst,n) ;
        end = clock() ;
        printf("Time for Worst Case:   %.8f secs\n", (double(end - start)/double(CLOCKS_PER_SEC))) ; 

        // ----------------------------------------------------------------

        // 2. Radix Sort
        cout << "\nRadix Sort\n" ;

        for ( int i = 0 ; i < n ; ++i ) {
            best[i] = 1, worst[i] = 10000, average[i] = rand()%n+1 ;
        }
        
        // Best case 
        start = clock() ;
        radixSort(best,n) ;
        end = clock() ;
        printf("Time for Best Case:    %.8f secs\n", (double(end - start)/double(CLOCKS_PER_SEC))) ; 

        // averag case 
        start = clock() ;
        radixSort(average,n) ;
        end = clock() ;
        printf("Time for Average Case: %.8f secs\n", (double(end - start)/double(CLOCKS_PER_SEC))) ; 

        // worst case 
        start = clock() ;
        radixSort(worst,n) ;
        end = clock() ;
        printf("Time for Worst Case:   %.8f secs\n", (double(end - start)/double(CLOCKS_PER_SEC))) ; 

        // ----------------------------------------------------------------

        // 3. Shell Sort
        cout << "\nShell Sort\n" ;
        
        for ( int i = 0 ; i < n ; ++i ) {
            best[i] = 1, worst[i] = 10000, average[i] = rand()%n+1 ;
        }

        // Best case 
        start = clock() ;
        shellSort(best,n) ;
        end = clock() ;
        printf("Time for Best Case:    %.8f secs\n", (double(end - start)/double(CLOCKS_PER_SEC))) ; 

        // averag case 
        start = clock() ;
        shellSort(average,n) ;
        end = clock() ;
        printf("Time for Average Case: %.8f secs\n", (double(end - start)/double(CLOCKS_PER_SEC))) ; 

        // worst case 
        start = clock() ;
        shellSort(worst,n) ;
        end = clock() ;
        printf("Time for Worst Case:   %.8f secs\n", (double(end - start)/double(CLOCKS_PER_SEC))) ; 

        cout << "\n----------------------------------------------------------------" << endl;

    }

    return 0;

}
