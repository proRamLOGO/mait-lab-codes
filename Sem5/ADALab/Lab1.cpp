#include<iostream>
#include<random>
using namespace std ;

void insertionSort(int arr[], int n) {

    for ( int i = 1 ; i < n ; ++i ) {
        int target = arr[i],j = i-1 ;

        for ( j = i-1 ; j > -1 && arr[j]>target ; --j ){
            arr[j+1] = arr[j] ;
        }

        arr[j+1] = target ;
    }

}

void bubbleSort(int arr[], int n) {

    for ( int i = 0 ; i < n ; ++i ) 
        for ( int j = 0 ; j < n-1 ; ++j )
            if (arr[j]>arr[j+1])
                swap(arr[j],arr[j+1]) ;
                
}

void selectionSort(int arr[], int n) {

    for ( int i = 0 ; i < n ; ++i ) {
        int target = i ;
        for ( int j = i+1 ; j < n ; ++j ) {
            if ( arr[j]<arr[target] )
                target = j ;
        }
        swap(arr[i],arr[target]) ;
    }
    
}

int main() {

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("Lab1_output.txt","w",stdout);
    #endif
    
    const int N = 1000;

    for ( int i = 1 ; i <= 5 ; ++i ) {

        const int n = N*i;
        int best[n], worst[n], average[n];
        clock_t start,end ; 
        start = clock() ;
        cout << "\nn = " << n << endl ;

        // ----------------------------------------------------------------

        // 1. Insertion Sort
        cout << "\n1. Insertion Sort\n" ;

        for ( int i = 0 ; i < n ; ++i ) {
            best[i] = i+1, worst[i] = n-i, average[i] = rand()%n+1 ;
        }

        // Best case 
        start = clock() ;
        insertionSort(best,n) ;
        end = clock() ;
        printf("Time for Best Case:    %.8f secs\n", (double(end - start)/double(CLOCKS_PER_SEC))) ; 

        // averag case 
        start = clock() ;
        insertionSort(average,n) ;
        end = clock() ;
        printf("Time for Average Case: %.8f secs\n", (double(end - start)/double(CLOCKS_PER_SEC))) ; 

        // worst case 
        start = clock() ;
        insertionSort(worst,n) ;
        end = clock() ;
        printf("Time for Worst Case:   %.8f secs\n", (double(end - start)/double(CLOCKS_PER_SEC))) ; 

        // ----------------------------------------------------------------

        // 2. Selection Sort
        cout << "\n2. Selection Sort\n" ;

        for ( int i = 0 ; i < n ; ++i ) {
            best[i] = i+1, worst[i] = n-i, average[i] = rand()%n+1 ;
        }

        // Best case 
        start = clock() ;
        selectionSort(best,n) ;
        end = clock() ;
        printf("Time for Best Case:    %.8f secs\n", (double(end - start)/double(CLOCKS_PER_SEC))) ; 

        // averag case 
        start = clock() ;
        selectionSort(average,n) ;
        end = clock() ;
        printf("Time for Average Case: %.8f secs\n", (double(end - start)/double(CLOCKS_PER_SEC))) ; 

        // worst case 
        start = clock() ;
        selectionSort(worst,n) ;
        end = clock() ;
        printf("Time for Worst Case:   %.8f secs\n", (double(end - start)/double(CLOCKS_PER_SEC))) ; 

        // ----------------------------------------------------------------

        // 3. Bubble Sort
        cout << "\n3. Bubble Sort\n" ;

        for ( int i = 0 ; i < n ; ++i ) {
            best[i] = i+1, worst[i] = n-i, average[i] = rand()%n+1 ;
        }

        // Best case 
        start = clock() ;
        bubbleSort(best,n) ;
        end = clock() ;
        printf("Time for Best Case:    %.8f secs\n", (double(end - start)/double(CLOCKS_PER_SEC))) ; 

        // averag case 
        start = clock() ;
        bubbleSort(average,n) ;
        end = clock() ;
        printf("Time for Average Case: %.8f secs\n", (double(end - start)/double(CLOCKS_PER_SEC))) ; 

        // worst case 
        start = clock() ;
        bubbleSort(worst,n) ;
        end = clock() ;
        printf("Time for Worst Case:   %.8f secs\n", (double(end - start)/double(CLOCKS_PER_SEC))) ; 

        cout << "\n----------------------------------------------------------------" << endl;

    }

    return 0;

}