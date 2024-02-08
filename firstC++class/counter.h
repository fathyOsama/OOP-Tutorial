#pragma once
class counter
{
private:
	unsigned int count;

public: 
	counter() :count(0)
	{

	}
	counter(int c) :count(c)
	{

	}
	int get_count()
	{
		return count;
	}
	counter operator ++()
	{
		++count;
		return counter(count);

	}
	counter operator --()
	{
		--count;
		return counter(count);
	}
};