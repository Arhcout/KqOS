include Makefile.in

compile: libk libc

libc: $(LIBC_OBJ)
	@echo -e "$(Y)==! Creating libc !==$(END_COLOR)"
	$(AR) -ru $(BUILD_DIR)/libc.a $^

libk: $(LIBK_OBJ)
	@echo -e "$(Y)==! Creating libk !==$(END_COLOR)"
	$(AR) -ru $(BUILD_DIR)/libk.a $^

$(BUILD_DIR)/%.c.libc.o: %.c
	@mkdir -p $(dir $@)
	@echo -e "$(G)==! Compiling $^ !==$(END_COLOR)"
	$(CC) $^ -o $@ $(LIBC_CFLAGS)

$(BUILD_DIR)/%.c.libk.o: %.c
	@mkdir -p $(dir $@)
	@echo -e "$(G)==! Compiling $^ !==$(END_COLOR)"
	$(CC) $^ -o $@ $(LIBK_CFLAGS)
