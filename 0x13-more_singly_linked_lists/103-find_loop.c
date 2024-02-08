#include "lists.h"
/**
 * find_listint_loop -  a function that finds the loop in a linked list.
*/

listint_t *find_listint_loop(listint_t *head)
{
    listint_t *fast = head;

    listint_t *slow = head;

    if (!head)
    {
        return (NULL);
    }

    while (slow && fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            slow = head;
            while (slow != fast)
            {
                slow = slow->next;
                fast = fast->next;

            }
            return (fast);
        }

    }
    return (NULL);
}
