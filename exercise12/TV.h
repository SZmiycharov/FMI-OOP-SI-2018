#pragma once

#include <iostream>

class TV
{
public:
	friend class Remote;
	
	TV(bool p = true, int vol = 1, int maxCh = 100, int currCh = 1, int in = 32) : 
		power(p), volume(vol), maxChannel(maxCh), currentChannel(currCh), inches(in) {};
	
	int GetInches() const { return inches; }

	friend std::ostream& operator<<(std::ostream& os, const TV& obj); //show volume and current channel
	friend bool operator<(TV & obj, TV & other);
private:
	bool power; //ON or OFF
	int volume; //volume: 0..100
	int maxChannel; //some TVs will be used with 125 channels, others with 200, etc.
	int currentChannel; //current channel: 0..maxChannel
	int inches;
};

class Remote
{
public:
	void Power(TV & tv) { tv.power = !tv.power; };
	bool SetChannel(TV & tv, int ch);
	bool VolumeUp(TV & tv);
	bool VolumeDown(TV & tv);
	bool ChannelUp(TV & tv);
	bool ChannelDown(TV & tv);
};

