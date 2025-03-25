#pragma once
class eventTime
{
private:
	double lastUpdateTime = 0;
public:
	bool eventTriggered(double interval);
};

