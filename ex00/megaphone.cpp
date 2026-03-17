// need to take in user input 
// all lower case letters need to become upper case
// if no input is given  then output prepared message 

#include <iostream>
#include <string>
//using namespace std;

int	main(int argc, char *argv[])
{
	int	x;
	
	if (argc < 2)
	{
		std::cout << "* LOUD AND UNBERABLE FEEDBACK NOISE *";
		return (0);
	}
	x = 1;
	while (argv[x] != NULL)
	{
		int i =0;
		while(argv[x][i] != '\0')
		{
			if (argv[x][i] >= 97 && argv[x][i] <=122)
				argv[x][i] -= 32;
			std::cout << argv[x][i];
			i++;
		}
		std::cout << " ";
		x++;
	}
	return (0);
}