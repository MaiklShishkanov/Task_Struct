#include <iostream>
#include <string.h>
#include <vector>

struct Student {
	std::string name;
	std::string surname;
	std::string university;
	std::string faculty;
	int course;
};

int main() {
	std::vector<Student> student_1 = { {"Maksim","Chupa","MGU","Physics", 3},
	{"Denis","Semenov","MGU","Physics", 2},
	{"Yriy","Dubov","MGU","Physics", 1} };
	std::vector<Student> new_stu(student_1.begin(), student_1.end());

	for (const auto& arr : new_stu)
	{
		std::cout << "Students : " << std::endl;
		std::cout << "Name: " << arr.name << std::endl;
		std::cout << "Surname: " << arr.surname << std::endl;
		std::cout << "University: " << arr.university << std::endl;
		std::cout << "Faculty: " << arr.faculty << std::endl;
		std::cout << "Course: " << arr.course << std::endl;
	}

	return 0;
}
