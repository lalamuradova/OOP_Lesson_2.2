//Task: 2
//Tələbələr qrupunu əks etdirən class təyin edin.
//Student : id, name, surname, age, group_no, speciality, city
//Print method - u yazilsin.
//kecirilen her seyden istifade edirsiniz


#include<iostream>
using namespace std;

class Student {
	int student_id;
	string name;
	int age;
	string group_no;
	string speciality;
	string city;
public:
	static int id;

	Student() {
		this->name = "anonim";
		this->group_no = "";
		this->speciality = "";
		this->city = "";
		id++;
		this->student_id = id;
	}
	
	Student(string name, int age, string speciality, string group_no, string city) : Student() {
		this->name = name;
		this->group_no = group_no;
		this->speciality = speciality;
		this->age = age;
		this->city = city;
	}

	static void Show_ID() {
		cout << "ID: " << id << endl;
	}

	string Get_Name()  const {
		return name;
	}

	string Get_Group_no()  const {
		return group_no;
	}
	string Get_Speciality()  const {
		return speciality;
	}
	string Get_City()  const {
		return city;
	}
	int Get_Age()  const {
		return age;
	}

	void Set_Name(string name) {
		if (name.length() > 8) {
			this->name = name;
		}
		else {
			cout << "Error" << endl;
		}
	}

	void Set_Group_No(string group_no) {
		if (group_no.length() > 5) {
			this->group_no = group_no;
		}
		else {
			cout << "Error" << endl;
		}
	}
	void Set_City(string city) {
		if (city.length() >= 4) {
			this->city = city;
		}
		else {
			cout << "Error" << endl;
		}
	}

	int Set_Age(int age) {
		if (14<age<55) {
			this->age = age;
		}
		else {
			cout << "Error" << endl;
		}
	}

	void Show_Student();

};

int Student::id = 0;

void Student::Show_Student() {
	cout << "ID: " << student_id << endl;
	cout << "Name: " << name << endl;
	cout << "Age: " << age << endl;
	cout << "Speciality: " << speciality << endl;
	cout << "Group_no: " << group_no << endl;
	cout << "City: " << city << endl;
}




void main() {

	Student* student1 = new Student("Hesen", 18, "Programmer", "FSDE_234", "Baku");
	Student* student2 = new Student("Mahmud", 27, "Cyber security", "FNDE_675", "Baku");
	Student* student3 = new Student("Orxan", 32, "Designer", "FDDE_234", "Baku");

	Student** student_array = new Student * [3] {student1, student2, student3};

	for (size_t i = 0; i < 3; i++)
	{
		student_array[i]->Show_Student();
		cout << "___________________________________________" << endl;
	}
}
