/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deneme.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selltrack <selltrack@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 17:19:37 by selltrack         #+#    #+#             */
/*   Updated: 2023/02/15 04:03:05 by selltrack        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int main(){ 
    int a = 21324;
    int b = -1234567;
    unsigned int hex = 1234567;
    char s[] = "ali brother";
    char t[] = "!'^+&/(";
    ft_printf("gus gona die %d %d %s %s %x %X ", a, b,s ,t, hex, hex);
}