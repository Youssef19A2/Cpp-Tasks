//2- create a function to search to the number in the array which number is taken from user

#include <csignal>
#include <iostream>

int array1[5]={1,2,3,4,5};

int findnum(){
    int x;
    std::cout<<"Enter the number: ";
    std::cin>>x;
    if (x == array1[0]){
        std::cout<<"Yes founded\n";
    }else if (x == array1[1]) {
        std::cout<<"Yes founded\n";
    }else if (x == array1[2]) {
        std::cout<<"Yes founded\n";
    }else if (x == array1[3]) {
        std::cout<<"Yes founded\n";
    }else if (x == array1[4]) {
        std::cout<<"Yes founded\n";
    }else{
        std::cout<<"Not found\n";
    }

    return 0;
}
int main(){
findnum();


    return 0;
}