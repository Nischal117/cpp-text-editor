#include <iostream>
#include "task.hpp"
#include <vector>


using namespace std;

	int main()
		{
		std::vector<Task> tasks;
		Task simpletask,t2;
		t2.description = "Make dinner";
		t2.completed = true;
		simpletask.description = "LearnC++";
		simpletask.completed = false;
		tasks.push_back(simpletask);
		tasks.push_back(t2);


	cout << "1st task : " <<"Description : " <<  tasks[0].description << endl << "Completed : " << tasks[0].completed  << endl << endl;		
	cout << "2nd task : " << endl << "description : " << tasks[1].description << endl << "Completed : " << tasks[1].completed << endl; 

		}
