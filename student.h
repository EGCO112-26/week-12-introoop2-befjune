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
  if(a>80) a=80;
  else if (a<18) a=18;
  else age=a;
}

int student::get_age(){
  return age;
}
