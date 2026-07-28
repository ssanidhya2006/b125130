#include<stdio.h>
struct rectangle {
    float length;
    float breadth;

};

int main(){
    struct rectangle r;
    float area,perimeter;

    printf("enter length:");
    scanf("%f",r.length);
    printf("enter breadth:");
    scanf("%f",r.breadth);
    area= r.length*r.breadth;
    perimeter=r.length+r.breadth;

    printf("----rectangle details----");
    printf("length:%f",r.length);
    printf("breadth:%f",r.breadth);
    printf("area:%f",area);
    printf("perimeter:%f",perimeter);

    return 0;

}
