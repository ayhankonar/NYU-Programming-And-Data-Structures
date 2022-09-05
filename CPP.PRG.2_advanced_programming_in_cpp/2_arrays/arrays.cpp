#include<iostream>
using namespace std;

const int MAX_CLASS_SIZE = 60;

int main() {
  int numOfStudents;
  int gradesList[MAX_CLASS_SIZE];
  int currGrade;
  int ind, sum;
  double average;
  
  cout<<"Please enter the number of students in the class (no more than "<<MAX_CLASS_SIZE<<")"<<endl;
  cin>>numOfStudents;

  //reading the grades
  cout<<"Enter the students' grades (separated by a space)"<<endl;
  for (ind = 0; ind < numOfStudents; ind++){
    cin>>currGrade;
    gradesList[ind] = currGrade;
  }

  //calculating the average
  sum = 0;
  for (ind = 0; ind < numOfStudents; ind++){
    sum += gradesList[ind];
  }
  average = (double)sum / (double)numOfStudents; // REAL DIVISION, not INT DIVISION
  cout<<"The class average is "<<average<<endl;

  //print grades above average
  cout<<"The grades above the average are ";
  for (ind = 0; ind < numOfStudents; ind++) {
    if (gradesList[ind] > average) {
      cout<<gradesList[ind]<<" ";
    }
  }
  cout<<endl;

  return 0;
}