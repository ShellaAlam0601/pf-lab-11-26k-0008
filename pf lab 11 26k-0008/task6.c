#include<stdio.h>

const int toll_rate=50;

static int totalvehicles=0;
static int totalrevenue=0;

void processvehicle(char vehicletype[]){

    totalvehicles++;
    totalrevenue=totalrevenue+toll_rate;

    printf("%s", vehicletype);
    printf("%d", toll_rate);

}

int main(){
    processvehicle("car");
    processvehicle("bus");
    processvehicle("bike");
    processvehicle("truck");

    printf("\n----final toll plaza report----\n");
    printf("%d\n", totalvehicles);
    printf("%d", totalrevenue);

    return 0;

}