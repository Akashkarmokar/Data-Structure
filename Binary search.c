#include<stdio.h>
int main()
{
    int data_array[]={1,2,3,4,5,6,7,8}; //here array element number is 8 .supposer here n = 8
    int searching_number,left,right,mid;
    scanf("%d",&searching_number);
    left = 0;
    right = 8 -1 ; // here 7 means we have to take number of array data numbers & 8 is previous n= 8 //
    while(left<=right){
        mid = (left+right)/2;
        if(data_array[mid]==searching_number){
                    printf("Data found at %dth index\n",mid);
                    printf("Data found at %dth position\n",mid+1);
        }
        if(data_array[mid]>searching_number){
            right=mid-1 ;
        }
        else {
            left = mid +1;
        }
    }

    return 0;
}
