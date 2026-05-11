#include <iostream>

class Parent
{
    protected:
        int id;
        int *pr;
    public:
        Parent()
        {
            pr = new int();
        }
        Parent(int i) : id(i){}
        void set_id(int i)
        {
            id = i;
        }
        int get_id()
        {
            return (id);
        }
        virtual ~Parent(){
            std::cout << "deleting in parent" << std::endl;
            delete (pr);
        }
};

class Child : public Parent
{
    private:
        int id;
        int *ch;
    public:
        Child(){
        }
        void display()
        {
            std::cout << id << std::endl;
        }
        Child(int childId, int ParentId) : Parent(ParentId) ,id(childId){            
            ch = new int();
        }
        void display1()
        {
            std::cout << id << std::endl;
        }
        int get_id()
        {
            return (id);
        }
         ~Child(){
            std::cout << "deleting child" << std::endl;
            delete ch;
        }
};

int main()
{
    // Parent p = Child(9,100);
    // p.display();
    // p.display1();
    // p.Parent::set_id(1000);
    // std::cout << p.get_id() << std::endl;
    // std::cout << p.Parent::get_id() << std::endl;
    // p.scout(p);
    Parent *p = new Child();
    delete p;
}

//the difference between private and protected is :
//that the pravite is accessible only within the same class
//while protected is accessible also from same class and derived (child)