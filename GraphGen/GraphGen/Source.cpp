
#include<iostream>
#include<string>
#include<fstream>
#include<time.h>

#define	  stop __asm nop
void generateGraphtoFile(const int s)
{
	srand(time(0));
	std::string fname;
	std::cout << "Please enter a file name(30 chars max)" << std::endl;
	std::getline(std::cin, fname);

	fname.append(".graph");
	std::ofstream outputfile;
	outputfile.open(fname);

	int i, j;
	//fprintf(pfile, "Title: Author:%s Type:%s Year:%d Price:%4.2f\n"
	for (i = 0; i < s; i++)
	{
		for (j = 0; j < s; j++)
		{
			outputfile << (rand() % 2 ? (rand() % 69) : 0);
			if (j<(s - 1))
			{
				outputfile << ",";
			}
		}
		outputfile << "\n";
	}
	outputfile.close();
	std::cout << i << " " << j << " sized graph was written to file " << fname << std::endl;
}

int main()
{
	int const S = 6;

	generateGraphtoFile(S);

	stop

		return 0;
}