#include <iostream>
using namespace std;

struct Ill {
    string name;
    string surname;
    int age;
    double weight;
    double height;
    string disease;
};

int ewe()
{
    Ill ill;
    ill.name = "Roman";
    ill.surname = "Trentov";
    ill.age = 25;
    ill.weight = 1.70;
    ill.height = 80.5;
    ill.disease = "Grip";


    std::cout << "Name: " << ill.name << std::endl;
    std::cout << "Surname: " << ill.surname << std::endl;
    std::cout << "Age: " << ill.age << std::endl;
    std::cout << "Weight: " << ill.weight << std::endl;
    std::cout << "Height: " << ill.height << std::endl;
    std::cout << "Disease: " << ill.disease << std::endl;

    return 0;
}