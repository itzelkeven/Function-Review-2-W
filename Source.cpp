#include<iostream>
using namespace std;
float Add5Divide2(int num);
bool PointCollision(int x1, int y1, int x2, int y2);
void ToyGrabber();

int main() {
	int num;
	cout << "any number" << endl;
	cin >> num;
	cout << Add5Divide2(num) << endl;


	int x1;
	int y1;
	int x2;
	int y2;
	cout << "more numbers" << endl;
	cin >> x1;
	cin >> x2;
	cin >> y1;
	cin >> y2;
	if (PointCollision(x1, y1, x2, y2) == true)
		cout << "collision!" << endl;
	else
		cout << " no collision" << endl; 

	ToyGrabber();

}
float Add5Divide2(int num) {//returns int for some reason
	float ans = (num + 5) / 2;
	return ans;


}
bool PointCollision(int x1, int y1, int x2, int y2) {
	if (x1 == x2 && y1 == y2)
		return true;
	else
		return false;

}
void ToyGrabber() {
	int chance = rand() % 100 + 1;
	if (chance <= 20)
		cout << "you got ball" << endl;
	if (chance > 20 && chance <= 50) //30 percent
		cout << "Fidget Spinner" << endl;
	if (chance > 50 && chance <= 100)//50 percent
		cout << "Hotwheels" << endl;

}