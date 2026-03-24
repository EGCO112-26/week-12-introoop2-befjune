#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

#include "student.h"

int main(int argc, char* argv[]) {
  int N=(argc-1)/2;
  student a[N];

  // Set age and set name for the first two ppl
  int i,age;
  string n;

   // 1. Ask for N names and N age using cin
   //std::cout<<"Input name and age: ";
   //cout<<endl;
 
  //2. Print name and age of all N ppl
   int j=1;
   for(i=0; i<N+1; i++){

    if (j >= argc) break;
    a[i].set_name(argv[j]);
    j++;

    if (j >= argc) break;
    a[i].set_age(atoi(argv[j]));
    j++;

    /*if(j%2==1){
      //strcpy(n,argv[j]);
      a[i].set_name(argv[j]);
      j++;
    } 

    if(j%2==0){
      //age = atoi(argv[j]);
      a[i].set_age(atoi(argv[j]));
      //cout<<"Age: "<<a[i].get_age()<<endl;
      j++;
    }*/
   }

   /*for(i=0; i<N; i++){
    a[i].display();
   }*/
  
  //3. Print name and age of 
  //the youngest person
  //Find what the age of the youngest person
 
  for(i=0; i<N; i++){
    /*a[i].print_name();
    cout<<"Age: "<<a[i].get_age()<<endl;*/
    a[i].display();
  }
  
  int min_age = a[0].get_age();
  int youngest_index = 0;

  for(i = 1; i < N; i++) {
        if(a[i].get_age() < min_age) {
            min_age = a[i].get_age();
            youngest_index = i;
        }
    }

  // Print all info for the yougest person
 
  cout << "\n*** The Youngest Person ***" << endl;
  for(i = 0; i < N; i++) {
        if(a[i].get_age() == min_age) {
          a[i].print_name(""); 
            
          cout << "Age: " << a[i].get_age() << endl;
        }
  }
  /*a[youngest_index].print_name(a[youngest_index].name);
  cout << "Age: " << a[youngest_index].get_age() << endl;*/
  
  
  //4. Change input from cin to argv

  
 return 0;

    
  }
  
  


