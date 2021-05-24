#include<iostream>

//struct Student
//{
//    char* name;
//    char egn[10];
//    int fac;
//    double marks[6];
//    Student()
//    {
//        name = new char[10];
//        strcpy_s(name, 6, "Empty");
//        strcpy_s(egn, 11, "0000000000");
//        fac = 0;
//        for (int i = 0; i < 6; i++)
//            marks[i] = 0;
//    }
//    Student(const char* _name, const char* _egn, int _fac, double* _marks)
//    {
//        name = new char[strlen(_name) + 1];
//        strcpy_s(name, strlen(_name) + 1, _name);
//        strcpy_s(egn, strlen(_egn) + 1, _egn);
//        fac = _fac;
//        for (int i = 0; i < 6; ++i)
//            marks[i] = _marks[i];
//    }
//    void print()
//    {
//        std::cout << name << std::endl;
//        std::cout << egn << std::endl;
//        std::cout << fac << std::endl;
//        for (int i = 0; i < 6; i++)
//            std::cout << marks[i] << ' ';
//        std::cout << std::endl;
//    }
//    void initialize(Student& s)
//    {
//        this->name = new char[strlen(s.name) + 1];
//        strcpy_s(this->name, strlen(s.name) + 1, s.name);
//        strcpy_s(this->egn, strlen(s.egn) + 1, s.egn);
//        this->fac = s.fac;
//        for (int i = 0; i < 6; ++i)
//            this->marks[i] = s.marks[i];
//    }
//};
//void avarage(Student& s)
//{
//    double sum = 0;
//    for (int i = 0; i < 6; i++)
//        sum += s.marks[i];
//    std::cout << "Avarage: " << (double)sum / 6 << std::endl;
//}
//void input(Student& s)
//{
//    std::cout << "Student name: ";
//    std::cin >> s.name;
//    std::cout << "Student egn: ";
//    std::cin >> s.egn;
//    std::cout << "Student faculty number: ";
//    std::cin >> s.fac;
//    std::cout << "Student marks:" << std::endl;
//    for (int i = 0; i < 6; i++)
//    {
//        std::cout << "Mark[" << i + 1 << "]=";
//        std::cin >> s.marks[i];
//    }
//    std::cout << std::endl;
//    s.print();
//}
//void generate(int n, Student& s)
//{
//    for (int i = 0; i < n; i++)
//    {
//        input(s);
//        avarage(s);
//        std::cout << std::endl;
//    }
//}
//int main()
//{
//    int n = 2;
//    Student empty;
//    empty.print();
//    std::cout << std::endl;
//    double grades[6] = { 4.50, 5, 5.50, 5.75, 5, 4 };
//    double grades1[6] = { 2, 2.99, 3.01, 4, 3.99, 3.50 };
//    Student s1("Stenli", "0123456789", 72090, grades);
//    s1.print();
//    std::cout << std::endl;
//    Student s2("Ivan", "987654321", 12345, grades1);
//    s2.initialize(s1);
//    s2.print();
//    std::cout << std::endl;
//    Student list;
//    std::cout << "Generate a list of students:" << std::endl;
//    generate(n, list);
//    return 0;
//}

//struct Rational
//{
//	int nom;
//	int denom;
//
//	Rational()
//	{
//		nom = 0;
//		denom = 0;
//	}
//
//	Rational(int nom, int denom)
//	{
//		this->nom = nom;
//		this->denom = denom;
//	}
//
//	void makeRational(int otherNom, int otherDenom)
//	{
//		nom = otherNom;
//		denom = otherDenom;
//	}
//
//	void printNom()
//	{
//		std::cout << "The nom is " << nom << std::endl;
//	}
//
//	void printDenom()
//	{
//		std::cout << "The denom is " << denom << std::endl;
//	}
//
//	void print()
//	{
//		std::cout << nom << "/" << denom << std::endl;
//	}
//};
//
//Rational sum(Rational r1, Rational r2)
//{
//	Rational result;
//	result.nom = r1.nom * r2.denom + r2.nom * r1.denom;
//	result.denom = r1.denom * r2.denom;
//	return result;
//}
//
//Rational multiply(Rational r1, Rational r2)
//{
//	Rational result;
//	result.nom = r1.nom * r2.nom;
//	result.denom = r1.denom * r2.denom;
//	return result;
//}
//
//Rational biggerNumber(Rational r1, Rational r2)
//{
//	if (r1.nom * r2.denom > r2.nom * r1.denom)
//	{
//		return r1;
//	}
//	return r2;
//}
//
//Rational getBiggestNumber(Rational rationalsList[], int count)
//{
//	Rational biggestNumber = rationalsList[0];
//	for (int i = 1; i < count; ++i)
//	{
//		if (biggestNumber.denom * rationalsList[i].nom > biggestNumber.nom * rationalsList[i].denom)
//		{
//			biggestNumber = rationalsList[i];
//		}
//	}
//	std::cout << "Biggest rational number: ";
//	return biggestNumber;
//}
//
//void generateRationals(Rational rationalsList[], int count)
//{
//	Rational* tempRational = new Rational;
//	for (int i = 0; i < count; ++i)
//	{
//		std::cout << "Enter rational number nom: ";
//		std::cin >> tempRational->nom;
//		std::cout << "Enter rational number denom: ";
//		std::cin >> tempRational->denom;
//
//		rationalsList[i].makeRational(tempRational->nom, tempRational->denom);
//		std::cout << std::endl;
//	}
//	delete tempRational;
//}
//
//int main()
//{
//	int count;
//
//	std::cout << "Enter rational numbers count: ";
//	std::cin >> count;
//	std::cout << std::endl;
//
//	Rational* rationalsList = new Rational[count];
//	generateRationals(rationalsList, count);
//
//	Rational biggestNumber;
//	biggestNumber = getBiggestNumber(rationalsList, count);
//	biggestNumber.print();
//
//	delete[] rationalsList;
//	return 0;
//}


