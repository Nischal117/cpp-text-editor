#include <iostream>
#include "task.hpp"
#include <vector>
#include <string>

using namespace std;

	int main()
		{
		std::vector<Task> tasks;
		Task simpletask;
		
	while(true)
		{
	    cout << "Press 1 for new task \nPress 2 for view all tasks \nPress 3 for exit\n";
	    int userInput;
	cin >> userInput;
	cin.ignore();
	
	
		if(userInput == 1)	
	{
		int userChoice;	
		cout << "Enter the total tasks : ";
		cin >> userChoice;
		cin.ignore();
		for(int i = 0 ; i< userChoice ; i++)
		{
		cout << "Enter a task description : ";
		getline(cin , simpletask.description);
                simpletask.completed = false;
		tasks.push_back(simpletask);
		}
	}
		else if(userInput == 2)
	{
		for(int i = 0 ; i < tasks.size() ; i++)
		{
	cout << "task" << i+1 << " : " <<"Description : " <<  tasks[i].description << "   Completed : " << tasks[i].completed  << endl;		
		}
	
	}
		else if(userInput == 3)
		{
		break;
		}
		
		else
	{
		cout << "Invalid input";
		
	}


		}	

}
