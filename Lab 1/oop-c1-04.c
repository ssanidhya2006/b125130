#include<stdio.h>
struct product {
    int prodid;
    char prodname;
    float price;
    int quantity;

};

int main(){
    struct product p;
    float total;

    printf("enter id:");
    scanf("%d",&p.prodid);
    printf("enter name:");
    scanf("%s",&p.prodname);
    printf("enter price:");
    scanf("%f",&p.price);
    printf("enter quantity:");
    scanf("%d",&p.quantity);

    total=p.price*p.quantity;

     printf("----product details----");
    printf(" product id:%d",p.prodid);
    printf(" name:%s",p.prodname);
    printf(" price:%f",p.price);
    printf(" quantity:%d",p.quantity);
    printf("total:%.2f",total);

    return 0;
}
