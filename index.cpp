#include<stdio.h>
#include<stdbool.h>
#include<iostream>
//stdbool is used to import a syntax for a bool data-type

int main(){
  char students[] = {'a','b','c','d','e','f','g','h','i','j'};
  int n = sizeof(students)/sizeof(students[0]);// this line of code will return the number of elements or length of an array
  int numberOfGifts[n];
  int i = 0;
  //taking input from the user the number of gifts purchased by each student
  for(i = 0;i < n;i++){
      std::cout<<"enter new value"<<std::endl;
    std::cin>>numberOfGifts[i];
  }
  std::cout<<"entering nuber of gifts purchased by each student completed"<<endl;
  return 0;
}