include Makefile.in

compile: $(KERNEL_OBJ)

$(CUR_BUILD_DIR)/%.c.o: %.c
	@mkdir -p $(dir $@)
	@echo -e "$(G)==! Compiling $^ !==$(END_COLOR)"
	$(CC) $^ -o $@ $(KERNEL_CFLAGS)

$(CUR_BUILD_DIR)/%.s.o: %.s
	@mkdir -p $(dir $@)
	@echo -e "$(G)==! Compiling $^ !==$(END_COLOR)"
	$(AS) $^ -o $@ $(KERNEL_ASMFLAGS)
