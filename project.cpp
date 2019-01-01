/* Name : 1-Muhammad  Mahmoud Attia 
          2- abdelrahman mohammed yeiha */
#include <bits/stdc++.h>
using namespace std;
//data type
    int k=0;
	string line;
	string find;
	char id[10];
	char name[50];
	char adress[50];
// to add
void add()
{
	fstream file;
//create file txt call it data then open it
		file.open("data.txt",ios::out|ios::app|ios::binary);
		cout<<"enter ID : ";
		cin>>id;

		cout<<"enter Name : ";
		cin>>name;

		cout<<"enter adress : ";
		cin>>adress;

		file<<id<<" | "<<name<<" | "<<adress<<endl;	
	
}
// to delet 
void delet (){
 cout << "Please Enter the name of record you want to delete: ";
  cin >> name;
  ifstream file;
  ofstream temp;
  file.open("data.txt",ios::in|ios::out|ios::binary);
//create file txt call it temp then open it
  temp.open("temp.txt");
  while (getline(file, line))
  {
    if (line != name){
      temp << line << endl;
  } 
  } 
  cout << "The record with the name " << name << " has been deleted " << endl;
  file.close();
  temp.close();
  file.open("data.txt", ios::out | ios::trunc);
  remove("record.txt");
	
}

// to search (diseply)
void search (){
string word;
    ifstream file;    
    cout<<"enter search word ";
     		cin>>word;
			 file.open("data.txt",ios::app);
    
    while (getline(file, line)) {
        if (line.find(word)!=string::npos) {
            cout << line << endl;
        }
    
    else cout << word << " not found" << endl;
    }	
}
int main()
{
    // Main Welcome Screen
    cout<<"                       Students Management System "<<endl;
	cout<<"  1) Add New Student "<<endl;
	cout<<"  2) Update Student  "<<endl;
    cout<<"  3) Delete Student  "<<endl;
    cout<<"  4) Display Student "<<endl;
    cout<<"  5) Exit "<<endl;
  
	cin>>k;
	
	fstream file;

	file.open("data.txt",ios::out|ios::app|ios::binary);
	

	if(k==1)
	{
	add();
	}
	
// to update (delet & add)
	else if(k==2)
	{
		delet();
		add();
	}
	// to delet 
else if (k==3)
{
  delet ();
}
  
  // to search (diseply)
  else if (k==4)
  {
    search();
  }

	else if (k==5){
     fstream file;
	  file.close();
	}	

	return 0;
}
