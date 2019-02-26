#include<stdio.h>
#include<iostream>
int main(){
    int x;
    int y;
    char salir;
    x=1;
    y=5;
    //std::cout<<x;
    printf("x=%d y=%d",x,y);

    std::cout<<"\nToca cualquier tecla para salir";
    std::cin>>salir;
    return 0;
}
