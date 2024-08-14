//OOP, these are variable that can be used in real life
#include <iostream>

using std::string;

class Employee{  //these are the attributes of the particular class 
private: 
string Name;// everything inside of the class is by default private
string Company;
int Age;

public:
void setName(string name){
    Name = name;

}
string getName( ){
    return Name;
}
void setCompany(string company){
    Company = company;

    string getCompany( ){
        return Company;
        
    }
}
void IntroduceYourself (){
    std::cout << "Name  -"<< Name << std::endl;
    std::cout << "Company  -"<< Company << std::endl;
    std::cout << "Age  -"<< Age << std::endl;

}
Employee(string name, string company, int age) {
Name =name;
Company = company;
Age = age;

}
};
int main(){


Employee employee1 = Employee("Saldina", "YT- CodeBeauty", 25); 
employee1.IntroduceYourself();


Employee employee2 = Employee("John", "Amazon", 35);

employee2. IntroduceYourself();

employee1.
//constuctor doesnt have a return type, has the same name of the class it belongs to, constructor must be public
}

//Encapsulation- budding and trying together data
//grouping things together in a class
// stops people from accessing and modifying data within a class
