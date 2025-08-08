#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;

    Student(string name, int roll, int marks)
    {
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }
};

class CustomCompare
{
public:
    bool operator()(Student leftStudent, Student rightStudent)
    {
        if (leftStudent.marks < rightStudent.marks)
        {
            return false;
        }
        else if (leftStudent.marks == rightStudent.marks)
        {
            return leftStudent.roll > rightStudent.roll;
        }
        else
        {
            return true;
        }
    }
};

int main()
{
    priority_queue<Student, vector<Student>, CustomCompare> priorityQueue;

    int numberOfStudent;
    cin >> numberOfStudent;

    for (int i = 0; i < numberOfStudent; i++)
    {
        string name;
        int roll, marks;

        cin >> name >> roll >> marks;
        Student studentObject(name, roll, marks);
        priorityQueue.push(studentObject);
    }

    while (!priorityQueue.empty())
    {
        cout << priorityQueue.top().name << " " << priorityQueue.top().roll << " " << priorityQueue.top().marks << " " << endl;

        priorityQueue.pop();
    }

    return 0;
}