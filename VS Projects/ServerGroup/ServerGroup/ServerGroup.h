#ifndef SERVERGROUP_H
#define SERVERGROUP_H
class ServerGroup
{
private:
	int spServer, freeServer, numElements;
	// int *servers = new int [numElements];

public:

	ServerGroup(int num);
	bool spServerFree(int num);
	bool serverFree();
	void useServer(int avTransTime);
	void usespServer(int avTransTime);
	void decServers();
	void printData();
};
#endif
