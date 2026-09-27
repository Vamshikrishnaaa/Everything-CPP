#include<iostream>

class constr{
    public:
    constr()= default; // if a custom copy constructor is built , the default constructor fades away , so this is
                       // made to ensure theres a default constructor.
    
    //custom copy constructor
    int n1;
    int n2;
    constr(constr &obj){
        this->n1=obj.n1;
        this->n2=obj.n2;
    }

    void scanner(int num1,int num2){
        this->n1=num1;
        this->n2=num2;
    }

};
int main(){
    constr ob1;
    ob1.scanner(17,7);

    constr ob2(ob1); //custom copy constructor is automatically called/invoked when it detects object is being 
                     //sent as an argummnents
    return 0;
}