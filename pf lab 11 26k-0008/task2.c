#include<stdio.h>

struct product{
    int ID;
    char name[20];
    char category[20];
    float price;
    int stock;
};

void displayproductdetails(struct product p){

    printf("%d\n", p.ID);
    printf("%d\n", p.name);
    printf("%d\n", p.category);
    printf("%d\n", p.price);
    printf("%d\n", p.stock);

    float finalprice= p.price-(p.price * 5/100);

    printf("%.2f", finalprice);
}

int main(){

    struct product p1={1,"mobile","electronics",2000,5};

    displayproductdetails(p1);

    return 0;

}