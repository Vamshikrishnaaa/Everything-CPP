#include<iostream> 
using namespace std;

int main(){
    int a=7;
    int *v=&a;
    int **m=&v;

    cout << v << endl; //v has address of a stored  
    cout << *v << endl; //dereffing v gives what is stored at adress of a
    cout << m << endl; // m has adress of v stored 
    cout << *m << endl; // dereffing m shows what is stored in adress of v
    cout << **m << endl; /* dereffing *m shows what in turn is stored in the
    adress stored in v ie adress of a is stored in v therefore output is 7 */
    
    // pointers simplified

    /* dereferencing simply means retrieving whats stored in the address
    which is inturn stored in the pointer 

    example
    a =5 
    *ptr =&a
    
    dereffiing ptr-
    cout << *ptr 
    
    retrieves you whats is stored in the address stored in the pointer ptr */

    
    return 0;
}