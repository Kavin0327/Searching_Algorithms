#include<stdio.h>
#include<time.h>
int Randomized_BinarySearch(int arr[],int low,int high,int ele){
if(low>high) return -1;
srand(time(NULL));
int random=low+rand()%(high-low+1) ;
if(arr[random]==ele){
    return random;
}
else if(arr[random]>ele){
    return Randomized_BinarySearch(arr,low,random-1,ele);
}
else{
    return Randomized_BinarySearch(arr,random+1,high,ele);
}

}

int main(){
    //srand(time(NULL));
    //printf("%d",rand());
    int arr[]={12,13,16,19,20,24,25,30};
    printf("Enter the Value to Search:");
    int x;
    scanf("%d",&x);
    int index=Randomized_BinarySearch(arr,0,7,x);
    if(index==-1){
        printf("%d not present in array",x);
    }
    else{
            printf("\n%d is present in %d index in array",x,index);
    }
    return 0;
}
