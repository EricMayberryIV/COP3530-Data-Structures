#include "ServerGroup.h"

ServerGroup::ServerGroup(int num)
{
	numElements = num;
		spServer = 0;
		for (int x = 0; x < numElements; x++)
		{
			*(servers + x) = 0;
		}
}

bool ServerGroup::spServerFree(int num)
{
	if (spServer == 0)
		{ return true; }
		
		else 
		{ return false; }
}

bool ServerGroup::serverFree()
{
	for (int x = 0; x < numElements; x++)
			if (*(servers + x) == 0 )
			{
				freeServer = *(servers + x);
				return true;
			}
			else
				return false;
}

void ServerGroup::useServer(int avTransTime)
{
	freeServer = avTransTime;
}

void ServerGroup::usespServer(int avTransTime)
{
	spServer = avTransTime;
}

void ServerGroup::decServers()
{
	if (spServer > 0)
		{
			spServer -= 1;

			for (int x = 0; x < numElements; x++)
				if (*(servers + x) > 0)
				{
					*(servers + x) -= 1;
				}
		}
}

void ServerGroup::printData()
{

}
