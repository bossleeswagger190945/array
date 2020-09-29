#include <iostream>
#include <iomanip>
using namespace std;
void display(int a[],int);
int cal_bonus(int);

int main()
{ 
	int num;
	cout << "Enter Number of person : ";
	cin >> num;

	int *a = new int[num];
	int i;
	for(i=0;i<num;i++)
	{ 
		cout << "Enter The salary "<<i+1<<" : ";
		cin >> a[i];
	}
	cout << setfill('-')<<setw(55)<<"\n";
	display(a,num); //เรียกใช้ฟังก์ชั่น
	cout << setfill('-')<<setw(55)<<"\n";


	return 0;
}
void display(int a[],int num)
{
	int b =0;
	cout << "Threr are "<<num<<" persons."<<endl;
	for(int x=0;x<num;x++)
	{
		b= cal_bonus(a[x]);
		cout << "The Salary for person "<<x+1<<" = "<<a[x] << "  and Bouns = " << b <<endl;
	}

}
int cal_bonus(int b)
{
	b = b*2;
	return b;
}