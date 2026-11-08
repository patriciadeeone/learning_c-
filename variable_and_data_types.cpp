#include <iostream>

int main(){
    int age = 21;
    int year = 2023;
    int days = 7.5;

    //double (this is a number including decimal)
    double price = 10.99;
    double gpa = 2.5;
    double temp = 25.1;

    //single character
    char grades = 'A';
    char initial = 'B';
    char currency = '$';

    //boolean (true or false)
    bool student = true;
    bool power = false;
    bool forSale = true;

    //string (objecs that represents a sequence of text)
    std::string name = "Patricia";
    std::string day = "Friday";
    std::string food = "Pizza";
    std::string address = "123 Main St";

    std::cout << "Hello " << name << '\n';
    std::cout << "You are " << age << " years old";

    return 0;
}