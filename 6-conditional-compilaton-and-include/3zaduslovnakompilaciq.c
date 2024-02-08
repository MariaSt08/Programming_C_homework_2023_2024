#include <stdio.h>
#include <stdlib.h>

#ifdef __linux__
void prqkaselekciq(int arr[], int n)
{
    int imin,min,temp;
for(int i=0;i<n;i++)
    {
        imin=i;
        min=arr[i];
        for(int j=i;j<n;j++)
        {
            if(arr[j]<min)
            {
                min=arr[j];
                imin=j;
            }
        }
         temp=arr[imin];
         arr[imin]=arr[i];
         arr[i]=temp;
    }
}

#elif __APPLE__
void insertmetod(int arr[], int n) 
{ int unsorted,k;
     for( int i=1;i<n;i++)
    {
        unsorted=arr[i];
        k=i;
       while(k>0 && arr[k-1]>=unsorted)
        {
           arr[k]=arr[k-1];
           k--;
        }
    arr[k]=unsorted;
    }
}

#elif __WIN32
void bubblesort(int arr[], int n) 
{
    for (int i = 0; i < n - 1; i++) 
    {
        for (int j = 0; j < n - i - 1; j++) 
        {
            if (arr[j] > arr[j + 1]) 
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
#else
void reversearr(int arr[], int n)
 {
    int l = 0;
    int r = n - 1;

    while (l <= r) 
    {
        int temp = arr[l];
        arr[l] = arr[r];
        arr[r] = temp;

        l++;
        r--;
    }
}

#endif

int main() {
    int n=5;
    int arr[] = {69,3,56,112,0};
    


#ifdef __linux__
    prqkaselekciq(arr, n);
    printf("Sortiran s prqka selekciq:\n");
#elif __APPLE__
    insertmetod(arr, n);
    printf("Sortiran s insert metod:\n");
#elif __WIN32
    bubblesort(arr, n);
    printf("Sortiran s bubble sort:\n");
#else
    reversearr(arr, n);
    printf("Reversed arr:\n");
#endif

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

