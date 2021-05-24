#include <iostream>
#include <fstream>
#include <string>
#include <vector>

//class Question { task 1
//public:
//	void print(std::string os) const;
//	void read(std::string is);
//	unsigned ask() const;
//};
//
//
//void Question::print(std::string os) const
//{
//	std::ofstream filename(os);
//	if (filename.fail())
//	{
//		std::cout << "File did not open...";
//	}
//	while (!filename.eof())
//	{
//		std::cout << os;
//	}
//}
//
//void Question::read(std::string is)
//{
//	std::ifstream filename(is);
//	if (filename.fail())
//	{
//		std::cout << "File did not open...";
//	}
//	std::cout << "To stop entering words just press enter twice\n";
//	while (!filename.eof())
//	{
//		std::cin >> is;
//	}
//	
//}
//
//unsigned Question::ask() const
//{
//	std::string correctAnswer;
//	std::cin >> correctAnswer;
//	std::string answer;
//	std::cin >> answer;
//	if (answer != correctAnswer)
//	{
//		std::cout << "You get 0 points\n";
//	}
//	std::cout << "You get full points\n";
//	return 0;
//}
//
//class ClosedQuestion : public Question {
//public:
//	
//};
//
//class OpenQuestion : public Question {
//
//};
//
//class Test {
//public:
//	void readAndStore(char name[1024])
//	{
//		std::ifstream filename("test.txt");
//		if (filename.fail())
//		{
//			std::cout << "File did not open...";
//		}
//		size_t i = 0;
//		std::cout << "To stop entering, just press enter twice\n";
//		while (!filename.eof())
//		{
//			if (name[i]== '\n')
//			{
//				break;
//			}
//			std::cin >> name;
//			++i;
//		}
//		while (!filename.eof())
//		{
//			std::cout << name;
//		}
//
//	}
//};

class WorkItem {
protected:
	char* name();
public:
	WorkItem(std::string nameOf);
};

char* WorkItem::name()
{
	std::cout << "Enter a word\n";
	std::string nameOf;
	std::cin >> nameOf;
}

WorkItem::WorkItem(std::string nameOf)
{
	nameOf = "empty";
}

class TaskGroup : public WorkItem {
	std::vector<WorkItem> works;
public:
	void addTask() {
		std::cout << "Type a name for the new task\n";
		std::string taskToAdd;
		std::cin >> taskToAdd;
		works.push_back(taskToAdd);
	}
	void printTask() const {
		for (size_t i = 0; i < works.size(); i++)
		{
			//std::cout << works[i](works.begin(), works.end()) << '\n';
		}
		
	}

};
