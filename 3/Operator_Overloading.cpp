#include <iostream>

class Brain{
    private:
        int iq;
    public:
        Brain() : iq(0) {}
        Brain(const Brain& other) : iq(other.iq){}
        Brain& operator=(const Brain& other)
        {
            if (this != &other)
                this->iq = other.iq;
            return (*this);
        }
        int set_iq(int iq)
        {
            return (this->iq = iq);
        }
        int iq_value()
        {
            return (iq);
        }
        ~Brain(){}
};

class Human{
    private:
        std::string name;
        Brain *brain;
    public:
        Human(std::string name) : name(name){
            this->brain = new Brain;
        }
        Human(const Human& other) : name(other.name)
        {
            this->brain = new Brain(*(other.brain));
        }
        Human& operator=(const Human& other)
        {
            if (this != &other)
            {
                this->name = other.name;
                delete this->brain;
                this->brain = new Brain(*(other.brain));
            }
            return (*this);
        }
        bool operator==(const Human& other) const
        {
            return ((this->name == other.name) && (this->brain->iq_value() == other.brain->iq_value()));
        }
        Human operator+(const Human& other) const
        {
            Human result(*this);
            result.name = this->name + "-" + other.name;
            std::cout << "i m this  :" << this->name << std::endl;
            std::cout << "i m other   :" << other.name << std::endl;
            result.brain->set_iq((this->brain->iq_value() + other.brain->iq_value())/2);
            return (result);
        }
        void set_iq(int i)
        {
           std::cout << brain->set_iq(i) << std::endl;
        }
        int get_iq()
        {
            return (brain->iq_value());
        }
        std::string get_name()
        {
            return (name);
        }
        ~Human(){
            std::cout << this->name << " :";
            delete this->brain;
            std::cout << "Destructor called" << std::endl;
        }
};

int main()
{
    Human human("amine");
    Human human1("hicham");
    Human human2("oussama");

    human.set_iq(10);
    human1.set_iq(10);
    human2.set_iq(10);

    // std::cout << (human1 == human) << std::endl;
    // Human human_child = human1 + human;
    // std::cout << "human1 : " << human1.get_name() << "----->" << human1.get_iq()<< std::endl;
    // std::cout << "human :" << human.get_name() << "----->" << human.get_iq()<< std::endl;
    // std::cout << "child :" << human_child.get_name() << "----->" << human_child.get_iq()<< std::endl;
    Human human_child = human + human1 + human2;
}



//operator overloading : operators are just functions with a speciall
//name instead of a.add(b) ----> a + b the compiler translates a + b
//to a.operator+(b).

//A=B+C done by function : type operator+(const type &rhs)
// rhs : "right hand side" , return : return a new object not a 
//reference to an existing one