/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   selection_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samjaabo <samjaabo@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 14:12:42 by samjaabo          #+#    #+#             */
/*   Updated: 2024/01/28 16:54:55 by samjaabo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void pr_arr(int *arr, int len)
{
    
    int i = 0;
    while (i < len)
        printf("%d| ", arr[i++]);
    printf("$\n");
}

int get_index_of_min_value(int *arr, int len)
{
    int i;
    int index_of_min;
    
    i = 0;
    index_of_min = 0;
    while (i < len)
    {
        if (arr[i] < arr[index_of_min])
            index_of_min = i;
        ++i;
    }
    return (index_of_min);
}

void selection_sort(int *arr, int len)
{
    int i;
    int index;
    int tmp;
    
    i = 0;
    while (i < len)
    {
        index = get_index_of_min_value(arr + i, len - i);
        tmp = arr[i];
        arr[i] = arr[i + index];
        arr[i + index] = tmp;
        ++i;
    }
}

int main(void)
{
    // range(-50 to 50)
    int arr[] = {38, 5, 48, 14, -29, -47, -6, -15, -49, -20, -43, 41, -50, -18, -10, -31, 16, 12, 43, 13, 0, 49, 21, 30, 11, 18, -12, -39, 27, 44, 37, -42, -16, -11, -27, -8, -19, 45, 31, -32, -30, -13, 23, -23, 47, 9, -45, 8, -7, 22, -36, 28, 2, 32, 10, 24, 1, -25, -40, -3, 34, 17, 50, 19, 25, -46, 15, -33, -41, -5, 3, 46, -37, -26, -48, -4, 40, 7, -2, 6, -22, 4, -35, 35, -14, -17, -24, -21, 29, -28, -44, 39, 20, -38, 42, 33, 26, -34, 36, -1, -9};
    selection_sort(arr, sizeof(arr)/sizeof(int));
    pr_arr(arr, sizeof(arr)/sizeof(int));
    return (0);
}