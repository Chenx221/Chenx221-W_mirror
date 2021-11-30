#include<iostream>

template<typename T>
void swap(T& t1, T& t2) {
	T t3 = t1;
	t1 = t2;
	t2 = t3;
}
struct Student {
	int id;
	char name[40];
	float score;
};
template<>void swap<Student>(Student& s1, Student& s2) {
	int temp= s1.id;
	s1.id = s2.id;
	s2.id = temp;
}
int main() {
	Student s1,s2;
	s1.id = 123;
	s2.id = 456;
	int a = 1, b = 2;
	std::cout << "a: " << a << " b:" << b << std::endl;
	swap(a, b);
	std::cout << "a: " << a << " b:" << b << std::endl;
	std::cout << "s1.id " << s1.id << " s2.id" << s2.id << std::endl;
	swap(s1, s2);
	std::cout << "s1.id " << s1.id << " s2.id" << s2.id << std::endl;
}