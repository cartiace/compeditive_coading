
#include <stdio.h>

int main() {
    int n,key = {0};
    int arr[] = {9, -3, 5, -2, -8, -6, 1, 3};
    n = (sizeof arr)/(sizeof arr[0]);
    
    for(int i = 0; i<n; i++)
    {
        if(arr[i] > 0)
        {
            arr[key] = arr[i];
            key++;
        }
    }
    while (key < n)
    {
        arr[key] = 0;
        key++;
    }
    
    for(int i = 0; i < n ; i++ )
    {
        printf("%d",arr[i]);
        printf(" , ");
    }
    return 0;
}
