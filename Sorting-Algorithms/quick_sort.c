/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samjaabo <samjaabo@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 14:12:42 by samjaabo          #+#    #+#             */
/*   Updated: 2024/01/28 14:44:24 by samjaabo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void pr_arr(int *arr, int len)
{
    
    int i = 0;
    while (i < len)
        printf("%d| ", arr[i++]);
    printf("\n");
}

void ft_quick_sort(int *arr, int len)
{
    int pivot;
    int i;
    int j;
    int tmp;

    pivot = len - 1;
    i = -1;
    j = 0;
    while (j <= pivot)
    {
        if (arr[j] <= arr[pivot])
        {
            ++i;
            tmp = arr[i];
            arr[i] = arr[j];
            arr[j] = tmp;
        }
        ++j;
    }
    if (len <= 2)
        return ;
    ft_quick_sort(arr, i);
    ft_quick_sort(arr + i + 1, len - i - 1);
}

int main(void)
{
    // range(-50 to 50)
    int arr[] = {38, 5, 48, 14, -29, -47, -6, -15, -49, -20, -43, 41, -50, -18, -10, -31, 16, 12, 43, 13, 0, 49, 21, 30, 11, 18, -12, -39, 27, 44, 37, -42, -16, -11, -27, -8, -19, 45, 31, -32, -30, -13, 23, -23, 47, 9, -45, 8, -7, 22, -36, 28, 2, 32, 10, 24, 1, -25, -40, -3, 34, 17, 50, 19, 25, -46, 15, -33, -41, -5, 3, 46, -37, -26, -48, -4, 40, 7, -2, 6, -22, 4, -35, 35, -14, -17, -24, -21, 29, -28, -44, 39, 20, -38, 42, 33, 26, -34, 36, -1, -9};
    ft_quick_sort(arr, sizeof(arr)/sizeof(int));
    pr_arr(arr, sizeof(arr)/sizeof(int));
    return (0);
}