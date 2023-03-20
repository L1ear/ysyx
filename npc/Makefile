# all:
# 	@echo "Write this Makefile by your self."

# sim:
# 	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
# 	@echo "Write this Makefile by your self."

include ../Makefile


TOPNAME = top
NXDC_FILES = 
INC_PATH ?=

IMG ?=
VERILATOR = verilator
VERILATOR_CFLAGS += -MMD --build -cc  --trace\
				-O3 --x-assign fast --x-initial fast --noassert -l pthread
VERILATOR_FLAGS += -MMD --build -cc  --trace --exe  -y ./vsrc_pip -top $(TOPNAME)\
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
VSRCS_SOC = $(shell find $(abspath ./soc) -name "*.v")
# CSRCS += $(shell find $(abspath ./csrc/include) -name "*.h")
#CSRCS += $(SRC_AUTO_BIND)

# rules for NVBoard
include $(NVBOARD_HOME)/scripts/nvboard.mk


# rules for verilator
INCFLAGS = $(addprefix -I, $(INC_PATH))
CFLAGS += $(INCFLAGS)  -DTOP_NAME="\"V$(TOPNAME)\"" -l pthread 
LDFLAGS += -lreadline -lSDL2 -ldl -l pthread -std=gnu++11

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
	$(call git_commit, "sim RTL")
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
	$(call git_commit, "sim RTL") 
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
	build/top +trace $(ARGS)

wave:
	gtkwave ./vlt.vcd

cat:
	cat /home/qw/ysyx-workbench/npc/soc/defines.v /home/qw/ysyx-workbench/npc/soc/top.v /home/qw/ysyx-workbench/npc/soc/ID_stage.v  /home/qw/ysyx-workbench/npc/soc/CSR.v /home/qw/ysyx-workbench/npc/soc/WB_stage.v /home/qw/ysyx-workbench/npc/soc/EX_stage.v /home/qw/ysyx-workbench/npc/soc/imm_ext.v /home/qw/ysyx-workbench/npc/soc/lsu.v /home/qw/ysyx-workbench/npc/soc/forwarding.v /home/qw/ysyx-workbench/npc/soc/Dcache.v /home/qw/ysyx-workbench/npc/soc/Icache.v /home/qw/ysyx-workbench/npc/soc/decoder.v /home/qw/ysyx-workbench/npc/soc/rst_sync.v /home/qw/ysyx-workbench/npc/soc/IF_stage.v /home/qw/ysyx-workbench/npc/soc/WB_reg.v /home/qw/ysyx-workbench/npc/soc/L_S_stage.v \/home/qw/ysyx-workbench/npc/soc/ID_reg.v /home/qw/ysyx-workbench/npc/soc/axi_dcache.v  /home/qw/ysyx-workbench/npc/soc/pipline_ctrl.v /home/qw/ysyx-workbench/npc/soc/axi_icache.v /home/qw/ysyx-workbench/npc/soc/L_S_reg.v /home/qw/ysyx-workbench/npc/soc/hazard_detect.v /home/qw/ysyx-workbench/npc/soc/bcu.v /home/qw/ysyx-workbench/npc/soc/ls_ctr.v /home/qw/ysyx-workbench/npc/soc/axi_arbiter.v /home/qw/ysyx-workbench/npc/soc/EX_reg.v /home/qw/ysyx-workbench/npc/soc/regfile.v /home/qw/ysyx-workbench/npc/soc/ALU.v /home/qw/ysyx-workbench/npc/soc/clint.v /home/qw/ysyx-workbench/npc/soc/dff.v  > ysyx_22040734.v
	cp ysyx_22040734.v /home/qw/ysyxSoC/ysyx/soc/
clean:
	rm -rf $(BUILD_DIR)

.PHONY: clean run
