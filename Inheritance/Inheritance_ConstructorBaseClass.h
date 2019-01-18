
class PetStoreItem
{
protected:
	int stockNum;
	double price;
public:
	PetStoreItem(int, double);
};


class PetStoreAnimal : public PetStoreItem
{
protected:
	int petAge;
public:
	PetStoreAnimal(int, double, int);
};
