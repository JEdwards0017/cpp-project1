#include <iostream>

using namespace std;

//attempt at creating a function call based on the chapter 6 assignments but including a list now

int searchArray(const int[], int, int);

//main function

int main()
{
	//initialize array size to 18 to fit the list of numbers given to us and proceed to hard code them in

	const int listSize = 18;
	int listOfNum[listSize] = { 5658845, 4520125, 7895122, 8777541, 8451277, 1302850, 8080152, 4562555, 5552012, 5050552, 7825877, 1250255, 1005231, 6545231, 3852085, 7576651, 7881200, 4581002 };

	//intialize a cin value for the user, in this case charAccNum shall be used

	int charAccNum;

	//create the user input for the charge account number

	cout << "What is your charge account number?" << endl;
	cin >> charAccNum;
	cout << endl;

	//utilizing an if loop, check if the user's charge account number matches one in the list, display it back as valid, if not, display it back as invalid

	if (searchArray(listOfNum, 18, charAccNum))
		cout << "The charge account number " << charAccNum << " is valid." << endl;
	else
		cout << "The charge account number " << charAccNum << " is NOT valid." << endl;

	return 0;
}

//create the for loop function that will call back into int main() to properly run the if statement so it knows if the number was there AFTER searching the whole array

int searchArray(const int list[], int listRange, int charAccNum)
{
	for (int x = 0; x < listRange; x++)
	{
		if (list[x] == charAccNum)
			return true;
	}
	return false;
}