#include <iostream>
//#include <cstring>
using namespace std;

#include "student.h"

int main(int argc, char* argv[]) {
  int N=(argc-1)/2;
  //student s1,s2,s3;

 /*s1.set_name("Amy"); s1.set_age(20);
 s2.set_name("James");
 s2.set_age(17);
 s1.get_age()>s2.get_age() ? s1.print_name():s2.print_name(); 
 cout <<"is older";*/

  student a[N];
  // Set age and set name for the first two ppl
  int i,age;
  string n;

   // 1. Ask for N names and N age using cin
   //std::cout<<"Input name and age: ";
   //cout<<endl;
 
  //2. Print name and age of all N ppl
   int j=1;
   for(i=1; i<N+1; i++){

    if(j%2==1){
      //strcpy(n,argv[j]);
      a[i].set_name(argv[j]);
      a[i].print_name(argv[j]);
      j++;
    } 

    if(j%2==0){
      //age = atoi(argv[j]);
      a[i].set_age(atoi(argv[j]));
      //cout<<"Age: "<<a[i].get_age()<<endl;
      j++;
    }
   }

   for(i=1; i<N; i++){
    cout<<"Age: "<<a[i].get_age()<<endl;
   }
  
  //3. Print name and age of 
  //the youngest person
  //Find what the age of the youngest person
 
  /*for(i=1; i<N; i++){
    a[i].print_name(argv[i]);
    cout<<"Age: "<<a[i].get_age()<<endl;
  }*/
  
  // Print all info for the yougest person
 
  
  
  //4. Change input from cin to argv

  
 //return 0;

    
  }
  
  


