#include <iostream>
#include <thread>
#include <mutex>
using namespace std;
recursive_mutex loo;
void OutputValue(int n)
{
	lock_guard<recursive_mutex> mLock(loo);
	cout << "Number:";
	for (int i = 0; i < n; ++i)
	{
		this_thread::sleep_for(chrono::duration<int, std::milli>(5));
		cout << " " << i;
	}
	cout << endl;
	
}
void f(int n )
{
	lock_guard<recursive_mutex> mLock(loo);
	OutputValue(n);
}

int mainduoxiancheng(int argc, char** argv)
{
	cout << "Normal function call" << endl;
	OutputValue(3);
	OutputValue(4);

	cout << "\nCall function with thread" << endl;
	thread mThread1(f, 3);
	thread mThread2(OutputValue, 4);
	mThread1.join();
	mThread2.join();
	cout << endl;

	return 0;
}