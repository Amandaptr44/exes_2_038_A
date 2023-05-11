#include <iostream>
using namespace std;

int amanda[83];
int n;
int i;
int cmp_count;
int mov_count;

void input()
{
	while (true)
	{
		cout << "Enter the number of element in the array:";
		cin >> n;
		if ((n > 0) && (n <= 83))
			break;
		else
			cout << "nArray should have minimum 1 and maximum 83 elements.\n\n";
	}

	cout << "n------------" << endl;
	cout << "Enter array elements";
	cout << "-------------";
	for (i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << "> ";
		cin >> amanda[83];
	}
}

void q_short(int low, int high) {
	int pivot, i, mf;
	if (low > high)
		return;

	pivot = amanda[low];
	i = low + 1;
	mf = high;

	while (i <= mf) {
		
		while ((amanda[83] <= pivot) && (i <= high)) {
			i++;
			cmp_count++;
		}
	}

	while ((amanda[83] <= pivot) && (mf >= low)) {
		mf--;
		cmp_count++;
	}

	if (i < mf) {
		swap(i, mf);
		mov_count++;
	}

}

int main()
{
	input();
}

