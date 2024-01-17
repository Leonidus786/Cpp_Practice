// #include <iostream>
// using namespace std;
// int main()
// {
// 	int n;
// 	cin>>n;

// 	// n=3

// 	int maxNo=INT_MIN;
// 	int i=0;

// 	while(i<n)
// 	{
// 		int no;
// 		cin>>no;

// 		if(no>maxNo)
// 		{
// 			maxNo=no;
// 		}

// 		i++;
// 	}

// 	cout<<"The maximum of the given nos is: "<<maxNo;


// }
#include <iostream>
#include <climits>  // Include for INT_MIN
using namespace std;

int main()
{
    int n;
    cin >> n;

    // n=3

    int maxNo = INT_MIN;
    int i = 0;

    while (i < n)
    {
        int no;
        cin >> no;

        if (no > maxNo)
        {
            maxNo = no;
        }

        i++;
    }

    cout << "The maximum of the given numbers is: " << maxNo;

    return 0;
}
