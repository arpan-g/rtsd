# Project Makefile
# Generated by the TERRA CSPm2LUNA generator version 1.1.1
#
# protected region document description on begin

# protected region document description end

PROJECTS_BUILD_FILES=$(wildcard */build.mk)

# protected region additional statements on begin

# protected region additional statements end

all:

include $(PROJECTS_BUILD_FILES)

all: $(TARGETS)

bin:
	@mkdir bin

lib:
	@mkdir lib

define BuildMainTargets
clean:
	rm -rf bin lib
$(foreach target,$(PROJECTS_BUILD_FILES),
	@echo "Cleaning $(target:/build.mk=)"
	@make -C $(target:build.mk=) clean --no-print-directory
)
endef
$(eval $(call BuildMainTargets))

# protected region additional targets on begin

# protected region additional targets end
