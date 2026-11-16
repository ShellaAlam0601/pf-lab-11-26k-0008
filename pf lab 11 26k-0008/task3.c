#include<stdio.h>

struct item{

    int id;
    char name[20];
    int quantity;
    float unitprice;

};

int main(){

    struct item items[5];
    int searchID;
    float total=0;

    for(int i=0;i<5;i++){
        printf("enter item id");
        scanf("%d",&items[i].id);

        printf("enter name");
        scanf("%d",&items[i].name);

        printf("enter item quantity");
        scanf("%d",&items[i].quantity);

        printf("enter item price");
        scanf("%d",&items[i].unitprice);

        total=total+ (items[i].quantity * items[i].unitprice);
    }

    printf("%.2f", total);

    printf("\nenter ID to search");
    scanf("%d",&searchID);

    for(int i=0;i<5;i++){

        if(items[i].id== searchID){

            printf("\nitemfound");
             printf("\n%d", items[i].id);
              printf("\n%s",items[i].name);
              printf("\n%d", items[i].quantity);
              printf("\n%.2f", items[i].unitprice);

        break;

        }
    }
}