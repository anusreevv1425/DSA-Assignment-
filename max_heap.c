#include <stdio.h>

int heap[100];
int size = 0;

void insert(int value)
{
    int i, parent, temp;

    size++;
    i = size - 1;
    heap[i] = value;

    while (i > 0)
    {
        parent = (i - 1) / 2;

        if (heap[parent] < heap[i])
        {
            temp = heap[parent];
            heap[parent] = heap[i];
            heap[i] = temp;

            i = parent;
        }
        else
        {
            break;
        }
    }
}

void display()
{
    int i;

    for (i = 0; i < size; i++)
        printf("%d ", heap[i]);

    printf("\n");
}

int main()
{
    int scores[] = {78, 92, 65, 88, 95, 72, 84, 90};
    int n = 8;
    int i;

    printf("Max Heap after each insertion:\n");

    for (i = 0; i < n; i++)
    {
        insert(scores[i]);

        printf("After inserting %d: ", scores[i]);
        display();
    }

    printf("\nHighest Score: %d\n", heap[0]);

    return 0;
}
