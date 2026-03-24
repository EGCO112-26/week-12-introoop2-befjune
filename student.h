#include <iostream>
using namespace std;

class student{
private:

  string name;
  int age;

public:
  
    void set_name(string="Yme");
    void print_name(string name);

    //1.set_age set ค่า age
    void set_age(int=0);

    //2.get_age return ค่า age
    int get_age();

    //display func (for assignment)
    void display();

};

void student::set_name(string n){
  /*std::cout<<"Input name";
	std::cin>>n;
	std::cout<<endl;*/
  name = n;
}

void student::print_name(string n){
  n = name;
  std::cout<<"Name: "<<n<<endl;
}

void student::set_age(int a){
  if(a>100) a=100;
  else if (a<0) a=0;
  else age=a;
}

int student::get_age(){
  //std::cout<<age<<endl;
  return age;
}

void student::display(){
  std::cout<<"Name: "<<name<<endl;
  cout<<"Age: "<<age<<endl;
}