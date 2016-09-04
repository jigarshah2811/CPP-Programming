        // sample42i

        #include  <iostream>
        #include  <typeinfo>

        class  base
	{
        public:
        long int a;
                base(long int n) { a = n ; }
                void common()
                        { std::cout << "in base's version..." << a << std::endl; }
        };

        class derived : public base
        {
        public:
                derived(long int n) : base(n) { }
                 void common()
                        { std::cout << "in derived's version..." << a*a << std::endl; }
        };

        class derived2 : public derived
        {
        public:
                 derived2(long int n) : derived(n) { }
                 void common() 
                        { std::cout << "in derived2's version..." << a*a*a << std::endl; }
        };

        int main()
        {
        base     *pointer, object1(10);
        derived  object2(10);
        derived2 object3(10);

        pointer = &object1;
        std::cout << "pointer is of type " << typeid(*pointer).name() << std::endl;
        pointer = &object2;
        std::cout << "pointer is of type " << typeid(*pointer).name() << std::endl;
        pointer = &object3;
        std::cout << "pointer is of type " << typeid(*pointer).name() << std::endl;

        return 0;

        }
