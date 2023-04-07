#include<stdio.h>
#include<stdlib.h>
#define size 5

int queue[size], front = -1, rear = -1;

void enqueue(int data)
{
	if (rear == (size-1))
	{
		printf("\nQueue is full!!\n");
	}
	else
	{
		if (front == -1)
			front = 0;
		rear++;
		queue[rear] = data;
		printf("\nInserted data is: %d", queue[rear]);
	}
}

void dequeue()
{
	if (front == -1)
	{
		printf("\nQueue is empty!!\n");
	}
	else
	{
		printf("\nDeleted data is: %d ", queue[front]);
		front++;
		if (front > rear)
			front = rear = -1;
	}
}

void display()
{
	printf("\nThe elements of the queue are: ");
	for (int i = front; i <= rear; i++)
		printf("%d ", queue[i]);
}

int main()
{
	dequeue();
	
	enqueue(1);
	enqueue(2);
	enqueue(3);
	enqueue(4);
	enqueue(5);
	enqueue(6);
	
	display();
	
	dequeue();
	
	printf("\n\nAfter deleting an item : ");
	display();
	
	return 0;
}
	