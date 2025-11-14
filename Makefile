# الكومبايلر وخياراته
CC = gcc
CFLAGS = -Wall -g -Iheaders

# كل ملفات الـ .c في نفس فولدر المشروع
SRCS = main.c color.c cursor.c draw.c screen.c
OBJS = $(SRCS:.c=.o)
TARGET = task11

# القاعدة الرئيسية
$(TARGET): $(OBJS)
	$(CC) $(OBJS) -o $(TARGET)

# قاعدة لكل ملف .c
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# لتنضيف الملفات المؤقتة
clean:
	rm -f *.o $(TARGET)
