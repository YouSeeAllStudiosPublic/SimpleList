#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

class Database{
    // access specifiers.
    private:
    protected:
    public:
    // constructor
    Database(){

    }
    // destructor
    ~Database(){
        
    }

    // members.
    vector<string> list;
    string name;

    // function decleration.
    void write(vector<string> list);
    void read();
};