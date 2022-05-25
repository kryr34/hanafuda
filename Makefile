OUT = build
LIB = include

CC		= gcc
CFLAGS	= -I $(LIB)

AR		= ar
ARFLAGS	= rv

vpath %.h $(LIB)
vpath %.c src src/mysocket
vpath %.o $(OUT)
vpath %.a $(OUT)


all: $(OUT) mysocket.a

$(OUT):
	mkdir $@

mysocket.a: client.o server.o common.o
	@echo AR $@
	@$(AR) $(ARFLAGS) $(OUT)/$@ $?

%.o: %.c
	@echo CC $@
	@$(CC) $(CFLAGS) -c $< -o $(OUT)/$@ $(LDFLAGS)

clean:
	rm -rf $(OUT)/*
