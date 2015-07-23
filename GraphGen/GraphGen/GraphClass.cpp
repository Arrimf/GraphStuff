#include"Header.h"



Graph::Graph(unsigned int size)
{
	matrixsize = size;
	weights.resize(matrixsize);
}

Graph::~Graph()
{

}

void Graph::tofile()
{
	std::string fname;

	std::cout << "Please enter a file name(30 chars max)" << std::endl;
	std::getline(std::cin, fname);

	fname.append(".graph");
	std::ofstream outputfile;
	outputfile.open(fname);
	for (int i = 0; i < matrixsize; i++)
	{
		for (int j = 0; j < matrixsize; j++)
		{
			outputfile << weights[i][j];
			if (j < matrixsize - 1)
			{
				outputfile << " ";
			}
		}
		outputfile << std::endl;

	}
	outputfile.close();
	std::cout << "File " << fname << " created" << std::endl;
}

void Graph::fillatrandom(unsigned int maxvalue=69)
{
	srand(time(0));
	for (int i = 0; i < matrixsize; i++)
	{
		weights[i].resize(matrixsize);
		for (int j = 0; j < matrixsize; j++)
		{
			weights[i][j] = (rand() % 2 ? (rand() % maxvalue) : 0);
		}
	}
}


