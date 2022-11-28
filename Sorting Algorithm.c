#include <stdio.h>
#include <stdlib.h>
int *sorting(int array[],int elements,int selection)
{
    /*********************************************************
    This program is sorting algorithm.

    How to use it in the int main?
    printf("%d\n",*(sorting(array,sizeof(array)/4,0)));
    int value1=*(sorting(array,sizeof(array)/4,0));

    array[]     : Array to use.
    elements    : Number of elements in the array.

    selection 0 : Low to High.
    selection 1 : High to Low.

    *********************************************************/

    int temp1;
    int sortingArray[elements];
    int *address=&sortingArray[0];
    for(int i1=0;i1<=(elements-1);i1++)
    {
        sortingArray[i1]=array[i1];
    }
    for(int i1=0;i1<=4;i1++)
    {
            for(int i2=i1+1;i2<=5;i2++)
            {
                if((sortingArray[i1]>sortingArray[i2])&&selection==0)
                {
                     temp1=sortingArray[i2];
                     sortingArray[i2]=sortingArray[i1];
                     sortingArray[i1]=temp1;
                }
                if((sortingArray[i1]<sortingArray[i2])&&selection==1)
                {
                     temp1=sortingArray[i2];
                     sortingArray[i2]=sortingArray[i1];
                     sortingArray[i1]=temp1;
                }
            }
    }
    return address;
}
int main()
{
    int array[]={23,12,12,17,32,5};
    for(int i1=0;i1<=5;i1++)
    {
        printf("%d: %d\n",i1+1,*(sorting(array,sizeof(array)/4,1)+i1));
    }
    return 0;
}
