#include <stdio.h>

void bubbleSort(int arr[], int n) 
{
    int temp;
    int swapped,i,j;
    for(i = 0; i < n - 1; i++) 
	{
        swapped = 0; // Flag to optimize the algorithm
        for (j = 0; j < n - i - 1; j++) 
		{
            // If the current element is greater than the next element, swap them
            if (arr[j] > arr[j + 1]) 
			{
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1; // Mark that a swap occurred
            }
            //printf("%d",j);
        }
        //printf("%d\n",i);

        // If no two elements were swapped in the inner loop, the array is already sorted
        if (swapped == 0) 
		{
            break;
        }
    }
}

int main() 
{
    int n,i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
	 {
        scanf("%d", &arr[i]);
    }

    printf("Original array: ");
    for (i = 0; i < n; i++)
	 {
        printf("%d ", arr[i]);
    }

    bubbleSort(arr, n);

    printf("\nSorted array: ");
    for (i = 0; i < n; i++) 
	{
        printf("%d ", arr[i]);
    }

    return 0;
}

