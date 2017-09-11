#include <iostream>
#include <string>

using namespace std;


bool isPalindrome(string s, int size){
  int j=size-1;
  
  for (int i=0; i<size/2; i++){
      if (s[i]!=s[j]){
          return false;
      }
      j--;
  }
  return true;
}


int main () {

   string str1 = "abc"; 
   
   bool isPal;
   bool firstTime=true;
   int count = 0;
   
   string substring;
   int counter=1;
   
   for (int i=0; i<str1.length(); i++){
     for (int j=i; j<str1.length(); j++){
       
        substring = str1.substr(i,counter); //count = j+1
        cout << substring <<endl;
         isPal = isPalindrome(substring, substring.length());
         
         if (isPal){
          printf ("true\n");
          count++;
         }
         else{
          printf("false\n");
         }
          printf ("%d, %d\n\n",i,j);
         counter++;
     }
     counter=1;
   }
   
   printf ("Total count is: %d\n",count);
   
   
   
   
   
}
