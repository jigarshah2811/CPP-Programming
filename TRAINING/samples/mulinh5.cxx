
	//      mulinh5

        #include        <iostream>
	using namespace std;
   //==============================================================
        class base 
        {
        public:
                long int  x;
		base(long int b){cout << "base constructor..." << b << endl;}
        };
    //==============================================================
        class  derived1 :  public base
        {
        public:
                long int  y;
		derived1(long int a):base(a)
		{cout << "derived1 constructor..." << endl;}
        };
   //==============================================================
        class  derived2 :  virtual public derived1
        {
        public:
                long int z;
		derived2(long int a):derived1(a)
		{cout << "derived2 constructor..." << endl;}
        };
   //==============================================================
        class derived3 : virtual public derived1,
                         	 public derived2
        {
        public:
                long int multiply() { return x * y * z; }
		derived3(long int a):derived2(a),derived1(a)
		{cout << "derived3 constructor..." << a << endl;}
        };
   //==============================================================
        int main()
        {
        derived3  object(10);

        object.x = 10;
        object.y = 3;
        object.z = 5;

        cout << "product is " << object.multiply() << endl; 

        return 0;

        }
