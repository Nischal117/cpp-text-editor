#include<iostream>
#include<fstream>
#include<string>

using namespace std;
	
	void write(const string& filename)
		{
		string lekh,save;
		 ifstream file(filename);
		
		if(file.is_open())
		{
			    ofstream file(filename);
			getline (cin , lekh);
			file << lekh << endl;
		}
		
		else
			{
	            ofstream file(filename);
				
			}

		file.close();
	 	}



	void readandwrite(const string& filename)
	{
	string line;
	   ifstream file(filename);
             if(file.is_open())
          {       
                 while(getline(file ,line))
		{
	         cout<< line << endl;
                }
          }
          else
          	{
          cout << "File couldn't be opened" << endl;
          	}

	}


	int main()
	{
	string filename;
	cout << "Enter the filename : "; 
	getline(cin , filename);
	if(filename.find(".txt") == string::npos)
	{
		filename += ".txt";
	}

	readandwrite(filename);
	write(filename);
	readandwrite(filename);
	return 0;

	}
