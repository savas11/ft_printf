# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: osavas <osavas@student.42kocaeli.com>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/25 16:46:23 by osavas            #+#    #+#              #
#    Updated: 2022/06/25 16:46:27 by osavas           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = gcc
FLAGS = -Wall -Wextra -Werror -c
INCLUDES = ft_strler.c ft_ptrler.c ft_nbrler.c

all: $(NAME)

$(NAME):
	@$(CC) $(FLAGS) $(INCLUDES)
	@echo "Derleme Başarılı!"
	@ar -rcs $(NAME) *.o
	@echo "Kütüphane Oluşturuldu!"
	
clean:
	@rm -rf *.o
	@echo "Temizleme Tamamlandı!"

fclean: clean
	@rm -rf $(NAME)
	@echo "Tam Temizleme Tamamlandı"

re: fclean all

.PHONY: $(NAME) all clean fclean re
