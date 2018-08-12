#include<stdio.h>
int main()
{
    int linear_array [500];
    int n,i,search_element;
    printf("Enter How much numbers are you want to store the data:\n");
    scanf("%d",&n);
    printf("Enter array's element:\n");
    for (i=0;i<n;i++){
        scanf("%d",&linear_array[i]);
    }

    printf("Enter a number what are you searching:\n");
    scanf("%d",&search_element);
    for (i=0;i<n;i++){
        if(linear_array[i]==search_element){
            printf("Your element is found at %d index.\n",i);
        }
        else{
            printf("That's element does not exist in this array.");
        }
    }

    return 0;
}
