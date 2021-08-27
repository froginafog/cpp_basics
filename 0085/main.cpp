#include <iostream>

using namespace std;

//create a structure
//the name of this structure is "Person"
struct Person
{
    string first_name;
    string last_name;
    int age;
    double weight;  //in kg
}person_1, person_2;
//create an object called "person_1" for the structure "Person"
//create an object called "person_2" for the structure "Person"

int main()
{
    person_1.first_name = "Bob";
    person_1.last_name = "The Great";
    person_1.age = 22;
    person_1.weight = 77.5;

    person_2.first_name = "Robin";
    person_2.last_name = "The Hood";
    person_2.age = 33;
    person_2.weight = 81.2;

    cout << "person_1.first_name: " << person_1.first_name << endl;
    cout << "person_1.last_name : " << person_1.last_name << endl;
    cout << "person_1.age       : " << person_1.age << endl;
    cout << "person_1.weight    : " << person_1.weight << endl;
    cout << "--------------------------------------" << endl;
    cout << "person_2.first_name: " << person_2.first_name << endl;
    cout << "person_2.last_name : " << person_2.last_name << endl;
    cout << "person_2.age       : " << person_2.age << endl;
    cout << "person_2.weight    : " << person_2.weight << endl;

	return 0;
}

/*
person_1.first_name: Bob
person_1.last_name : The Great
person_1.age       : 22
person_1.weight    : 77.5
--------------------------------------
person_2.first_name: Robin
person_2.last_name : The Hood
person_2.age       : 33
person_2.weight    : 81.2
*/
