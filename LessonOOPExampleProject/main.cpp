#include "manager.h"
#include "doctor.h"
#include "student.h"
#include "teacher.h"
int main() {
	Student* st1 = new Student("", "", 15, 10);
		Student * st2 = new Student("", "", 15, 8.5);

		Doctor * doc1 = new Doctor("Peter", "Petrov", 25, 5, "...");
	Doctor* doc2 = new Doctor("Anna", "Petrova", 22, 2, "...");
	Doctor* doc3 = new Doctor("Oleg", "Petrov", 24, 3, "...");

	Teacher* teacher1 = new Teacher("Sidor", "SIDOROV", 20, 100);
	int size = 6;
	Human** humans = new Human * [6] {st1, st2, doc1, doc2,  doc3, teacher1 }
	float averege = Manager::calculate_avg_age(Humans, size);

	cout << "Human avarege mark" << averege << endl;

	delete[] humans;
	delete st1;
	delete st2;
	delete doc1;
	delete doc2;
	delete doc3;
	delete teacher1;
	/*Human* h1 = new Human();
	Human* h2 = new Human();
	Human* h3 = new Human("Ivan", "Ivanov", 14);

	h1->name = "Alex";
	h1->age = 15;
	h1->surname = "no surname";
	
	cout << h3->getName() << endl;
	cout << h3->getSurname() << endl;
	cout << h3->getAge() << endl;

	delete h1;
	delete h2;
	delete h3;

	return 0;
}*/
