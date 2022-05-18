#include <iostream>
#include <string.h>

struct Student {
    std::string name;
    std::string surname;
    std::string university;
    std::string faculty;
    int course;

    Student(std::string name, std::string surname, std::string university, std::string faculty, int course) : name(name), surname(surname), university(university), faculty(faculty), course(course) {}

    void print()
    {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Surname: " << surname << std::endl;
        std::cout << "University: " << university << std::endl;
        std::cout << "Faculty: " << faculty << std::endl;
        std::cout << "Course: " << course << std::endl;
    }
};

int arr()
{
    Student arr[] = { Student("Maksim","Chupa","MGU","Physics", 3),
                      Student("Denis","Semenov","MGU","Physics", 2),
                      Student("Yriy","Dubov","MGU","Physics", 1) };

    std::cout << "Students : " << std::endl;

    for (int i = 0; i < 3; i++)
    {
        arr[i].print();
    }
    return 0;
}
