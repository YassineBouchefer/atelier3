#include <iostream>
using namespace std;
//definir le variable static i
static int i;
class Test{
    
 
    public:
    	//fonction call qui va incrementer la valeur de i
    void call(){  
        i++;
    }
    //fonction verified
    void verified(){ 
        cout<<i<<endl;

    }
};
int main(){
    Test t1;
    t1.call();
    t1.call();
    t1.call();
    t1.call();
    Test t2;
    t2.call();
    Test t3;
    Test t4;
    t1.verified();
};
