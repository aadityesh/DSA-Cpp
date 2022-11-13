#include <iostream>
#include <cstring>

using namespace std;
int findSecondLargest(int *input, int n)
{
    //Write your code here
    int i, first, second;

    /* There should be atleast two elements */
    if (arr_size < 2)
    {
        printf(" Invalid Input ");
        return;
    }

    first = second = INT_MIN;
    for (i = 0; i < arr_size; i++)
    {
        /* If current element is smaller than first 
           then update both first and second */
        if (arr[i] > first)
        {
            second = first;
            first = arr[i];
        }

        /* If arr[i] is in between first and  
           second then update second  */
        else if (arr[i] > second && arr[i] != first)
            second = arr[i];
    }
    if (second == INT_MIN)
        printf("There is no second largest element
"); 
    else
        printf("The second largest element is %dn", second);
}

/* Driver program to test above function */
int main()
{
    int arr[] = {12, 35, 1, 10, 34, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    print2largest(arr, n);
    return 0;
}
}
int main()
{

    return 0;
}