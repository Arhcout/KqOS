include Makefile.in

compile: arch kernel libc
	$(MAKE) -C $(LIBC_DIR)
	$(MAKE) -C $(ARCH_DIR)
	$(MAKE) -C $(KERNEL_DIR)
	$(LD) -T $(ARCH_DIR)/linker.ld $(OBJ) $(BUILD_DIR)/libk.a -o $(BUILD_DIR)/$(OS_NAME).kernel $(LDFLAGS)

