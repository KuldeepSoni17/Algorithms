#include<stdio.h>
//quick Sort function to Sort Integer array list
int partition(int array[], int low, int high)
{
    //declaaring index variables
int pivot, temp, i, j;
    if(low < high)
    {
        //assigning  first element index as pivot element
        pivot= array[ low];
        i = low;
        j = high;
    //Sorting in Ascending order with quick sort
        while(i < j)
        {
            while(array[i] <= pivot && i < high)
            {
                i++;
            }
            while(array[j]>pivot)
            {
                j--;
            }
         if(i<j)
            {
                //Swapping operation
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }

        //At the end of first iteration, swap pivot element with j element
       // temp = pivot;
        array[low] = array[j];
        array[j] = pivot;

        return j;
 }
}

void quicksort(int array[], int low, int high)
{
int pivotIndex,i;
//int originalStart= low;
//int originalLast= high;
//printf("low = %d    high = %d      pivotIndex = %d \n",low,high,pivotIndex);
//printf("high %d\n",high);
if(low>= high)
{
//printf("return %d\n",return);
return;
}
printf("\n going to call partition \n");
pivotIndex = partition (array, low, high);
printf("\n partition over and return\n");

printf("\n just next to partition()\n");
printf("\n low = %d    high = %d      pivotIndex = %d \n",low,high,pivotIndex);
printf("\n modified array: ");
    for(i=low ;i<=high ;i++)
    printf(" %d ",array[i]);
    printf(" \n");

//printf("pivotIndex %d\n",pivotIndex);

//Recursive call for quick sort, with partiontioning
        printf("\n going to call quicksort on left sublist\n");
        quicksort(array, low, pivotIndex -1);
        printf("\n left sublist quicksort over and return\n");

        printf("\n just next to right quickshort()\n");
        printf("\n low = %d    high = %d      pivotIndex = %d \n",low,high,pivotIndex);
        printf("\n modified array: ");
        for(i=low;i<=high;i++)
        printf(" %d",array[i]);
        printf(" \n");


        printf("\n going to call quicksort on right sublist\n");
        quicksort(array, pivotIndex +1, high);
        printf("\n right sublist quicksort over and return\n");

        printf("\n just next to left quickshort()\n");
        printf("\n low = %d    high = %d      pivotIndex = %d \n",low,high,pivotIndex);
        printf("\n modified array: ");
        for(i=low;i<=high;i++)
        printf(" %d",array[i]);
        printf(" \n");



}
int main()
{
    //Declaring variables
    int array[100],n,i;

    //Number of elements in array form user input
    printf("Enter the number of element you want to Sort : ");
    scanf("%d",&n);

    //code to ask to enter elements from user equal to n
    printf("Enter Elements in the list : ");
    for(i = 0; i < n; i++)
    {
        scanf("%d",&array[i]);
    }

    //calling quickSort function defined above
    quicksort(array,0,n-1);

    //print sorted array
    printf("Sorted elements: ");
    for(i=0;i<n;i++)
    printf(" %d",array[i]);
     getch();
    return 0;
}
