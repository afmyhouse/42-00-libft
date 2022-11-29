/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_struct_0.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 22:15:30 by antoda-s          #+#    #+#             */
/*   Updated: 2022/11/28 22:28:56 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

typedef struct student {
   char name[50];
   int age;
}st;

// function prototype
void display(st *s);

int main() {
   st s1;

   printf("Enter name: ");

   // read string input from the user until \n is entered
   // \n is discarded
   scanf("%[^\n]%*c", s1.name);

   printf("Enter age: ");
   scanf("%d", &s1.age);

   display(&s1); // passing struct as an argument

   return 0;
}

void display(st *s) {
   printf("\nDisplaying information\n");
   printf("Name: %s", (*s).name);
   printf("\nAge: %d\n", (*s).age);
}