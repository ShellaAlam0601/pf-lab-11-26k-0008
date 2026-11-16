#include<stdio.h>

int calculatechecksum(int transactionID){
     if (transactionID < 10){
        return transactionID;
     }

     int sum=0;

     while(transactionID>0){
        sum=sum+(transactionID % 10);
        transactionID =transactionID /10;
     }

     return calculatechecksum(sum);

}

int main(){

    int transactionID;

    printf("enter transactionID");
    scanf("%d", &transactionID);

    int result=calculatechecksum(transactionID);

    printf("%d", result);

    return 0;
}