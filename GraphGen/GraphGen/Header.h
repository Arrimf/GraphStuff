#pragma once
#include<iostream>
#include<vector>
#include<string>
#include<fstream>
#include<time.h>

#define	  stop __asm nop


void generateGraphtoFile(const int);

class Graph
{


public:
	Graph(unsigned int);
	~Graph();
	void tofile();
	void fillatrandom(unsigned int);

private:
	std::vector<std::vector<int>> weights;
	unsigned int matrixsize;
};

std::ofstream createFile();