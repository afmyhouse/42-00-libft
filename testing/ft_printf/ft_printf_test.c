/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 19:32:47 by antoda-s          #+#    #+#             */
/*   Updated: 2022/11/29 16:49:47 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
/*
Data Type				bytes		Range								Format Specifier

signed char				1			-128 to 127							%c
unsigned char			1			0 to 255							%c

short int				2			-32,768 to 32,767					%hd
unsigned short int		2			0 to 65,535							%hu

int						4			-2,147,483,648 to 2,147,483,647		%d
unsigned int			4			0 to 4,294,967,295					%u

long int				4			-2,147,483,648 to 2,147,483,647		%ld
unsigned long int		4			0 to 4,294,967,295					%lu

long long int			8			-(2^63) to (2^63)-1					%lld
unsigned long long int	8			0 to 18,446,744,073,709,551,615		%llu

float					4												%f

double					8												%lf

long double				12												%Lf
*/

int	main(void)
{
	char			chr = 48;
	unsigned char	uchr = -48;

	char			*string = "Hello world!";
	/*unsigned char	*ustr = ['2', 16, 210, 'a'];*/
	
	short						sint = -32767;
	unsigned short				usint = 65535;
	int							idivider = 100000;
	float						fdivider = 100000;
	int							int_num = __INT32_MAX__;
	unsigned int				uint_num = 4294967295;
	long int					long_num = -9223372036854775807;
	unsigned long long int		long_long_num = -9223372036854775807;
	float						float_num = 9223372036854775807;
	double						double_num = 9223372036854775807;
	long double					long_double_num = -9223372036854775807.12345678;//18446744073709551615;
	
	
	printf("Size of char  \t\t: %ld\n", sizeof(char));
	printf("Size of shor  \t\t: %ld\n", sizeof(short));
	printf("Size of int   \t\t: %ld\n", sizeof(int));
	printf("Size of long_long_num \t: %ld\n", sizeof(long long int));
	printf("Size of float xxxxx \t: %ld\n", sizeof(float));
	printf("Size of float minus \t: %-ld\n", sizeof(float));
	printf("Size of double \t\t: %ld\n", sizeof(double));
	printf("Size of long double\t: %ld\n", sizeof(long double));
	
	
	
	printf("\nSPECIFIER : %%c chr\n");
	printf("- chr  %%+i \t:%+i\n", chr);
	printf("- uchr %%+1 \t:%+i\n", uchr);

	printf("- chr  %% i \t:% i\n", chr);
	printf("- uchr %% i \t:% i\n", uchr);

	printf("- chr  %%-i \t:%-i\n", chr);
	printf("- uchr %%-i \t:%-i\n", uchr);

	printf("- chr  %%i \t:%i\n", chr);
	printf("- uchr %%i \t:%i\n", uchr);
	printf("\n");
	//printf("- chr  %%+c \t:%+c\n", chr);
	//printf("- uchr %%+c \t:%+c\n", uchr);

	//printf("- chr  %% c \t:% c\n", chr);
	//printf("- uchr %% c \t:% c\n", uchr);

	printf("- chr  %%-c \t:%-c\n", chr);
	printf("- uchr %%-c \t:%-c\n", uchr);

	printf("- chr  %%c \t:%c\n", (char)chr);
	printf("- uchr %%c \t:%c\n", uchr);
	printf("\n");
	/*
	printf("- str %c\n", *string);
	printf("- sint %c\n", sint);
	printf("- usint %c\n", usint);
	
	printf("- int %c\n", int_num);
	printf("- uint_num %c\n", uint_num);
	
	printf("\nLONG - Size ( %ld bytes )\n", sizeof(long int));
	printf("- long_num \t[ %%ld,%%ld ] %ld,%ld\n", long_num/idivider,long_num%idivider);
	printf("- long_long_num [ %%+.16lld ] %+.16lld\n", -long_long_num/idivider);
	printf("- long_long_num %%-.15lld      %-.15lld\n", -long_long_num/idivider);
	printf("- long_long_num %%-lld        %-lld\n", -long_long_num/idivider);
	printf("- long_long_num %%x           %#x\n", int_num/10);
	printf("- long_long_num %%X           %#X\n", __INT32_MAX__);
	printf("\nFLOAT - Size ( %ld bytes )\n", sizeof(float));
	printf("- float %%.3f \t %.3f\n", float_num/fdivider);
	printf("- float %%f   \t %f\n", float_num/fdivider);
	printf("- float %%-f  \t %-f\n", float_num/fdivider);
	printf("- float %%1.  f  \t %.f\n", float_num/fdivider);
	printf("- float %%2.  f  \t %02.f\n", float_num/fdivider);
	printf("- float %%3.  f  \t %03.f\n", float_num/fdivider);
	printf("- float %%4.  f  \t %04.f\n", float_num/fdivider);
	printf("\nDOUBLE\n");
	printf("- double %.3f\n", double_num/1000);
	printf("- long double %Lf\n", long_double_num);
	*/
	return (0);
}