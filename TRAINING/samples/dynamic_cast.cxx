//  dynamic_cast 
//
#include <memory>
#include <iostream>

class base
{
public:
    virtual void vfunc() = 0;    
    //virtual ~base() {};
};
class derived : public base
{
public:
    virtual void vfunc() { std::cout << "derived vfunc" << std::endl;} 
    void dfunc() { std::cout << "derived dfunc" << std::endl;}
};

class derived2 : public base
{
public :
    virtual void vfunc() { std::cout << "derived2 vfunc" << std::endl;}
    void d2func() { std::cout << "derived2 d2func" << std::endl;}
};

base *CreateRandom()
{
    if( (rand()%2) == 0 )
        return new derived;
    else
        return new derived2;
}

int main()
{
   for( int n = 0; n < 10; ++n )
    {
        std::cout << "iteration: " << n << std::endl;
        base *ptr1 = CreateRandom();

        ptr1->vfunc();

        derived *ptr2 = dynamic_cast<derived *>(ptr1);
        derived2 *ptr3 = dynamic_cast<derived2 *>(ptr1);
        if ( ptr3 )
            ptr3->d2func();
        if ( ptr2 )
            ptr2->dfunc();
    }

  return 0;
}
