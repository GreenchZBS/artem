#include "WorkClass.h"
void WorkClass::startWork() {
    std::cout << "Hello Привет World!\n";
	Freezer freezer01(1, 234, "Freezer Samsung", "Good thing...", 2, 34);
	Freezer* pointerFreezer01 = &freezer01;

	GoodBasic* universalPointer02 = new Freezer;
	static_cast<Freezer*>(universalPointer02)->toString();

}