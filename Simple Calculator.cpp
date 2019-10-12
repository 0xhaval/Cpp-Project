#include <iostream>
using namespace std;
int main() {
	double dNum1 = 0, dNum2 = 0, dResult = 0;
	int iChooise = 0;
	cout<<"\t\tWelcome To very simple Calculator @_@"<<endl;
	start_calc:cout<<"Enter two Number : ";
	cin>>dNum1>>dNum2;
	
	// Check two Number validation
	if(cin.fail())
	{
		cout<<"Ohh. Wrong Input Please Enter two Number Again\n";
		cin.clear();
		cin.ignore(10000,'\n');
		goto start_calc;
	}else
	{
		start_op:cout<<"\n1) for Sum\n2) for Sub\n3) for Mult\n4) for Divide\n";
		cout<<"Enter your chooise : ";
		cin>>iChooise;
		
		// Check OP validation
		if(cin.fail())
		{
			cout<<"Ohh. Wrong Input Please Enter Valid Number\n";
			cin.clear();
			cin.ignore(10000,'\n');
			goto start_op;
		}else
		{
			if(iChooise == 1)
			{
				dResult = dNum1 + dNum2;
				cout<<"Result : "<<dResult<<endl;
			}else if(iChooise == 2)
			{
				dResult = dNum1 - dNum2;
				cout<<"Result : "<<dResult<<endl;
			}else if(iChooise == 3)
			{
				dResult = dNum1 * dNum2;
				cout<<"Result : "<<dResult<<endl;
			}else if(iChooise == 4)
			{
				// Check second Number for Divide By Zero
				if(dNum2 == 0)
				{
					cout<<"Error Divide by Zero Try agaim ):\n";
					goto start_calc;
				}else
				{
					dResult = dNum1 / dNum2;
					cout<<"Result : "<<dResult<<endl;
				}
			}else
			{
				cout<<"Enter Number of Operation *_*"<<endl;
				goto start_op;
			}
		}
	}
	return 0;
}
