
	//      mulinh1

        #include        <iostream>
	using namespace std;

        class base 
        {
        public:
                long int  x;
        };

        class  derived1 :   virtual public base
        {
        public:
                long int  y;
        };

        class  derived2 :  public base
        {
        public:
                long int z;
        };

        class derived3 : public derived1,
                         public derived2
        {
        public:
                long int multiply() { return x * y * z; }
        };

        int main()
        {
        derived3  object;

        object.x = 10;
        object.y = 3;
        object.z = 5;

        cout << "product is " << object.multiply() << endl; 

        return 0;

        }
