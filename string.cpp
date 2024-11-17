using namespace std;
#include <iostream>
#include <string>

class String
{
private:
	string spd;
	int  max = 80;
	int  s = 0;
	static int coundef;
	static int normfunchin;





public:
	String():spd(80, ' ') {
		coundef++;

	};
	String(int s):spd(s, ' '),s(s) {

		normfunchin++;
	};
	String(string sd) :spd(sd) {
		normfunchin++;
	};

	~String() {
	
	
	};
	static void out() {
		int suma = coundef + normfunchin;
		cout <<"create:" << suma << endl;

	}



	void get() {
		cout << "enter:";
		getline(cin, spd);

	}

	void show() {
		
		if (coundef > normfunchin)
		{
			cout << spd.substr(0,80);
		}
		else
		{
			cout << spd;
		}



	}
	void show1() {

		
			cout << spd.substr(0, s);
	


	}
};

int String::coundef = 0;
int String::normfunchin = 0;

int main()
{
	String sd;
	sd.get();
	sd.show();
	cout << "\n";
	String sd1(60);
	sd1.get();
	sd1.show1();
	cout << "\n";
	String sd2("dfsssssssssssssssdddasd");
	sd2.show();
	cout << "\n";
	String::out();
	
}
