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
    
    // for ( int i = 0 ; i < n ; ++i )
    //     cout << arr[i] << ' ' ;
    // cout << '\n' ;

}

void bubbleSort(int arr[], int n) {

    for ( int i = 0 ; i < n ; ++i ) 
        for ( int j = 0 ; j < n-1 ; ++j )
            if (arr[j]>arr[j+1])
                swap(arr[j],arr[j+1]) ;

    // for ( int i = 0 ; i < n ; ++i )
    //     cout << arr[i] << ' ' ;
    // cout << '\n' ;
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
    // for ( int i = 0 ; i < n ; ++i )
    //     cout << arr[i] << ' ' ;
    // cout << '\n' ;
}

void merge(int[] arr, int l, int r) {
    int l1=1,r1=(l+r)>>1;
    int l2=r1+1, r2=r;

    int i = l1, j = l2, k = 0 ;
    int temp[r-l+1];
    while ( i<=r1 and j<=r2 ) {
        temp[k++] = ( arr[i]>arr[j] ) ? arr[j++] : arr[i++];
    }
    while( i<=r1 )
        temp[k++] = arr[i++];
    while( j<=r2 )
        temp[k++] = arr[j++];
    
    for ( k = 0 ; k <= r-l ; ++k )
        arr[k] = temp[k] ;

}

void mergeSort(int[] arr, int l, int r) {

    if (l==r) {
        return ;
    }
    mergeSort(arr,l,(l+r)>>1);
    mergeSort(arr,l,1+((l+r)>>1));
    merge(arr,l,r);

}

int main() {

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    if (0) {
    // int n ;
    // cin >> n ;
    // int arr[n] ;
    // for ( int i = 0 ; i < n ; ++i )
    //     cin >> arr[i] ;
    
    // int choice ;
    // // cout << "\n1. Bubble Sort\n2. Insertion Sort\n1. Selection Sort\n.\nChoice:     ";
    // cin >> choice ;
    // // cout << endl ;
    // switch (choice) {

    //     case 1 :{
    //         cout << "Selection Sorted\n" ;
    //         selectionSort(arr,n) ;
    //         break;
    //     }
    //     case 2 :{
    //         cout << "Bubble Sorted\n" ;
    //         bubbleSort(arr,n) ;
    //         break ;
    //     }
    //     case 3 :{
    //         cout << "Insertion Sorted\n" ;
    //         insertionSort(arr,n) ;
    //         break;
    //     }

    // }
    }
    const int n = 10000;
    int best[n], worst[n], average[n];

    for ( int i = 0 ; i < n ; ++i ) {
        best[i] = i+1, worst[i] = n-i, average[i] = rand()%n+1 ;
    }
    
    clock_t start,end ; 

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

    return 0;

}