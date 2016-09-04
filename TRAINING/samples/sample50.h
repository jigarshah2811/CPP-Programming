        // sample50.h

	class  ov
	{
	private:
		long int a,b;
	public:
		ov();
		ov(long int x,long int y);
		void get_a_b(long int &x,long int&y);
		void operator++(int);
	};
