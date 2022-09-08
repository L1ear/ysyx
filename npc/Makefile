# all:
# 	@echo "Write this Makefile by your self."

# sim:
# 	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
# 	@echo "Write this Makefile by your self."

# include ../Makefile


TOPNAME = top
NXDC_FILES = 
INC_PATH ?=

IMG ?=
VERILATOR = verilator
VERILATOR_CFLAGS += -MMD --build -cc  --trace\
				-O3 --x-assign fast --x-initial fast --noassert
VERILATOR_FLAGS += -MMD --build -cc  --trace --exe  -y ./vsrc -top $(TOPNAME)\
				-O3 --x-assign fast --x-initial fast --noassert --Mdir $(OBJ_DIR)\
				-o $(abspath $(BIN)) $(addprefix -I, $(INC_PATH))\
				$(addprefix -LDFLAGS , $(LDFLAGS))

BUILD_DIR = ./build
OBJ_DIR = $(BUILD_DIR)/obj_dir
BIN = $(BUILD_DIR)/$(TOPNAME)

default: $(BIN)

$(shell mkdir -p $(BUILD_DIR))


# project source
VSRCS = $(shell find $(abspath ./vsrc) -name "*.v")
CSRCS = $(shell find $(abspath ./csrc) -name "*.c" -or -name "*.cc" -or -name "*.cpp")
VSRCS_PIP = $(shell find $(abspath ./vsrc_pip) -name "*.v")
CSRCS_PIP = $(shell find $(abspath ./csrc_pip) -name "*.c" -or -name "*.cc" -or -name "*.cpp")
# CSRCS += $(shell find $(abspath ./csrc/include) -name "*.h")
#CSRCS += $(SRC_AUTO_BIND)

# rules for NVBoard
include $(NVBOARD_HOME)/scripts/nvboard.mk


# rules for verilator
INCFLAGS = $(addprefix -I, $(INC_PATH))
CFLAGS += $(INCFLAGS)  -DTOP_NAME="\"V$(TOPNAME)\"" 
LDFLAGS += -lreadline -ldl

# rules for diff-test and img load
CONFIG_DIFFTEST=y
ifdef IMG
ARGS += -i $(IMG)
endif

ifdef CONFIG_DIFFTEST
DIFF_REF_SO = /home/qw/ysyx-workbench/nemu/build/riscv64-nemu-interpreter-so
LDFLAGS +=-L /home/qw/ysyx-workbench/nemu/build/
ARGS += -d $(DIFF_REF_SO)
endif

#rules for batch mode
ARGS += -b

run: 
	@echo
	@echo "-- VERILATE ----------------"
	$(VERILATOR) $(VERILATOR_FLAGS) $(VSRCS) $(CSRCS)
	@echo
	@echo "-- BUILD -------------------"
	$(MAKE) -j -C build/obj_dir -f Vtop.mk

	@echo
	@echo "-- RUN ---------------------"
	@rm -rf logs
	@mkdir -p logs
	build/top +trace $(ARGS)


run_pip: 
	@echo
	@echo "-- VERILATE ----------------"
	$(VERILATOR) $(VERILATOR_FLAGS) $(VSRCS_PIP) $(CSRCS_PIP)
	@echo
	@echo "-- BUILD -------------------"
	$(MAKE) -j -C build/obj_dir -f Vtop.mk

	@echo
	@echo "-- RUN ---------------------"
	@rm -rf logs
	@mkdir -p logs
	build/top +trace -d $(DIFF_REF_SO)


clean:
	rm -rf $(BUILD_DIR)

.PHONY: clean run
