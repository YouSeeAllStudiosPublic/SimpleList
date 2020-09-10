#include <iostream>
#include <vector>
using namespace std;

class List{
    // access specifiers.
    private:
    protected:
    public:
    // constructor
    List(){

    }
    // destructor
    ~List(){
        
    }

    // members.
    vector<string> list;
    string name;

    // function decleration.
    void print_menu();
    void print_list();
    void add_item();
    void delete_item();
};