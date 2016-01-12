
#定义我们需要的各种局部变量
FILE = total_price
OBJS	= $(FILE).o
TARGET	= $(FILE)

#利用我们准备好的各种变量定义规则
$(TARGET):$(OBJS)
	gcc -o $(TARGET) $(OBJS)

#编译依赖关系
spise.o: spise.c
	gcc -g -c $(TARGET).c

#不要忘记清除中间文件，目标文件，子目录文件哦
.PHONY : clean
clean:
	rm $(TARGET) $(OBJS) 
