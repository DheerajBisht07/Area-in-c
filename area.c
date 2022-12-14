#include<stdio.h>
#include<math.h>
int Area_rec(int l,int b){
    int length, width;
    length=l;
    width=b;
    int area= l*b;
    return area;
}

int Area_sq(int s){
    int side= s;
    int area= side*side;
    return area;
}
float Area_cir(float r){
    float radius= r;
    float area= 3.14*radius*radius;
    return area;   
}
int main(){
    int ch;
    printf("For Area of the figure\n");
    printf("1 for rectangle,2 for square, 3 for circle\n ");
    scanf("%d",&ch);
    if( ch==1)
    {
        int len,wid;
        printf("Enter length & breath of Rectangle\n");
        scanf("%d",&len);
        scanf("%d",&wid);
        printf("Area of Rectangle: %d",Area_rec(len,wid));
    }
    else if( ch==2){
        int sid;
        printf("Enter side of square\n");
        scanf("%d",&sid);
        printf("Area of square: %d",Area_sq(sid));
    }
    else if(ch==3){
        float rad;
        printf("Enter radius of circe\n");
        scanf("%f",&rad);
        printf("Area of circle: %f",Area_cir(rad));
    }
    else {
        printf(" invalid choice");
    }
    return 0;
}
