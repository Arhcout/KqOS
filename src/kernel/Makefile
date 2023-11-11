include Makefile.in

compile: $(KERNEL_OBJ)

%.c.o: %.c
	$(CC) $^ -o $@ $(KERNEL_CFLAGS)

%.s.o: %.s
	$(AS) $^ -o $@ $(KERNEL_ASMFLAGS)
