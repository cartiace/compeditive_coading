
#include <stdio.h>

void findPair(int nums[], int n, int target)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                printf("Pair found (%d, %d)\n", nums[i], nums[j]);

                return;
            }
        }
    }
    printf("Pair not found");
}

int main(void)
{
    int target;

    int arr[] = {6,5,4,7,2,1,3,0};

    printf("ENTER TARGET : ");
    scanf("%d",&target);

    int n = sizeof(arr)/sizeof(arr[0]);

    findPair(arr, n, target);

    return 0;
}
