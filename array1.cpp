void traverse(int arr[])
{
    for(int i = 0 ; i < 10 ; i++) cout<<arr[i];
}

-----------------------------

/* Insertion : inserting an element at the end of a linear array can be easily done

Step1 : start
Step2 : repeat for i=n-1 down to k(index)
        shift the element down by one position i.e arr[i+1] = arr[i]
        [end of loop]
Step3 : st arr[k] = item
Step 4 : n++;
Step5 : exit*/

//c++ implement:
void insert(int arr[] , int n , int , k , int item)
{
    for(int i = n-1 ; i >= k ; i--)
    {
        arr[i] = arr[i+1];
    }
    arr[k] = item;
    n++;
}

----------------------------------
/* Deletion : Deletion is very easy on linear array.

Algorithm : Deletion(arr, n, k) Here arr is a linear array with n number of items. K is position of elememt which can be deleted.
Step 1:Start
Step 2: Repeat for i=k up to n
       [Move the element up word]  arr[i]=arr[i+1];
      [End of the loop]
Step 3: n--;
Step 4 : Exit.*/

//c++ implement:
void deletion(int arr , int n , int k)
{
    for(i = k ; i < n ; i++){
        arr[i] = arr[i+1];
    }
    n--;
}

-----------------------------------
/* Searching : Searching means find out a particular element in linear array. Linear seach and binary search are common algorithm for linear array. We discuss linear search and binary search.

Linear search Algorithm : Linear search is a simple search algorithm that checks every record until it finds the target value
Algorithm: LinearSearch(arr, n, item)
Step 1:Start.
Step 2: Initialize loc=0;
Step 3: Repeat for i=0 up to n-1 if(arr[i]==item) loc++; [End of the loop]
Step 4: if loc is not zero then print found otherwise print not found.
Step 5 : Exit.*/

//c++ implementation:
void linear_search(int arr[] , int n , int item)
{
    for(int i = 0 ; i < n-1 ; i++)
    {
        if(arr[i] == item) loc++;
    }
    if(loc) cout<<"found"<<endl;
    else cout<<"not found"<<endl;
}

--------------------------------------------

/* Binary search : Binary search is available for sorted array. It compares the target value to the middle element of the array; if they are unequal, the half in which the target cannot lie is eliminated and the search continues on the remaining half until it is successful.

Algorithm : BinarySeach(arr, n, item)
Step 1:Start
Step 2: Initialize low = 0 and high = n-1;
Step 3: While loop low<=high
    mid = (low + high)/2;
    if (a[mid] == item) return mid;
    else if (a[mid] < item) low = mid + 1;
     else high = mid - 1;
Step 4: If item is not found in array return -1. Step 5: End.*/

//c++ implementation:
int binarysearch(int[] a , int n , int item)
{
    int low = 0;
    int high = n-1;
    while(low <= high)
    {
        int mid = (low + high)/2;
        it(a[mid] == item) return mid;
        else if(a[mid] < item) low = mid +1;
        else high = mid-1;
    }
    return -1;
}

------------------------------------------
/* Sorting : There are various sorting algorithm in linear array. We discuss bubble sort and quick sort in this post.
Bubble Sort: Bubble sort is a example of sorting algorithm . In this method we at first compare the data element in the first position with the second position and arrange them in desired order.Then we compare the data element with with third data element and arrange them in desired order. The same process continuous until the data element at second last and last position.

Algorithm : BubbleSort(arr,n)
Step 1:Start
Step 2: Repeats i=0 to n
Step 3: Repeats j=0 to n
         if(arr[j]>arr[j+1]) then interchange arr[j] and arr[j+1]
         [End of inner loop]
        [End of outer loop]
Step 4: Exit. */

// c++ implementation:
void Bubblesort(int arr[] , int n)
{
    for(int i=0; i < n-1 ; i++)
    {
        for(j=0 ; j < n-1 ; j++)
        {
            if(arr[j] > arr[j+1]) swap(arr[j] , arr[j+1]);
        }
    }
}

/* Quick Sort:
 Quick sort is a divide and conquer paradism. In this paradism one element is to be chosen as partitining element .
We divide the whole list array into two parts with respect to the partitiong elemnt . The data which are smaller than or equal to the partitining element remain in
 the first part and data data which are greater than the partitioning element
 remain in the second part. If we find any data which is greater than the partitioning value that will be transfered to the second part., If we find any data whichis smaller than the partitioning element that will be transferred to first part.
Transferring the data have been done by exchanging the position of the the data
found in first and second part. By repeating this process ,
we can sort the whole list of data.

Algorithm: QUICKSORT(arr, l, h)
if  l<h then pi ← PARTITION(A, l, h)
QUICKSORT(A, l, pi–1)
QUICKSORT(A, pi+1, h) */

// c++ implementation:
int partition(int arr[] , int start , int end)
{
    int pivotValue = arr[start];
    int pivotPosition = start;
    for(int i = start+1 ; i <= end ; i++)
    {
        if(pivotValue > arr[i])
        {
            swap(arr[pivotPosition + 1] , arr[i]);
            swap(arr[pivotPosition] , arr[pivotPosition + 1]);
            pivotPosition++;
        }
    }
    return pivotPosition;
}

void quicksort(int arr[] , int low , int high)
{
    if(low < high)
    {
        int pi = partition(arr , low , high);
        quicksort(arr , low , pi-1);
        quicksort(arr , p+1 , high);
    }
}

int main()
{
    int n , arr[100];
    cin >> n;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> arr[i];
    }

    sort(arr , arr+n);
    for(int i = 0 ; i < n ; i++)
    {
        cout << arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}
