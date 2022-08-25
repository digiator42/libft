NAME	=	libft.a

SRCS	=	ft_atoi.c     ft_itoa.c        ft_putendl_fd.c  ft_strlcat.c  ft_substr.c \
			ft_bzero.c    ft_lstsize.c     ft_putnbr_fd.c   ft_strlcpy.c  ft_tolower.c \
			ft_calloc.c   ft_memchr.c      ft_putstr_fd.c   ft_strlen.c   ft_toupper.c \
			ft_isalnum.c  ft_memcmp.c      ft_split.c       ft_strmapi.c \
			ft_isalpha.c  ft_memcpy.c      ft_strchr.c      ft_strncmp.c \
			ft_isascii.c  ft_memmove.c     ft_strdup.c      ft_strnstr.c \
			ft_isdigit.c  ft_memset.c      ft_striteri.c    ft_strrchr.c \
			ft_isprint.c  ft_putchar_fd.c  ft_strjoin.c     ft_strtrim.c \

BONUS = 	ft_lstnew.c	ft_lstadd_back.c	ft_lstadd_front.c	ft_lstclear.c \
			ft_lstdelone.c	ft_lstiter.c	ft_lstlast.c	ft_lstmap.c

CC_FLAGS = -Wall -Wextra -Werror

OBJCS = ${SRCS:.c=.o}

OBJCSB = ${BONUS:.c=.o}

RM = rm -rf

WAIT = sleep 0.2s

$(NAME) :	$(OBJCS)
			@ar rcs $(NAME) $(OBJCS)

all : $(NAME)

bonus : $(OBJCS) $(OBJCSB) libft.h
		@ar rcs $(NAME) $(OBJCSB) $(OBJCS)
 
%.o : %.c libft.h
	  @echo "Compiling: $<"
	  @clang $(CC_FLAGS) -c $< -o $@

clean : 
		@$(RM) $(OBJCS) $(OBJCSB)
		@echo Done For $@...

fclean : clean
		 @$(RM) $(NAME)
		 @echo Done For $@...	

re : fclean 
	 @$(WAIT)
	 @make
	 @echo cleaned all and $@made again For $@...

.all:		clean all re bonus
