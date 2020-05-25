
ARCH_lowercase = $(shell echo $(ARCH) | tr A-Z a-z)


rv32_isa_tests += isa/rv32ui/bltu.S         
              

ifneq (,$(findstring m,$(ARCH_lowercase)))

endif ## ifeq (m,$(findstring m,$(ARCH_lowercase)))
