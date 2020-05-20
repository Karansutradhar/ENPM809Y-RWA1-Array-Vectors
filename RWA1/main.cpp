#include <iostream>
#include <array>
#include <vector>

using namespace std;

int main()
{

// Creating a 2D array of string objects with 3 rows and 2 columns, Initilizing and putting elements into the array
	string arr[3][2] = {
		{"blue","white"},
		{"green","white"},
		{"green","white"}
	};

// Creating 3 vectors of string objects where each vector represents a row of pegs	
vector <string> color_vec1;
vector <string> color_vec2;
vector <string> color_vec3;

// Reading the 2D array and store values of each row in a vector
// color_vec1 : First row of the array
color_vec1.push_back(arr[0][0]);
color_vec1.push_back(arr[0][1]);
// color_vec2 : Second row of the array
color_vec2.push_back(arr[1][0]);
color_vec2.push_back(arr[1][1]);
// color_vec3 : Third row of the array
color_vec3.push_back(arr[2][0]);
color_vec3.push_back(arr[2][1]);

// Prompting the user to enter the color for the missing peg using the picture of the tray
cout << "Enter the color for the missing peg using the picture of the tray " << endl;
string missing_peg[3];
// Storing the values given by the user in another array as missing_peg
for(int i=0; i<3; i++)
	{
		cin >> missing_peg[i];
	}
// Appropriately inserting the first, second, and third input in color_vec1 , color_vec2 , and color_vec3 respectively
color_vec1.insert(color_vec1.begin() + 2, missing_peg[0]);
color_vec2.insert(color_vec2.begin() + 0, missing_peg[1]);
color_vec3.insert(color_vec3.begin() + 1, missing_peg[2]);   

// Displaying the elements of each vector in the console
// 1 st element
cout<<"Vector 1: ";
for(int i=0; i<3; i++)
	{
		cout << color_vec1[i] << " ";
	}
cout<<endl;

// 2 nd element
cout<<"Vector 2: ";
for(int i=0; i<3; i++)
	{
		cout << color_vec2[i] << " ";
	}
cout<<endl;

// 3 rd element
cout<<"Vector 3: ";
for(int i=0; i<3; i++)
	{
		cout << color_vec3[i] << " ";
	}
cout<<endl;

// Creating a 2D vector (3 rows and 3 columns) of string object, named color_vec_2d

vector<vector<string> > color_vec_2d;  
// Using color_vec1, color_vec2, and color_vec3 to build color_vec_2d

// First row of color_vec_2d consists of elements of color_vec1
color_vec_2d.push_back(color_vec1);

// Second row of color_vec_2d consists of elements of color_vec2
color_vec_2d.push_back(color_vec2);

// Third row of color_vec_2d consists of elements of color_vec3
color_vec_2d.push_back(color_vec3);
		
// Displaying the size of color_vec_2d
cout << color_vec_2d.size();
cout << endl;

// Reading and displaying color_vec_2d in the console
for (int i = 0; i < 3; i++)
{
    for (int j = 0; j < 3; j++)
    {
        cout << color_vec_2d[i][j];
        cout<< " ";
    }
    cout << "\n";
}
return 0;
}


