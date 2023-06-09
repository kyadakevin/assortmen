
#include <stdio.h>




int main()
{
    int arr[100], n, i;
    int m, sl;

    
    printf("Enter size of the array = ");
    scanf("%d", &n);

     
    printf("Enter elements in the array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    m = sl ;


    
    for(i=0; i<n; i++)
    {
        if(arr[i] > m)
        {
            
             
            sl = m;
            m = arr[i];
        }
        else if(arr[i] > m && arr[i] < m)
        {
            
            
            m = arr[i];
        }
    }

   
    printf("Second largest = %d", sl);
    
    
    
}

