include Makefile.in

compile: $(ARCH_OBJ)

%.c.o: %.c
	$(CC) $^ -o $@ $(ARCH_CFLAGS)

%.s.o: %.s
	$(AS) $^ -o $@ $(ARCH_ASMFLAGS)
