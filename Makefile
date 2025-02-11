CC = gcc
CFLAGS = -Wall -g
TARGET = Dirtionary
all: $(TARGET)
$(TARGET): $(TARGET).c
	$(CC) $(CFLAGS) -o $(TARGET) $(TARGET).c
run: $(TARGET)
	./$(TARGET)
clean:
	rm -f $(TARGET)
