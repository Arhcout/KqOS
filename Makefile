include Makefile.in

.PHONY: run kernel clean

run: kernel
	@$(QEMU) -kernel $(OS_NAME).kernel

debug: kernel
	@$(QEMU) -kernel $(OS_NAME).kernel -s
	@$(GDB) $(OS_NAME).kernel

kernel:
	$(MAKE) -C $(SRC_DIR)

clean:
	rm -rf $(BUILD_DIR)/*
	rm -f $(OS_NAME)

