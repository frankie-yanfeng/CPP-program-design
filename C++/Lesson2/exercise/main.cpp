#include <iostream>
#include <string>
#include <math.h>
#include <vector>
#include <sstream>

using namespace std;

class Student{
	private:
		string name;
		int age;
		string number;
		int firstAvgScore;
		int secondAvgScore;
		int thirdAvgScore;
		int fourthAvgScore;
		int overallAvgScore;
	public:
		Student(string name, int age, string number,int firstAvgScore,int secondAvgScore,int thirdAvgScore,int fourthAvgScore)
		{
			this->name = name;
			this->age = age;
			this->number=number;

			this->firstAvgScore=firstAvgScore;
			this->secondAvgScore=secondAvgScore;
			this->thirdAvgScore=thirdAvgScore;
			this->fourthAvgScore=fourthAvgScore;
		}

		int getOverallAvg()
		{
			overallAvgScore = floor((firstAvgScore+secondAvgScore+thirdAvgScore+fourthAvgScore)/4);
		}

		void output()
		{
			cout << name << "," << age << "," << number << "," << overallAvgScore;
		}
};

int main() {
	char Name[30];
	int Age;
	char ID[10];
	int Grade[4];
	int AverageGrade;
	char mark;

	cin.getline(Name, 30, ',');
	cin >> Age >> mark;
	cin.getline(ID, 10, ',');
	cin >> Grade[0] >> mark >> Grade[1] >> mark >> Grade[2] >> mark >> Grade[3];

	//cout << Name << endl;
	//cout << Age << endl;

	Student *s = new Student(Name,Age,ID,Grade[0],Grade[1], Grade[2], Grade[3]);

	s->getOverallAvg();

	s->output();

	return 0;
}