struct Product
{
    char* name;
    char* manufacturer;
    bool type; // 0 - fruit ; 1 - vegetable
    int availability;
    double price;


    Product()
    {
        name = new char[10];
        strcpy_s(name, 6, "empty");

        manufacturer = new char[10];
        strcpy_s(manufacturer, 6, "empty");

        type = 0;
        availability = 0;
        price = 0.0;
    }

    Product(const char* _name, const char* _manufacturer, bool _type, int _availability, double _price)
    {
        name = new char[strlen(_name) + 1];
        strcpy_s(name, strlen(_name) + 1, _name);

        manufacturer = new char[strlen(_manufacturer) + 1];
        strcpy_s(manufacturer, strlen(_manufacturer) + 1, _manufacturer);

        type = _type;
        availability = _availability;
        price = _price;
    }
};
void equal(Product& a, Product& b)
{
    a.name = b.name;
    a.manufacturer = b.manufacturer;
    a.type = b.type;
    a.availability = b.availability;
    a.price = b.price;
};
Product p0("empty", "empty", 0, 0, 0);
struct Store
{
    char* name;
    int current_ammount_of_products;
    Product product_list[100];
    int maximum_capacity;

    Store()
    {
        name = new char[10];
        strcpy_s(name, 6, "empty");
        current_ammount_of_products = 0;
        for (int i = 0; i < current_ammount_of_products; ++i)
            equal(product_list[i], p0);
        maximum_capacity = 0;
    }

    Store(const char* _name, int _current_ammount_of_products, Product* _product_list, int _maximum_capacity)
    {
        name = new char[strlen(_name) + 1];
        strcpy_s(name, strlen(_name) + 1, _name);

        current_ammount_of_products = _current_ammount_of_products;

        for (int i = 0; i < _current_ammount_of_products; ++i)
            equal(product_list[i], _product_list[i]);

        maximum_capacity = _maximum_capacity;
    }

    void printStore()
    {
        std::cout << name << std::endl;
        std::cout << current_ammount_of_products << std::endl;
        for (int i = 0; i < current_ammount_of_products; i++)
        {
            std::cout << product_list[i].name << " ";
        }
        std::cout << std::endl;
        std::cout << maximum_capacity << std::endl;
        std::cout << std::endl;
    }

    void swapProducts(Product& a, Product& b)
    {
        Product c;
        equal(c, a);
        equal(a, b);
        equal(b, c);
    }

    void fruitFirst()
    {
        for (size_t i = 0; i < current_ammount_of_products; i++)
        {
            if (product_list[i].type == 0)
            {
                for (size_t j = 0; j < current_ammount_of_products; j++)
                {
                    if (product_list[j].type != 0 && i > j)
                    {
                        swapProducts(product_list[i], product_list[j]);
                        break;
                    }
                }
            }
        }
    }

    void vegetablesFirst()
    {
        for (size_t i = 0; i < current_ammount_of_products; i++)
        {
            if (product_list[i].type == 1)
            {
                for (size_t j = 0; j < current_ammount_of_products; j++)
                {
                    if (product_list[j].type != 1 && i > j)
                    {
                        swapProducts(product_list[i], product_list[j]);
                        break;
                    }
                }
            }
        }
    }

    void sortProductsByPrice()
    {
        for (size_t i = 0; i < current_ammount_of_products - 1; i++)
        {
            for (size_t j = i + 1; j < current_ammount_of_products; j++)
            {
                if (product_list[i].price > product_list[j].price)
                {
                    swapProducts(product_list[i], product_list[j]);
                }
            }
        }
    }

    void addNewProduct(Product& p)
    {
        current_ammount_of_products++;
        if (current_ammount_of_products > maximum_capacity)
        {
            std::cout << "Not enough space!" << std::endl;
            current_ammount_of_products--;
        }
        else
        {
            equal(product_list[current_ammount_of_products - 1], p);
        }
    }

