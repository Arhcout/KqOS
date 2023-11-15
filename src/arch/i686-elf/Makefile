include Makefile.in

compile: $(ARCH_OBJ)

$(CUR_BUILD_DIR)/%.c.o: %.c
	@mkdir -p $(dir $@)
	@echo -e "$(G)==! Compiling $^ !==$(END_COLOR)"
	$(CC) $^ -o $@ $(ARCH_CFLAGS)

$(CUR_BUILD_DIR)/%.s.o: %.s
	@mkdir -p $(dir $@)
	@echo -e "$(G)==! Compiling $^ !==$(END_COLOR)"
	$(AS) $^ -o $@ $(ARCH_ASMFLAGS)
