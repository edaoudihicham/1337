/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdaoudi <hdaoudi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 23:09:55 by hdaoudi           #+#    #+#             */
/*   Updated: 2024/11/08 13:41:59 by hdaoudi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (fd < 0)
		return ;
	if (n == -2147483648)
	{
		ft_putchar_fd('-', fd);
		ft_putchar_fd('2', fd);
		ft_putnbr_fd(147483648, fd);
	}
	else if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
		ft_putnbr_fd(n, fd);
	}
	else if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else if (n >= 0 && n <= 9)
	{
		ft_putchar_fd(n + '0', fd);
	}
}
// #include <fcntl.h> // For open
// #include <limits.h> // For INT_MIN and INT_MAX
// #include <stdio.h>
// #include <unistd.h> // For close

// void	ft_putnbr_fd(int n, int fd);
// // Ensure ft_putnbr_fd is declared or included

// int	main(void)
// {
// 	int fd;
// 	char buffer[1024];
// 	ssize_t bytes_read;

// 	// Open a temporary file to capture output
// 	fd = open("output.txt", O_CREAT | O_RDWR | O_TRUNC, 0644);
// 	if (fd < 0)
// 	{
// 		perror("Failed to open file");
// 		return (1);
// 	}
// 	// Test cases
// 	printf("Testing ft_putnbr_fd...\n");
// 	// Edge case 1: Zero
// 	ft_putnbr_fd(0, fd);
// 	write(fd, "\n", 1); // Newline for separation
// 	// Edge case 2: Single-digit positive number
// 	ft_putnbr_fd(5, fd);
// 	write(fd, "\n", 1);
// 	// Edge case 3: Single-digit negative number
// 	ft_putnbr_fd(-3, fd);
// 	write(fd, "\n", 1);
// 	// Edge case 4: Multi-digit positive number
// 	ft_putnbr_fd(12345, fd);
// 	write(fd, "\n", 1);
// 	// Edge case 5: Multi-digit negative number
// 	ft_putnbr_fd(-54321, fd);
// 	write(fd, "\n", 1);
// 	// Edge case 6: INT_MAX
// 	ft_putnbr_fd(INT_MAX, fd);
// 	write(fd, "\n", 1);
// 	// Edge case 7: INT_MIN
// 	ft_putnbr_fd(INT_MIN, fd);
// 	write(fd, "\n", 1);
// 	// Edge case 8: Invalid file descriptor (negative value)
// 	ft_putnbr_fd(42, -1); // Should not output anything
// 	// Close the file
// 	close(fd);
// 	// Read and print the contents of the output file
// 	fd = open("output.txt", O_RDONLY);
// 	if (fd < 0)
// 	{
// 		perror("Failed to reopen file");
// 		return (1);
// 	}
// 	printf("Output of ft_putnbr_fd:\n");
// 	while ((bytes_read = read(fd, buffer, sizeof(buffer) - 1)) > 0)
// 	{
// 		buffer[bytes_read] = '\0';
// 		printf("%s", buffer);
// 	}
// 	close(fd);
// 	return (0);
// }
