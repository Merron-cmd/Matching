#include<iostream>

using namespace std;

int main(int argc,char **argv)
{
	if (argc != 4)
	{
		cout << "Compare : The datas are too few or many.\n" ;
		return 0 ;
	}
	cout << "How many times do you want to compare : " ;
	int t ;
	cin >> t ;
	for (int i = 1 ;i <= t ;i ++)
	{
		system(argv[1]);
		system(argv[2]);
		system(argv[3]);
		if (system("C:\\windows\\system32\\fc biaoda.txt test.txt"))
		{
			printf("Error : Case %d :\n", i) ;
			cout << "The data:\n" ;
			system("type data.in") ;
			cout << "Program A:\n" ;
			system("type biaoda.txt") ;
			cout << "Programb:\n" ;
			system("type test.txt") ;
			cout << "\nThe comparing is failed.\n" ;
			return 0 ;
		}
	}
	cout << "No error\n" ;
    return EXIT_SUCCESS;
}
