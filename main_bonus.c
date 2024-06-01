/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 07:47:45 by athonda           #+#    #+#             */
/*   Updated: 2024/06/01 11:37:12 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <strings.h>
#include <stdlib.h>
#include <assert.h>
#include <bsd/string.h>
#include <limits.h>
#include <stdint.h>

// for file operations
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include "libft.h"

// Helper function to clear the screen
void clearScreen() {
	system("clear||cls");
}

int	t_lstnew(void)
{
    int num = 42;
    char *str = "Hello, World!";
    t_list *new_node1, *new_node2;

    /* Create a new node with an integer content */
    new_node1 = ft_lstnew(&num);
    if (new_node1 == NULL)
    {
        printf("Failed to create new node.\n");
        return 1;
    }
    printf("New node created with content: %d\n", *(int *)new_node1->content);

    /* Create a new node with a string content */
    new_node2 = ft_lstnew(str);
    if (new_node2 == NULL)
    {
        printf("Failed to create new node.\n");
        free(new_node1); /* Free the previously allocated memory */
        return 1;
    }
    printf("New node created with content: %s\n", (char *)new_node2->content);

    /* Free the allocated memory */
    free(new_node1);
    free(new_node2);
	return (0);
}

void print_list(t_list *lst)
{
    t_list *current = lst;
    while (current != NULL)
    {
        printf("%d ", *(int *)current->content);
        current = current->next;
    }
    printf("\n");
}

int	t_lstadd_front(void)
{
	    t_list *head = NULL;
    int values[] = {10, 20, 30, 40, 50};
    size_t i;

    // Test 1: Add nodes to an initially empty list
    for (i = 0; i < sizeof(values) / sizeof(int); i++)
    {
        t_list *new_node = ft_lstnew(&values[i]);
        if (new_node == NULL)
        {
            printf("Failed to create new node.\n");
            return 1;
        }
        ft_lstadd_front(&head, new_node);
    }
    printf("List after adding nodes: ");
    print_list(head);

    // Test 2: Add a node to a non-empty list
    int new_value = 60;
    t_list *new_node = ft_lstnew(&new_value);
    if (new_node == NULL)
    {
        printf("Failed to create new node.\n");
        return 1;
    }
    ft_lstadd_front(&head, new_node);
    printf("List after adding a new node: ");
    print_list(head);

    // Test 3: Add a node to a NULL list
    head = NULL;
    new_value = 70;
    new_node = ft_lstnew(&new_value);
    if (new_node == NULL)
    {
        printf("Failed to create new node.\n");
        return 1;
    }
    ft_lstadd_front(&head, new_node);
    printf("List after adding a node to a NULL list: ");
    print_list(head);

    // Test 4: Add a NULL node
    ft_lstadd_front(&head, NULL);
    printf("List after adding a NULL node: ");
    print_list(head);

    // Free the allocated memory
    while (head != NULL)
    {
        t_list *temp = head;
        head = head->next;
        free(temp);
    }
return (0);
}