    void sellProduct(Product& p)
    {
        if (p.availability <= 0)
        {
            std::cout << "Product is not available!" << std::endl;
        }
        else
        {
            p.availability--;
            if (p.availability == 0)
            {
                for (int i = 0; i < current_ammount_of_products; i++)
                {
                    if (product_list[i].name == p.name)
                    {
                        for (int j = i; j < current_ammount_of_products - 1; j++)
                        {
                            swapProducts(product_list[j], product_list[j + 1]);
                        }
                    }
                    break;
                }
                current_ammount_of_products--;
            }
        }
    }

    int vegetableCount()
    {
        int count = 0;
        for (int i = 0; i < current_ammount_of_products; i++)
        {
            if (product_list[i].type == 1)
                count++;
        }
        return count;
    }

    int fruitCount()
    {
        int count = 0;
        for (int i = 0; i < current_ammount_of_products; i++)
        {
            if (product_list[i].type == 0)
                count++;
        }
        return count;
    }

    double averagePrice()
    {
        double average = 0;
        for (int i = 0; i < current_ammount_of_products; i++)
        {
            average += product_list[i].price;
        }
        return average / (double)current_ammount_of_products;
    }
};
void equal(Store& a, Store& b)
{
    a.name = b.name;
    a.current_ammount_of_products = b.current_ammount_of_products;
    a.maximum_capacity = b.maximum_capacity;
    for (int i = 0; i < b.current_ammount_of_products; ++i)
        equal(a.product_list[i], b.product_list[i]);
};
void swapStores(Store& a, Store& b)
{
    Store c;
    equal(c, a);
    equal(a, b);
    equal(b, c);
}
void sortByFruit(Store* arr, int size)
{
    for (size_t i = 0; i < size - 1; i++)
    {
        for (size_t j = i + 1; j < size; j++)
        {
            if (arr[i].fruitCount() > arr[j].fruitCount())
            {
                swapStores(arr[i], arr[j]);
            }
        }
    }
}
void sortByVegetables(Store* arr, int size)
{
    for (size_t i = 0; i < size - 1; i++)
    {
        for (size_t j = i + 1; j < size; j++)
        {
            if (arr[i].vegetableCount() > arr[j].vegetableCount())
            {
                swapStores(arr[i], arr[j]);
            }
        }
    }
}
void sortByPrices(Store* arr, int size)
{
    for (size_t i = 0; i < size - 1; i++)
    {
        for (size_t j = i + 1; j < size; j++)
        {
            if (arr[i].averagePrice() > arr[j].averagePrice())
            {
                swapStores(arr[i], arr[j]);
            }
        }
    }
}
int main()
{
    Product p1("Pear", "Turkey", 0, 15, 7);
    Product p2("Tomato", "Bulgaria", 1, 10, 4);
    Product p3("Cucumber", "Greece", 1, 30, 3);
    Product p4("Apple", "Spain", 0, 20, 4);
    Product p5("Pear", "Cuba", 0, 25, 9);
    Product p6("Tomato", "Serbia", 1, 13, 5);
    Product p7("Cucumber", "Bulgaria", 1, 50, 2);
    Product p8("Apple", "China", 0, 15, 6);
    Product p9("Lettuce", "Romania", 1, 16, 2);
    Product p10("Peach", "Germany", 0, 13, 8);
    Product p11("Pineapple", "Brazil", 0, 1, 10);

    Product list1[4] = { p1,p2,p3,p4 };
    Product list2[4] = { p5,p6,p7,p8 };
    Product list3[5] = { p1,p2,p8,p10,p11 };
    Product list4[5] = { p2,p5,p7,p9,p10 };

    Store s1("Bila", 4, list1, 10);
    Store s2("Lidl", 4, list2, 8);
    Store s3("T-Market", 5, list3, 5);
    Store s4("Avanti", 5, list4, 6);

    s1.printStore();
    //s1.sortProductsByPrice();
    //s1.fruitFirst();
    //s1.vegetablesFirst();
    //s1.printStore();
    s1.addNewProduct(p11);
    s1.printStore();
    s1.sellProduct(p11);
    s1.printStore();
    //s1.sellProduct(p11);
    s2.printStore();
    s3.printStore();
    s4.printStore();

    int number_of_stores = 4;
    //std::cin >> number_of_stores;
    Store* stores = new Store[number_of_stores];
    equal(stores[0], s1);
    equal(stores[1], s2);
    equal(stores[2], s3);
    equal(stores[3], s4);

    sortByVegetables(stores, number_of_stores);
    std::cout << "Store with the most vegetables: " << stores[number_of_stores - 1].name << std::endl;

    sortByFruit(stores, number_of_stores);
    std::cout << "Store with the most fruits: " << stores[number_of_stores - 1].name << std::endl;

    sortByPrices(stores, number_of_stores);
    std::cout << "Store with the highest prices: " << stores[number_of_stores - 1].name << std::endl;
    std::cout << "Store with the lowest prices: " << stores[0].name << std::endl;


    delete[] stores;
}