//Task_2 decide the letter is vowel or not
#include <iostream>
#include <stdio.h>
char vowel[] = {'a','o','u','i','e','A','E','U','I','O'};
char character;
int main(){
std::cout<<"please enter the character: "<<std::endl;
std::cin>>character;
if(character == vowel[0])
{
 printf("Vowel character\n");
}
else if (character == vowel[1]) 
{
printf("Vowel character");   
}
else if (character == vowel[2]) 
{
printf("Vowel character");  
}else if (character == vowel[3]) 
{ 
printf("Vowel character"); 
}
else if (character == vowel[4]) 
{
printf("Vowel character");
}
else if (character == vowel[5]) 
{
printf("Vowel character");   
}else if (character == vowel[6]) 
{
 printf("Vowel character");
    
}
else if (character == vowel[7])
{
printf("Vowel character");
}
else if (character == vowel[8]) 
{
 printf("Vowel character");
}
else if (character == vowel[9]) 
{
printf("Vowel character");
}
else
{
printf("Not Vowel character\n");
}
   
return 0;
}