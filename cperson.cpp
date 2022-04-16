#include <iostream.>
#include <unistd.h>
using namespace std;

class Cperson
{
	private:
		Cperson();
		~Cperson();
	private:
		static Cperson * ps;
};
