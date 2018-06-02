#include "TV.h"

using namespace std;

int main()
{
	TV babaTv(false, 25, 125, 3, 40);	
	TV studentskiTV(1, 80, 20, 17, 24);

	if (studentskiTV < babaTv)
	{
		cout << "Baba tv inches bigger: " << babaTv.GetInches() << endl;
	}
	else
	{
		cout << "Studentski tv inches bigger: " << studentskiTV.GetInches() << endl;
	}

	Remote universalRemote;
	universalRemote.ChannelDown(babaTv);
	cout << babaTv << endl;

	universalRemote.ChannelUp(babaTv);
	universalRemote.VolumeUp(babaTv);
	cout << babaTv << endl;

	universalRemote.SetChannel(studentskiTV, 18);
	cout << studentskiTV << endl;
}