#include "Header.h"


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

std::ofstream createFile()
{
	std::string fname;
	
	std::cout << "Please enter a file name(30 chars max)" << std::endl;
	std::getline(std::cin, fname);

	fname.append(".graph");
	std::ofstream outputfile;
	outputfile.open(fname);
	outputfile.close();
	std::cout << "File " << fname << " created" << std::endl;
	return outputfile;
}
