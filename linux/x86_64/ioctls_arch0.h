/* Generated by ioctls_gen.sh from definitions found in $linux/arch/x86/include/ tree. */
{ "asm/mce.h", "MCE_GETCLEAR_FLAGS", _IOC_READ, 0x4d03, 0x04 },
{ "asm/mce.h", "MCE_GET_LOG_LEN", _IOC_READ, 0x4d02, 0x04 },
{ "asm/mce.h", "MCE_GET_RECORD_LEN", _IOC_READ, 0x4d01, 0x04 },
{ "asm/msr.h", "X86_IOC_RDMSR_REGS", _IOC_READ|_IOC_WRITE, 0x63a0, 0x20 },
{ "asm/msr.h", "X86_IOC_WRMSR_REGS", _IOC_READ|_IOC_WRITE, 0x63a1, 0x20 },
{ "asm/mtrr.h", "MTRRIOC_ADD_ENTRY", _IOC_WRITE, 0x4d00, 0x10 },
{ "asm/mtrr.h", "MTRRIOC_ADD_PAGE_ENTRY", _IOC_WRITE, 0x4d05, 0x10 },
{ "asm/mtrr.h", "MTRRIOC_DEL_ENTRY", _IOC_WRITE, 0x4d02, 0x10 },
{ "asm/mtrr.h", "MTRRIOC_DEL_PAGE_ENTRY", _IOC_WRITE, 0x4d07, 0x10 },
{ "asm/mtrr.h", "MTRRIOC_GET_ENTRY", _IOC_READ|_IOC_WRITE, 0x4d03, 0x18 },
{ "asm/mtrr.h", "MTRRIOC_GET_PAGE_ENTRY", _IOC_READ|_IOC_WRITE, 0x4d08, 0x18 },
{ "asm/mtrr.h", "MTRRIOC_KILL_ENTRY", _IOC_WRITE, 0x4d04, 0x10 },
{ "asm/mtrr.h", "MTRRIOC_KILL_PAGE_ENTRY", _IOC_WRITE, 0x4d09, 0x10 },
{ "asm/mtrr.h", "MTRRIOC_SET_ENTRY", _IOC_WRITE, 0x4d01, 0x10 },
{ "asm/mtrr.h", "MTRRIOC_SET_PAGE_ENTRY", _IOC_WRITE, 0x4d06, 0x10 },
{ "linux/kvm.h", "KVM_ASSIGN_DEV_IRQ", _IOC_WRITE, 0xae70, 0x40 },
{ "linux/kvm.h", "KVM_ASSIGN_PCI_DEVICE", _IOC_READ, 0xae69, 0x40 },
{ "linux/kvm.h", "KVM_ASSIGN_SET_INTX_MASK", _IOC_WRITE, 0xaea4, 0x40 },
{ "linux/kvm.h", "KVM_ASSIGN_SET_MSIX_ENTRY", _IOC_WRITE, 0xae74, 0x10 },
{ "linux/kvm.h", "KVM_ASSIGN_SET_MSIX_NR", _IOC_WRITE, 0xae73, 0x08 },
{ "linux/kvm.h", "KVM_CHECK_EXTENSION", _IOC_NONE, 0xae03, 0x00 },
{ "linux/kvm.h", "KVM_CREATE_DEVICE", _IOC_READ|_IOC_WRITE, 0xaee0, 0x0c },
{ "linux/kvm.h", "KVM_CREATE_IRQCHIP", _IOC_NONE, 0xae60, 0x00 },
{ "linux/kvm.h", "KVM_CREATE_PIT", _IOC_NONE, 0xae64, 0x00 },
{ "linux/kvm.h", "KVM_CREATE_PIT2", _IOC_WRITE, 0xae77, 0x40 },
{ "linux/kvm.h", "KVM_CREATE_VCPU", _IOC_NONE, 0xae41, 0x00 },
{ "linux/kvm.h", "KVM_CREATE_VM", _IOC_NONE, 0xae01, 0x00 },
{ "linux/kvm.h", "KVM_DEASSIGN_DEV_IRQ", _IOC_WRITE, 0xae75, 0x40 },
{ "linux/kvm.h", "KVM_DEASSIGN_PCI_DEVICE", _IOC_WRITE, 0xae72, 0x40 },
{ "linux/kvm.h", "KVM_DIRTY_TLB", _IOC_WRITE, 0xaeaa, 0x10 },
{ "linux/kvm.h", "KVM_ENABLE_CAP", _IOC_WRITE, 0xaea3, 0x68 },
{ "linux/kvm.h", "KVM_GET_API_VERSION", _IOC_NONE, 0xae00, 0x00 },
{ "linux/kvm.h", "KVM_GET_CLOCK", _IOC_READ, 0xae7c, 0x30 },
{ "linux/kvm.h", "KVM_GET_CPUID2", _IOC_READ|_IOC_WRITE, 0xae91, 0x08 },
{ "linux/kvm.h", "KVM_GET_DEBUGREGS", _IOC_READ, 0xaea1, 0x80 },
{ "linux/kvm.h", "KVM_GET_DEVICE_ATTR", _IOC_WRITE, 0xaee2, 0x18 },
{ "linux/kvm.h", "KVM_GET_DIRTY_LOG", _IOC_WRITE, 0xae42, 0x10 },
{ "linux/kvm.h", "KVM_GET_EMULATED_CPUID", _IOC_READ|_IOC_WRITE, 0xae09, 0x08 },
{ "linux/kvm.h", "KVM_GET_FPU", _IOC_READ, 0xae8c, 0x1a0 },
{ "linux/kvm.h", "KVM_GET_IRQCHIP", _IOC_READ|_IOC_WRITE, 0xae62, 0x208 },
{ "linux/kvm.h", "KVM_GET_LAPIC", _IOC_READ, 0xae8e, 0x400 },
{ "linux/kvm.h", "KVM_GET_MP_STATE", _IOC_READ, 0xae98, 0x04 },
{ "linux/kvm.h", "KVM_GET_MSRS", _IOC_READ|_IOC_WRITE, 0xae88, 0x08 },
{ "linux/kvm.h", "KVM_GET_MSR_INDEX_LIST", _IOC_READ|_IOC_WRITE, 0xae02, 0x04 },
{ "linux/kvm.h", "KVM_GET_NR_MMU_PAGES", _IOC_NONE, 0xae45, 0x00 },
{ "linux/kvm.h", "KVM_GET_ONE_REG", _IOC_WRITE, 0xaeab, 0x10 },
{ "linux/kvm.h", "KVM_GET_PIT", _IOC_READ|_IOC_WRITE, 0xae65, 0x48 },
{ "linux/kvm.h", "KVM_GET_PIT2", _IOC_READ, 0xae9f, 0x70 },
{ "linux/kvm.h", "KVM_GET_REGS", _IOC_READ, 0xae81, 0x90 },
{ "linux/kvm.h", "KVM_GET_REG_LIST", _IOC_READ|_IOC_WRITE, 0xaeb0, 0x08 },
{ "linux/kvm.h", "KVM_GET_SREGS", _IOC_READ, 0xae83, 0x138 },
{ "linux/kvm.h", "KVM_GET_SUPPORTED_CPUID", _IOC_READ|_IOC_WRITE, 0xae05, 0x08 },
{ "linux/kvm.h", "KVM_GET_TSC_KHZ", _IOC_NONE, 0xaea3, 0x00 },
{ "linux/kvm.h", "KVM_GET_VCPU_EVENTS", _IOC_READ, 0xae9f, 0x40 },
{ "linux/kvm.h", "KVM_GET_VCPU_MMAP_SIZE", _IOC_NONE, 0xae04, 0x00 },
{ "linux/kvm.h", "KVM_GET_XCRS", _IOC_READ, 0xaea6, 0x188 },
{ "linux/kvm.h", "KVM_GET_XSAVE", _IOC_READ, 0xaea4, 0x1000 },
{ "linux/kvm.h", "KVM_HAS_DEVICE_ATTR", _IOC_WRITE, 0xaee3, 0x18 },
{ "linux/kvm.h", "KVM_INTERRUPT", _IOC_WRITE, 0xae86, 0x04 },
{ "linux/kvm.h", "KVM_IOEVENTFD", _IOC_WRITE, 0xae79, 0x40 },
{ "linux/kvm.h", "KVM_IRQFD", _IOC_WRITE, 0xae76, 0x20 },
{ "linux/kvm.h", "KVM_IRQ_LINE", _IOC_WRITE, 0xae61, 0x08 },
{ "linux/kvm.h", "KVM_IRQ_LINE_STATUS", _IOC_READ|_IOC_WRITE, 0xae67, 0x08 },
{ "linux/kvm.h", "KVM_KVMCLOCK_CTRL", _IOC_NONE, 0xaead, 0x00 },
{ "linux/kvm.h", "KVM_NMI", _IOC_NONE, 0xae9a, 0x00 },
{ "linux/kvm.h", "KVM_REGISTER_COALESCED_MMIO", _IOC_WRITE, 0xae67, 0x10 },
{ "linux/kvm.h", "KVM_REINJECT_CONTROL", _IOC_NONE, 0xae71, 0x00 },
{ "linux/kvm.h", "KVM_RUN", _IOC_NONE, 0xae80, 0x00 },
{ "linux/kvm.h", "KVM_SET_BOOT_CPU_ID", _IOC_NONE, 0xae78, 0x00 },
{ "linux/kvm.h", "KVM_SET_CLOCK", _IOC_WRITE, 0xae7b, 0x30 },
{ "linux/kvm.h", "KVM_SET_CPUID", _IOC_WRITE, 0xae8a, 0x08 },
{ "linux/kvm.h", "KVM_SET_CPUID2", _IOC_WRITE, 0xae90, 0x08 },
{ "linux/kvm.h", "KVM_SET_DEBUGREGS", _IOC_WRITE, 0xaea2, 0x80 },
{ "linux/kvm.h", "KVM_SET_DEVICE_ATTR", _IOC_WRITE, 0xaee1, 0x18 },
{ "linux/kvm.h", "KVM_SET_FPU", _IOC_WRITE, 0xae8d, 0x1a0 },
{ "linux/kvm.h", "KVM_SET_GSI_ROUTING", _IOC_WRITE, 0xae6a, 0x08 },
{ "linux/kvm.h", "KVM_SET_GUEST_DEBUG", _IOC_WRITE, 0xae9b, 0x48 },
{ "linux/kvm.h", "KVM_SET_IDENTITY_MAP_ADDR", _IOC_WRITE, 0xae48, 0x08 },
{ "linux/kvm.h", "KVM_SET_IRQCHIP", _IOC_READ, 0xae63, 0x208 },
{ "linux/kvm.h", "KVM_SET_LAPIC", _IOC_WRITE, 0xae8f, 0x400 },
{ "linux/kvm.h", "KVM_SET_MEMORY_ALIAS", _IOC_WRITE, 0xae43, 0x20 },
{ "linux/kvm.h", "KVM_SET_MEMORY_REGION", _IOC_WRITE, 0xae40, 0x18 },
{ "linux/kvm.h", "KVM_SET_MP_STATE", _IOC_WRITE, 0xae99, 0x04 },
{ "linux/kvm.h", "KVM_SET_MSRS", _IOC_WRITE, 0xae89, 0x08 },
{ "linux/kvm.h", "KVM_SET_NR_MMU_PAGES", _IOC_NONE, 0xae44, 0x00 },
{ "linux/kvm.h", "KVM_SET_ONE_REG", _IOC_WRITE, 0xaeac, 0x10 },
{ "linux/kvm.h", "KVM_SET_PIT", _IOC_READ, 0xae66, 0x48 },
{ "linux/kvm.h", "KVM_SET_PIT2", _IOC_WRITE, 0xaea0, 0x70 },
{ "linux/kvm.h", "KVM_SET_REGS", _IOC_WRITE, 0xae82, 0x90 },
{ "linux/kvm.h", "KVM_SET_SIGNAL_MASK", _IOC_WRITE, 0xae8b, 0x04 },
{ "linux/kvm.h", "KVM_SET_SREGS", _IOC_WRITE, 0xae84, 0x138 },
{ "linux/kvm.h", "KVM_SET_TSC_KHZ", _IOC_NONE, 0xaea2, 0x00 },
{ "linux/kvm.h", "KVM_SET_TSS_ADDR", _IOC_NONE, 0xae47, 0x00 },
{ "linux/kvm.h", "KVM_SET_USER_MEMORY_REGION", _IOC_WRITE, 0xae46, 0x20 },
{ "linux/kvm.h", "KVM_SET_VAPIC_ADDR", _IOC_WRITE, 0xae93, 0x08 },
{ "linux/kvm.h", "KVM_SET_VCPU_EVENTS", _IOC_WRITE, 0xaea0, 0x40 },
{ "linux/kvm.h", "KVM_SET_XCRS", _IOC_WRITE, 0xaea7, 0x188 },
{ "linux/kvm.h", "KVM_SET_XSAVE", _IOC_WRITE, 0xaea5, 0x1000 },
{ "linux/kvm.h", "KVM_SIGNAL_MSI", _IOC_WRITE, 0xaea5, 0x20 },
{ "linux/kvm.h", "KVM_SMI", _IOC_NONE, 0xaeb7, 0x00 },
{ "linux/kvm.h", "KVM_TPR_ACCESS_REPORTING", _IOC_READ|_IOC_WRITE, 0xae92, 0x28 },
{ "linux/kvm.h", "KVM_TRANSLATE", _IOC_READ|_IOC_WRITE, 0xae85, 0x18 },
{ "linux/kvm.h", "KVM_UNREGISTER_COALESCED_MMIO", _IOC_WRITE, 0xae68, 0x10 },
{ "linux/kvm.h", "KVM_X86_GET_MCE_CAP_SUPPORTED", _IOC_READ, 0xae9d, 0x08 },
{ "linux/kvm.h", "KVM_X86_SETUP_MCE", _IOC_WRITE, 0xae9c, 0x08 },
{ "linux/kvm.h", "KVM_X86_SET_MCE", _IOC_WRITE, 0xae9e, 0x40 },
{ "linux/kvm.h", "KVM_XEN_HVM_CONFIG", _IOC_WRITE, 0xae7a, 0x38 },