int	t_lstsize(void)
{
	 t_list *head = NULL;
    int values[] = {10, 20, 30, 40, 50};
    size_t i;

    // Test 1: Count nodes in an initially empty list
    int list_size = ft_lstsize(head);
    printf("Size of the empty list: %d\n", list_size);

    // Test 2: Add nodes and count them
    for (i = 0; i < sizeof(values) / sizeof(int); i++)
    {
        t_list *new_node = ft_lstnew(&values[i]);
        if (new_node == NULL)
        {
            printf("Failed to create new node.\n");
            return 1;
        }
        ft_lstadd_front(&head, new_node);
    }
    list_size = ft_lstsize(head);
    printf("Size of the list after adding nodes: %d\n", list_size);

    // Test 3: Add a NULL node and count the list size
    ft_lstadd_front(&head, NULL);
    list_size = ft_lstsize(head);
    printf("Size of the list after adding a NULL node: %d\n", list_size);

    // Free the allocated memory
    while (head != NULL)
    {
        t_list *temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}

int	t_lstlast(void)
{
   t_list *head = NULL;
    int values[] = {10, 20, 30, 40, 50};
    size_t i;

    // Test 1: Get the last node of an empty list
    t_list *last_node = ft_lstlast(head);
    printf("Last node of an empty list: %s\n", last_node == NULL ? "NULL" : "Not NULL");

    // Test 2: Add nodes and get the last node
    for (i = 0; i < sizeof(values) / sizeof(int); i++)
    {
        t_list *new_node = ft_lstnew(&values[i]);
        if (new_node == NULL)
        {
            printf("Failed to create new node.\n");
            return 1;
        }
        ft_lstadd_front(&head, new_node);
    }
    last_node = ft_lstlast(head);
    printf("Last node of the list: %d\n", *(int *)last_node->content);

    // Test 3: Add a NULL node and get the last node
    ft_lstadd_front(&head, NULL);
    last_node = ft_lstlast(head);
    printf("Last node of the list after adding a NULL node: %s\n", last_node == NULL ? "NULL" : "Not NULL");

    // Free the allocated memory
    while (head != NULL)
    {
        t_list *temp = head;
        head = head->next;
        free(temp);
    }

    return 0;

}

int	t_lstadd_back(void)
{
	   t_list *head = NULL;
    int values[] = {10, 20, 30, 40, 50};
    size_t i;

    // Test 1: Add a node to an empty list
    t_list *new_node = ft_lstnew(&values[0]);
    if (new_node == NULL)
    {
        printf("Failed to create new node.\n");
        return 1;
    }
    ft_lstadd_back(&head, new_node);
    printf("List size after adding the first node: %d\n", ft_lstsize(head));

    // Test 2: Add nodes to the end of the list
    for (i = 1; i < sizeof(values) / sizeof(int); i++)
    {
        new_node = ft_lstnew(&values[i]);
        if (new_node == NULL)
        {
            printf("Failed to create new node.\n");
            return 1;
        }
        ft_lstadd_back(&head, new_node);
    }
    printf("List size after adding nodes: %d\n", ft_lstsize(head));
    printf("Last node content: %d\n", *(int *)ft_lstlast(head)->content);

    // Test 3: Add a NULL node
    ft_lstadd_back(&head, NULL);
    printf("List size after adding a NULL node: %d\n", ft_lstsize(head));

    // Free the allocated memory
    while (head != NULL)
    {
        t_list *temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}

void free_content(void *content)
{
    free(content);
}

int	t_lstdelone(void)
{
   t_list *head = NULL;
    int values[] = {10, 20, 30, 40, 50};
    size_t i;

    // Add nodes to the list
    for (i = 0; i < sizeof(values) / sizeof(int); i++)
    {
        int *num = malloc(sizeof(int));
        *num = values[i];
        t_list *new_node = ft_lstnew(num);
        if (new_node == NULL)
        {
            printf("Failed to create new node.\n");
            return 1;
        }
        ft_lstadd_back(&head, new_node);
    }
    printf("List size after adding nodes: %d\n", ft_lstsize(head));

    // Test 1: Delete the first node
    t_list *node_to_delete = head;
    head = node_to_delete->next;
    ft_lstdelone(node_to_delete, free_content);
    printf("List size after deleting the first node: %d\n", ft_lstsize(head));

    // Test 2: Delete the last node
    node_to_delete = ft_lstlast(head);
    t_list *current = head;
    while (current->next != node_to_delete)
        current = current->next;
    current->next = NULL;
    ft_lstdelone(node_to_delete, free_content);
    printf("List size after deleting the last node: %d\n", ft_lstsize(head));

    // Test 3: Delete a node in the middle
    node_to_delete = head->next;
    head->next = node_to_delete->next;
    ft_lstdelone(node_to_delete, free_content);
    printf("List size after deleting a node in the middle: %d\n", ft_lstsize(head));

    // Free the remaining allocated memory
    while (head != NULL)
    {
        t_list *temp = head;
        head = head->next;
        ft_lstdelone(temp, free_content);
    }

    return 0;
}

int	t_lstclear(void)
{
	    t_list *head = NULL;
    int values[] = {10, 20, 30, 40, 50};
    size_t i;

    // Add nodes to the list
    for (i = 0; i < sizeof(values) / sizeof(int); i++)
    {
        int *num = malloc(sizeof(int));
        *num = values[i];
        t_list *new_node = ft_lstnew(num);
        if (new_node == NULL)
        {
            printf("Failed to create new node.\n");
            return 1;
        }
        ft_lstadd_back(&head, new_node);
    }
    printf("List size after adding nodes: %d\n", ft_lstsize(head));

    // Test 1: Clear the entire list
    ft_lstclear(&head, free_content);
    printf("List size after clearing the entire list: %d\n", ft_lstsize(head));

    // Test 2: Clear an empty list
    ft_lstclear(&head, free_content);
    printf("List size after clearing an empty list: %d\n", ft_lstsize(head));

    // Test 3: Add nodes and clear the list with a NULL del function
    for (i = 0; i < sizeof(values) / sizeof(int); i++)
    {
        int *num = malloc(sizeof(int));
        *num = values[i];
        t_list *new_node = ft_lstnew(num);
        if (new_node == NULL)
        {
            printf("Failed to create new node.\n");
            return 1;
        }
        ft_lstadd_back(&head, new_node);
    }
    ft_lstclear(&head, NULL);
    printf("List size after clearing the list with a NULL del function: %d\n", ft_lstsize(head));

    return 0;
}



void *double_content(void *content)
{
    int *new_content = malloc(sizeof(int));
    if (new_content == NULL)
        return NULL;
    *new_content = *(int *)content * 2;
    return new_content;
}

int	t_lstmap(void)
{
    t_list *head = NULL;
    int values[] = {10, 20, 30, 40, 50};
    size_t i;
    t_list *new_list;

    // Add nodes to the list
    for (i = 0; i < sizeof(values) / sizeof(int); i++)
    {
        int *num = malloc(sizeof(int));
        *num = values[i];
        t_list *new_node = ft_lstnew(num);
        if (new_node == NULL)
        {
            printf("Failed to create new node.\n");
            return 1;
        }
        ft_lstadd_back(&head, new_node);
    }
    printf("Original list: ");
    print_list(head);

    // Test 1: Map the list with a function that doubles the content
    new_list = ft_lstmap(head, double_content, free_content);
    if (new_list == NULL)
    {
        printf("Failed to create new list.\n");
        ft_lstclear(&head, free_content);
        return 1;
    }
    printf("New list after mapping: ");
    print_list(new_list);
    ft_lstclear(&new_list, free_content);

    // Test 2: Map an empty list
    new_list = ft_lstmap(NULL, double_content, free_content);
    if (new_list != NULL)
    {
        printf("Expected NULL, but got a non-NULL pointer.\n");
        ft_lstclear(&new_list, free_content);
        ft_lstclear(&head, free_content);
        return 1;
    }
    printf("Mapping an empty list returns NULL.\n");

    // Test 3: Map the list with a NULL function
    new_list = ft_lstmap(head, NULL, free_content);
    if (new_list != NULL)
    {
        printf("Expected NULL, but got a non-NULL pointer.\n");
        ft_lstclear(&new_list, free_content);
        ft_lstclear(&head, free_content);
        return 1;
    }
    printf("Mapping with a NULL function returns NULL.\n");

    ft_lstclear(&head, free_content);

    return 0;

}

int	main(void)
{

//t_lstnew();
//t_lstadd_front();
//t_lstsize();
//t_lstlast();
//t_lstadd_back();
//t_lstdelone();
//t_lstclear();
t_lstmap();
	return (0);
}