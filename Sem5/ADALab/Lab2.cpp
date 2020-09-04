#include<iostream>
#include<random>
using namespace std ;

void merge(int arr[], int l, int r) {
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

void mergeSort(int arr[], int l, int r) {
    if (l<=r) {
        return ;
    }
    mergeSort(arr,l,(l+r)>>1);
    mergeSort(arr,1+((l+r)>>1),r);
    merge(arr,l,r);
}


int partition(int arr[], int l, int r) { 
    int pivot = arr[r]; 
    int i = (l - 1); 
    for (int j = l; j < r; ++j ) 
        if (arr[j] <= pivot) 
            swap(arr[++i], arr[j]); 
    swap(arr[i + 1], arr[r]); 
    return (i + 1); 
} 

int rPartition(int arr[], int l, int r) { 
    srand(time(NULL)); 
    int random = l + rand() % (r - l); 
    swap(arr[random], arr[r]); 
    return partition(arr, l, r); 
} 

void quickSort(int arr[], int l, int r) {  
    if (l < r) {  
        int p = rPartition(arr, l, r);
        quickSort(arr, l, p - 1);  
        quickSort(arr, p + 1, r);  
    }  
} 

int main() {

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("Lab2_output.txt","w",stdout);
    #endif


    const int N = 10000;

    for ( int i = 1 ; i <= 5 ; ++i ) {

        const int n = N*i;

        cout << "n = " << n << endl ;

        int best[n], worst[n], average[n];

        for ( int i = 0 ; i < n ; ++i ) {
            best[i] = i+1, worst[i] = n-i, average[i] = rand()%n+1 ;
        }
        
        // Merge Sort

        cout << "\n\nMergeSort\n" ;

        clock_t start,end ; 
        start = clock() ;

        // Best case 
        start = clock() ;
        mergeSort(best,0,n-1) ;
        end = clock() ;
        printf("Time for Best Case:    %.8f secs\n", (double(end - start)/double(CLOCKS_PER_SEC))) ; 

        // averag case 
        start = clock() ;
        mergeSort(average,0,n-1) ;
        end = clock() ;
        printf("Time for Average Case: %.8f secs\n", (double(end - start)/double(CLOCKS_PER_SEC))) ; 

        // worst case 
        start = clock() ;
        mergeSort(worst,0,n-1) ;
        end = clock() ;
        printf("Time for Worst Case:   %.8f secs\n", (double(end - start)/double(CLOCKS_PER_SEC))) ; 


        // Quick Sort

        cout << "\n\nQuickSort\n" ;
        // Best case 
        start = clock() ;
        quickSort(best,0,n-1) ;
        end = clock() ;
        printf("Time for Best Case:    %.8f secs\n", (double(end - start)/double(CLOCKS_PER_SEC))) ; 

        // averag case 
        start = clock() ;
        quickSort(average,0,n-1) ;
        end = clock() ;
        printf("Time for Worst Case:   %.8f secs\n", (double(end - start)/double(CLOCKS_PER_SEC))) ; 

        // worst case 
        start = clock() ;
        quickSort(worst,0,n-1) ;
        end = clock() ;
        printf("Time for Average Case: %.8f secs\n", (double(end - start)/double(CLOCKS_PER_SEC))) ; 

        cout << "----------------------------------------------------------------" << endl;

    }

    return 0;

}