/*
Lovee Baccus
PA 5
Grocery Store Simulation
*/

//*************************************************QUEUENODE H FILE*********************************************************
#include"Data.h"


//delete data
class QueueNode
{
private:
	Data *pData;
	QueueNode *next;
public:
	~QueueNode();
#pragma region Constructors
	QueueNode();
	QueueNode(Data *newData);
	QueueNode(Data *newData, QueueNode *newNext);
#pragma endregion

#pragma region Getters
	Data * getData(void);
	QueueNode * getNext(void);
#pragma endregion

#pragma region Setters
	void setData(Data *newData);
	void setNextNode(QueueNode *newNext);
#pragma endregion
};