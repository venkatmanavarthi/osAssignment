#include<stdio.h>
#include<stdbool.h>
#include<iostream>
//stdbool is used to import a syntax for a bool data-type

int main(){
  char students[] = {'a','b','c','d','e','f','g','h','i','j'};
  int n = sizeof(students)/sizeof(students[0]);// this line of code will return the number of elements or length of an array
  int numberOfGifts[n];
  //taking input from the user the number of gifts purchased by each student
  for(int i = 0;i < n;i++){
      std::cout<<"enter the gifts took by "<<" "<<students[i]<<std::endl;
    std::cin>>numberOfGifts[i];
  }
  std::cout<<"entering nuber of gifts purchased by each student completed"<<std::endl;

  std::cout<<"now let us randomize the occurance of the students to he bill counter "<<std::endl;
  bool randomIndexArray[10] = {0}; //this initialized all the elements to zero

  int randomIndexArray2[n]; //this will store the index at which students will occur to the bill counter

  srand((unsigned)time(NULL));
  for (int i = 0; i < n; i++){
      int r=rand()%10;
    if(!randomIndexArray[r]){
        randomIndexArray2[i] = r;
    }
    else
      i--;
    randomIndexArray[r]=1;    
  }


  //this will the index od students at the billing counter as they occur randomly
std::cout<<std::endl;
std::cout<<"printing the randomized array"<<std::endl;
  for(int i = 0;i < n;i++){
      std::cout<<randomIndexArray2[i]<<" ";
  }
std::cout<<std::endl;
  //now let us create the order the students as we got their index in the billing counter
  char newStudentsArray[n];
  int newGiftsArray[n];
 //this piece of line code will order the students at the billing counter
  for(int i = 0;i < n;i++){
      newStudentsArray[i] = students[randomIndexArray2[i]];
      newGiftsArray[i] = numberOfGifts[randomIndexArray2[i]];
  }

  //now let us print the order of students at the billing couter
  std::cout<<"printing the students order at billing counter"<<std::endl;
  for(int i = 0;i < n;i++){
      std::cout<<newStudentsArray[i]<<" ";
  }
std::cout<<std::endl;


//now we will sort the students according to the number of gifts they brought 
//similar to the priortity scheduling

for(int i = 0;i<n-1;i++)
	{
        
		for(int j = 0;j< n - i - 1;j++)
		{
			if(newGiftsArray[j] < newGiftsArray[j+1])
			{ 
                int giftTemp = newGiftsArray[j];
                newGiftsArray[j] = newGiftsArray[j+1];
                newGiftsArray[j+1] = giftTemp;
                
                char studentTemp = newStudentsArray[j];
                newStudentsArray[j] = newStudentsArray[j+1];
                newStudentsArray[j+1] = studentTemp;
			}
			
		}
	}
    //now printing the right order ar the billing counter
    std::cout<<"printing the right order after sorting according to the gifts priortity"<<std::endl;
    for(int i = 0;i < n;i++){
        std::cout<<newStudentsArray[i]<<" "<<newGiftsArray[i]<<std::endl;
    }
  return 0;
}
