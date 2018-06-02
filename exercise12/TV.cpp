#include "TV.h"


std::ostream& operator<<(std::ostream& os, const TV& obj)
{
	os << "volume: " << obj.volume << "\n";
	os << "current channel: " << obj.currentChannel << "\n";

	return os;
}

bool operator<(TV & obj, TV & other)
{
	return obj.inches < other.inches;
}

bool Remote::SetChannel(TV & tv, int ch) 
{
	if (tv.currentChannel < tv.maxChannel)
	{
		tv.currentChannel = ch;
		return true;
	}
	
	return false;
}

bool Remote::VolumeUp(TV & tv)
{
	if (tv.volume < 100)
	{
		tv.volume++;
		return true;
	}

	return false;
}

bool Remote::VolumeDown(TV & tv)
{
	if (tv.volume > 0)
	{
		tv.volume--;
		return true;
	}

	return false;
}

bool Remote::ChannelUp(TV & tv)
{
	if (tv.currentChannel < tv.maxChannel)
	{
		tv.currentChannel++;
		return true;
	}

	return false;
}

bool Remote::ChannelDown(TV & tv)
{
	if (tv.currentChannel > 0)
	{
		tv.currentChannel--;
		return true;
	}

	return false;
}
