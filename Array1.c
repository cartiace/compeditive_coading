
#include<stdio.h>

void swap(int*a,int*b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(void)
{
    int n1,n2;
    int arr_1[] = {1, 3, 5, 7};
    n1 = (sizeof arr_1)/(sizeof arr_1[0]);
    int arr_2[] = {2, 4, 6};
    n2 = (sizeof arr_2)/(sizeof arr_2[0]);
    int arr_3[n1+n2];
    int i=0,j=0,k=0;
    
    while(i<n1)
    {
        arr_3[k++] = arr_1[i++];
    }
    
    while(j<n2)
    {
       arr_3[k++] = arr_2[j++];   
    }
    
    printf("MERGE OF ARRAY 1 AND 2 WITHOUT SORTING IS :\n");
    for(int i = 0; i<n1+n2; i++)
    {
        printf("%d",arr_3[i]);
        printf(" , ");
    }
    
    for(int i = 0; i < (n1+n2) - 1; i++)
    {
        for(int j = 0;j<  (n1+n2) - i - 1; j++)
        {
            if (arr_3[j] > arr_3[j+1]){
                swap(&arr_3[j],&arr_3[j+1]);
            }
        }
    }
    
    printf("\n");
     printf("MERGE OF ARRAY 1 AND 2 AFTER SORTING IS :\n");
      for(int i = 0; i<n1+n2; i++)
    {
        printf("%d",arr_3[i]);
        printf(" , ");
    }
    
    return 0;
}
