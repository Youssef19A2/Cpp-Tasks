//3-RIGHT angle triangle
#include<iostream>
int main(){
    float base;
    float height;
    int row;
    std::cout<<"Enter The Base: ";
    std::cin>>base;
    std::cout<<"Enter The Height: ";
    std::cin>>height;
    std::cout<<"Enter The number of row: ";
    std::cin>>row;
    float area = 0.5 * base * height;
    std::cout<<"The Area is: "<<area<<std::endl;
    for(int i = 1 ; i <= row; i++ ){
        for(int j = 1 ; j < i ;j++ ){
            std::cout<<"*";
        }
        std::cout << std::endl;    
    }

}