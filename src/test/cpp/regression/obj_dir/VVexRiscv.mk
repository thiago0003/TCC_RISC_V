# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Makefile for building Verilated archive or executable
#
# Execute this makefile from the object directory:
#    make -f VVexRiscv.mk

default: VVexRiscv

### Constants...
# Perl executable (from $PERL)
PERL = perl
# Path to Verilator kit (from $VERILATOR_ROOT)
VERILATOR_ROOT = /usr/local/share/verilator
# SystemC include directory with systemc.h (from $SYSTEMC_INCLUDE)
SYSTEMC_INCLUDE ?= 
# SystemC library directory with libsystemc.a (from $SYSTEMC_LIBDIR)
SYSTEMC_LIBDIR ?= 

### Switches...
# C++ code coverage  0/1 (from --prof-c)
VM_PROFC = 0
# SystemC output mode?  0/1 (from --sc)
VM_SC = 0
# Legacy or SystemC output mode?  0/1 (from --sc)
VM_SP_OR_SC = $(VM_SC)
# Deprecated
VM_PCLI = 1
# Deprecated: SystemC architecture to find link library path (from $SYSTEMC_ARCH)
VM_SC_TARGET_ARCH = linux

### Vars...
# Design prefix (from --prefix)
VM_PREFIX = VVexRiscv
# Module prefix (from --prefix)
VM_MODPREFIX = VVexRiscv
# User CFLAGS (from -CFLAGS on Verilator command line)
VM_USER_CFLAGS = \
	-std=c++11 \
	-DREGRESSION_PATH=\".//\" \
	-DIBUS_SIMPLE \
	-DIBUS_DATA_WIDTH=32 \
	-DDBUS_LOAD_DATA_WIDTH=32 \
	-DDBUS_STORE_DATA_WIDTH=32 \
	-DDBUS_SIMPLE \
	-DREDO=10 \
	-pthread \
	-Wno-unused-result \
	-Wno-parentheses \
	-Wno-misleading-indentation \
	-Wno-catch-value \
	-Wno-float-conversion \
	-DTHREAD_COUNT=12 \
	-O3 \
	-DCOREMARK \
	-DWITH_RISCV_REF \
	-DTIMER_INTERRUPT \
	-DEXTERNAL_INTERRUPT \
	-DDHRYSTONE \
	-DSTALL=1 \
	-DISA_TEST \
	-DTRACE_START=0 \

# User LDLIBS (from -LDFLAGS on Verilator command line)
VM_USER_LDLIBS = \
	-pthread \

# User .cpp files (from .cpp's on Verilator command line)
VM_USER_CLASSES = \
	main \

# User .cpp directories (from .cpp's on Verilator command line)
VM_USER_DIR = \
	. \


### Default rules...
# Include list of all generated classes
include VVexRiscv_classes.mk
# Include global rules
include $(VERILATOR_ROOT)/include/verilated.mk

### Executable rules... (from --exe)
VPATH += $(VM_USER_DIR)

main.o: main.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<

### Link rules... (from --exe)
VVexRiscv: $(VK_USER_OBJS) $(VK_GLOBAL_OBJS) $(VM_PREFIX)__ALL.a $(VM_HIER_LIBS)
	$(LINK) $(LDFLAGS) $^ $(LOADLIBES) $(LDLIBS) $(LIBS) $(SC_LIBS) -o $@


# Verilated -*- Makefile -*-
