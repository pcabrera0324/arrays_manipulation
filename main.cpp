#include <iostream>
#include <iomanip>

using namespace std;


	
const int ROWS =3;
const int COLUMN=3;
void menu(int&option,int[ROWS][COLUMN],int&total,int&row,int&column);
int Gett(int[ROWS][COLUMN]);
float Getavg(int[ROWS][COLUMN]);
int GetRtotal(int[ROWS][COLUMN],int&);
int GetCtotal(int[ROWS][COLUMN],int&);
int GetHinR(int[ROWS][COLUMN],int&);
int GetLinR(int[ROWS][COLUMN],int&);
void show(int array[ROWS][COLUMN]);


int main(int argc, char** argv) {
	int option=0;
	int array[ROWS][COLUMN]={ {1,2,3},
							  {4,5,6},	
							  {7,8,9}  } ;
	int total=0;
	int row=0;
	int column=0;
	
	menu(option,array,total,row,column);



	
	return 0;
}

int Gett(int array[ROWS][COLUMN])
{
	
	 
	int total;
	for(int i=0;i<ROWS;i++)
	{
		for(int q=0;q<COLUMN;q++)
		{
			total+=array[i][q];
		}
	}
	
	return total;
	
}


void menu(int&option,int array[ROWS][COLUMN],int&total,int&row,int&column)
{
	cout << "::::::::MENU:::::::::"<<endl;
	cout <<"1)Get total        :::" << endl;
	cout <<"2)Get Average      :::" << endl;
	cout <<"3)Get Row total    :::" << endl;
	cout <<"4)Get Column total :::" << endl;
	cout <<"5)Get Highest Row  :::" << endl;
	cout <<"6)Get lowest in Row:::" << endl;
	cout << "::::::::::::::::::::: " << endl;
	cout << "option: ";
	cin >>option;
	cout << endl;
	switch(option)
	{
		case 1:  show(array);
		cout << "the total is " << Gett(array);
		cout << endl;
			menu(option,array,total,row,column);
			break;
		case 2:  show(array);
		cout << "the avg is " << Getavg(array);
		cout << endl;
			menu(option,array,total,row,column);
			break;
		case 3: show(array);
		 cout << "the row total is " <<  GetRtotal(array,row);
		 cout << endl;
			menu(option,array,total,row,column);
			break;
		case 4: show(array);
		 cout << "the column total is " << GetCtotal(array,column);
		 cout << endl;
			menu(option,array,total,row,column);
			break;
		case 5:  show(array);
		cout << "the higest number in the row is " <<GetHinR(array,row);
		cout << endl;
			menu(option,array,total,row,column);
			break;
		case 6:  show(array);
		 cout << "the lowest number in the row is " << GetLinR(array,row);
		 cout << endl;
			menu(option,array,total,row,column);
			break;
	}		
	
}

float Getavg(int array[ROWS][COLUMN]) 
{
	 int total;
	 float avg;
	total=Gett(array);

int size;
size=(ROWS*COLUMN);

 
	
	return total/size;
	
}

int GetRtotal(int array[ROWS][COLUMN],int&row) 
{
	 
	  cout << "Enter the Row you want to get the total" << endl;
	  cin >> row;
	  	cout << endl;
	  int total=0;
	  
	  for(int i=0;i<COLUMN;i++)
	  {
	  	total+=array[row-1][i];
	  }
	  
	   return total;
}

int GetCtotal(int array[ROWS][COLUMN],int&column) 
{
	 
	  cout << "Enter the Column you want to get the total" << endl;
	  cin >> column;
	  	cout << endl;
	  int total=0;
	  
	  for(int i=0;i<ROWS;i++)
	  {
	  	total+=array[i][column-1];
	  }
	  
	   return total;
}

int GetHinR(int array[ROWS][COLUMN],int&row)
{
	cout << "Enter num of row to get highest" << endl;
	cin >> row;
		cout << endl;
	row=row-1;
 int highest = array[row][0];	
 
  for(int i=0;i<COLUMN;i++)
  {
  	if(array[row][i]>highest)
  	{
  		highest=array[row][i];
	  }
  }
   return highest;
 
}

int GetLinR(int array[ROWS][COLUMN],int&row)
{
	cout << "Enter num of row to get lowest" << endl;
	cin >> row;
	cout << endl;
	row=row-1;
 int lowest = array[row][0];	
 
  for(int i=0;i<COLUMN;i++)
  {
  	if(array[row][i]<lowest)
  	{
  		lowest=array[row][i];
	  }
  }
   return lowest;
 
}

void show(int array[ROWS][COLUMN])
{
	 cout << ":::::ARRAY:::::" << endl;
	for(int i=0;i<ROWS;i++)
	{
		for(int x=0;x<COLUMN;x++)
		{
			
			cout << array[i][x] << " ";
		}
		 cout << endl;
	}
	cout << endl;
}




