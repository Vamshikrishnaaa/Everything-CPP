#include<iostream> 
using namespace std;

class stu {
public:
    stu(){

    }
    string name;
    stu(string  n)
    {
        this->name=n;
    }

    void func(string x);
    string print();
};
void stu::func(string x){
    this->name=x;
}
string stu::print(){
    return name;
}



int main(){
    stu s;
    stu *ptr=&s;
    
    ptr->name="Vamshi";
    cout << ptr->name;
    
    ptr->func("Krishna");
    cout<< ptr->print();
    
    return 0;
}