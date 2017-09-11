#include <iostream>
#include <vector>
#include <cassert>
using namespace std;


int arrSum(vector<int> &arr){
  int sum=0;
  
  for (int i=0; i<arr.size();i++){
    sum= sum + arr[i];
  }
  
  return sum;
}

int main(){
    std::vector<int> array = {100, 5, 7, 1, 75};   
    int firstSum=0, secondSum=0;
    int firstPlayer, secondPlayer;
    
      while (array.size()>0){
          
          cout << "First Player: ";
          cin >> firstPlayer;
          
          if (firstPlayer==array[0] || firstPlayer==array[array.size()-1]){
        
            if (firstPlayer==array[0]){
                 array.erase(array.begin());   //removing first index
            }
            else if (firstPlayer==array[array.size()-1]){
                array.erase(array.begin()+array.size()-1); //removing last index
                
            }
            firstSum=firstSum+firstPlayer;
          }
          
           if (array.size()==0){
             break;
           }
            cout << "Second player: ";
            cin >> secondPlayer;
        
          if (secondPlayer == array[0] || secondPlayer == array[array.size()-1]){
           
            if (secondPlayer == array[0]){
               array.erase(array.begin());
            }
          
            else if (secondPlayer == array[array.size()]){
               array.erase(array.begin()+array.size()-1);
            }
            
            secondSum = secondSum + secondPlayer;
            
          }
          
        
     }    //endwhile
        
        if (firstSum<secondSum){
          printf ("false\n");
          
        }
        else{
          printf ("true\n");
        }
    
}
