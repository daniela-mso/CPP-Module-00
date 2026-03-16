// need to take in user input 
// all lower case letters need to become upper case
// if no input is given  then output prepared message 

#include <iostream>
#include <string>
//using namespace std;

int	main(int argc, char *argv[])
{
	(void)argc;
	std::string phrase;
	//std::cout << "write something";
	int x = 1;
	phrase = argv[x];
	//std::cin >> phrase;
	int i =0;
	while (phrase[i] != '\0')
	{
		if (phrase[i] >= 97 && phrase[i] <=122)
			phrase[i] -= 32;
		i++;
	}
	std::cout << phrase;
	return (0);
}