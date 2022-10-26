// This is the progra written for problem 1 on week 8 of the homework. 
#include <iostream>
#include <iomanip>

using namespace std;

// Prototypes
void printMatrix(int myMat[][7], int n_rows, int n_colum);
void gradeinput(int myMat[][7], int n_row, int n_colunm);

int main()
{
//Declare Variables
int students;
int add = 1;
int sum = 0;
int add2 = 0;
int weight = 0;

cout << "Please enter the number of students:" << endl;
cin >> students;

//create or declare the array
int grades[students][7];


//Set the first column to 1 - students.
for (int r = 0; r < students; r++)
  {
  for (int c = 0; c <1; c++)
    {
  grades[r][c] = add;
  add++;
      }
  }

//Print the matrix to verify the prior 
printMatrix(grades, students, 7);


//This is for column 2 becuase column 2 was for the students
cout << "input the 4 grades." << endl;
for (int r = 0; r < students; r++)
  {
   for (int c = 1; c < 5; c++)
     {
        cin >> grades[r][c];
    
     }
  }


cout << endl;
printMatrix(grades, students, 7);


//TFind the average 
cout << "The average is:" << endl;
for (int r = 0; r < students; r++)
  {
   for (int c = 1; c < 5; c++)
     {
       sum = grades[r][c] + sum;
       grades[r][5] = sum/4;
     }
    sum = 0;
  }

cout << endl;
printMatrix(grades, students, 7);

cout << "The Weighted" << endl;
for (int r = 0; r < students; r++)
  {
  weight = 0;
  for (int c = 1; c < 5; c++)
    {
      if ((c == 1) or (c == 4))
       weight = (0.2 * grades[r][c] + weight);

      else if ((c == 2) or (c == 3))
       weight = (0.3 * grades[r][c] + weight);

      cout << weight <<" ";
      grades[r][6] = weight;
    }

  }

cout << endl;
printMatrix(grades, students, 7);

  }

void printMatrix(int myMat[][7], int n_rows, int n_colum)
  {
  for (int r = 0; r < n_rows; r++)
  {
  for (int c = 0; c < n_colum; c++)
    {
    cout << setw(10) <<myMat[r][c];
    }
  cout << endl;
  }
    
}