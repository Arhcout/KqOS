include Makefile.in

compile: libk libc

libc: $(LIBC_OBJ)
	$(AR) -ru $(BUILD_DIR)/libc.a $^

libk: $(LIBK_OBJ)
	$(AR) -ru $(BUILD_DIR)/libk.a $^

$(BUILD_DIR)/%.c.libc.o: %.c
	$(CC) $^ -o $@ $(LIBC_CFLAGS)

$(BUILD_DIR)/%.c.libk.o: %.c
	$(CC) $^ -o $@ $(LIBK_CFLAGS)
