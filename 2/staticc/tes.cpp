#include <iostream>
#include <string>

class Student {
private:
    std::string _name;
    // This variable is SHARED by all instances of Student
    static int  _totalStudents; 

public:
    Student(std::string name) : _name(name) {
        _totalStudents++; // Increment every time a student is born
        std::cout << name << " entered the school." << std::endl;
    }

    ~Student() {
        _totalStudents--; // Decrement when a student leaves
        std::cout << _name << " left the school." << std::endl;
    }

    // STATIC FUNCTION: Can be called without a Student object
    static int getTotal() {
        // return this->_name; // ERROR: Static doesn't know 'this'
        return _totalStudents; // SUCCESS: It can see static variables
    }
};

// Static variables MUST be initialized outside the class in the .cpp file
int Student::_totalStudents = 0;

int main() {
    std::cout << "Initial count: " << Student::getTotal() << std::endl;

    Student *amine = new Student("Amine");
    // Student *bob = new Student("Bob");

    std::cout << "Count after entries: " << Student::getTotal() << std::endl;

    delete amine;

    std::cout << "Count after one left: " << Student::getTotal() << std::endl;

    return 0;
}