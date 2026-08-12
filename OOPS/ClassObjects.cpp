//This File contains:
//Class and objects , parametric function insdide class, "this" constructor usage
//copy construtor in another file
#include<iostream> 
using namespace std;

class exp{
private:

public:
    string name;
    int age;

    exp(){ //this is a constructor its name should always be same as class name , same with custom copy constructor
        cout << "Example Constructor" << endl;
    }
    void function(string name, int age){
         this->name=name;
         this->age=age; //meaning attributes in class are assigned with values recieves as parameters 
                         // for the giiiven object mentioned using "this" constructor    
        cout << this->name << endl << this->age << endl ; //accessing the attributes for the given
                                                          //object using "this" constructor           
    }
};

int main(){
    
    exp obj1;
    obj1.function("Vamshi",19);
    cout << obj1.name << endl; //another way to access the class attributes
    
    
    return 0;
}