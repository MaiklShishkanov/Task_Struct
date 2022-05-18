#include <iostream>
#include <string.h>

struct Patient {
    std::string name;
    std::string surname;
    int age;
    double weight;
    double height;
    std::string disease;
};

int ewe()
{
    Patient patient;
    patient.name = "Roman";
    patient.surname = "Trentov";
    patient.age = 25;
    patient.weight = 80.5;
    patient.height = 1.70;
    patient.disease = "Grip";


    std::cout << "Name: " << patient.name << std::endl;
    std::cout << "Surname: " << patient.surname << std::endl;
    std::cout << "Age: " << patient.age << std::endl;
    std::cout << "Weight: " << patient.weight << std::endl;
    std::cout << "Height: " << patient.height << std::endl;
    std::cout << "Disease: " << patient.disease << std::endl;

    return 0;
}
