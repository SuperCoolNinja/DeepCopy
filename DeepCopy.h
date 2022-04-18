#pragma once

#include <iostream>
#include <string>


class DeepCopy
{
public:
	DeepCopy(std::string name, int data = 0);
	DeepCopy(const DeepCopy& source, std::string dt_name);
	~DeepCopy();
	const std::string getDataName();
	const int getData();
	void setDeepCopyData(int data);



private:
	int* ptr;
	std::string name;
};

