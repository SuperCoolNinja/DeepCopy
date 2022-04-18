#include "DeepCopy.h"


//Now we can display our new value without issues...
//When the source goes out of scope the destructor is still call and release the ptr ...
//But now that's not a problem since the storage being release is unique to each source.
static void displayDeepCopy(DeepCopy sourceOne, DeepCopy sourceTwo)
{
	std::cerr << "\nData with :" << sourceOne.getDataName() << " " << sourceOne.getData() << "\n";
	std::cerr << "\nData with :" << sourceTwo.getDataName() << " " << sourceTwo.getData() << "\n";
}

int main()
{
	//Init our obj1 ptr to have 42 :
	DeepCopy obj1{"Obj1"};

	//Now come to the deep copy : 
	DeepCopy obj2{ obj1, "obj2" };

	//Setting new value on obj2 will be reflected only on obj2 now so each copy of object will have their own unique value.(Thanks to the deep copy)
	obj1.setDeepCopyData(42);
	obj2.setDeepCopyData(150);

    //Since now they both got an unique storage in memory when freeing the memory their will be no issue no more.
	displayDeepCopy(obj1, obj2);

	std::cin.get();

	EXIT_SUCCESS();
}