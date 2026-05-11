#include <iostream>

//using the C++98 has specific rules like :
// constractor to initialize a private member

class Account{
    private:
        int _balance;
    public:
        // Account(){
        //     _balance = 1000;
        // }
        void display ()
        {
            std::cout << _balance << std::endl;
        }
};

int main ()
{
    Account amine;
    amine.display(); // Account::display(&amine);
}


// Encapsulation protects your data and makes your code:
// safer + easier to maintain + more predictable

// in the int main() here is what the compiler sees :
// Account::display(&amine); which lead to :
// void Account::display(Account* const this) 
// {
//     std::cout << this->_balance << std::endl;
// }
// "this" is a pointer of type class 
// and it hold the address of the object created 


//even if we 1000 accout object the only thing that gets duplicated
// is the data inside , and this pointer do the job.