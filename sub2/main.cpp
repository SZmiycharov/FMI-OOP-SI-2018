using namespace std;

#include <iostream>
#include <string>

class FootballPlayer{
public:
	FootballPlayer();
	FootballPlayer(string name);
	~FootballPlayer();
	string getName() const;
	void setName(string name);

private:
	string m_name;
};

FootballPlayer::FootballPlayer()
{
	m_name = "NO NAME";
}

FootballPlayer::FootballPlayer(string name)
{
	m_name = name;
}

FootballPlayer::~FootballPlayer()
{
	cout << "Bye, " << m_name << endl;
}

string FootballPlayer::getName() const
{
	return m_name;
}

void FootballPlayer::setName(string name)
{
	m_name = name;
}

struct Point{
	int x;
	int y;
};

int main()
{
	Point a{ 1, 2 };
	FootballPlayer ronaldo;
	ronaldo.setName("Cristiano Ronaldo");

	cout << ronaldo.getName() << endl;

	FootballPlayer messi("Lionel Messi");
	cout << messi.getName() << endl;

	system("pause");
}
