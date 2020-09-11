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
    vector<vector<string>> mainList;
    string name;

    // function decleration.
    void write(vector<vector<string>> mainList);
    vector<vector<string>> read();
};