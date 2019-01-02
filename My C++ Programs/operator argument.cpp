//is question ma hum ne operator overloading kari ha matlab
//object ko object se assign karaya with the help of a operator
//function which return type is counter(class) and it is saving the 
//value of count to a temporary variable and then returning it.
//through this function which return temp we can assign object to object.
//ager hum simple function banae jis ma count ko temp se return nhe
//karaen temporary variable bana k to phr wo function error dega iss ma
//c1=++c2.
#include<iostream>
using namespace std;
class counter{
	public:
	unsigned int count;
	public:
	counter():count(0)
	{
		
		}	
	int get_counter()
	{
		return count;
	}
	 counter operator++()
	{
		count++;
		counter temp;
		temp.count=count;
		return temp;
	}
};
main()
{
	counter c1,c2;
	cout<<"c1="<<c1.get_counter()<<endl;;
	cout<<"c2="<<c2.get_counter()<<endl;
	c1=++c2;
	++c1;
	cout<<"c1="<<c1.get_counter()<<endl;
	cout<<"c2="<<c2.get_counter();
	
	
	
	
}
