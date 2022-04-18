#include "DeepCopy.h"

//Create ptr into heap then copy data to ptr :
DeepCopy::DeepCopy(std::string name, int data)
{
	this->ptr = new int;
	*this->ptr = data;
	this->name = name;
	std::cerr << "\nNew obj has been created with name :" << this->name << "\n";
}


//In this case the pointer will be copied with data pointing to :
DeepCopy::DeepCopy(const DeepCopy& source, std::string dt_name) : ptr(source.ptr), name(dt_name)
{
	//so here we create a new storage and copy the data over : 
	this->ptr = new int;
	*this->ptr = *source.ptr;
	std::cerr << "\nCopy constructor has been made\n";
}

DeepCopy::~DeepCopy()
{
	delete this->ptr;
	this->ptr = nullptr;
	std::cerr << "\nDestructor has free ptr of obj : " << this->name << std::endl;
}

const std::string DeepCopy::getDataName()
{
	return this->name;
}

const int DeepCopy::getData()
{
	return *this->ptr;
}

void DeepCopy::setDeepCopyData(int data)
{
	*this->ptr = data;
	std::cerr << "\nNew data set for " << this->name << " with value " << *this->ptr;
}

