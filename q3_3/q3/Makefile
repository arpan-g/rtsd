# Makefile for q3.cspm for Default target platform
# Generated by the TERRA CSPm2LUNA generator version 1.1.3
#
# protected region document description on begin

# protected region document description end

SOURCE_FILES=src/main.cpp src/MainModel.cpp src/stepTerra.cpp src/controllerTerra.cpp src/linearSystemTerra.cpp

# Targets are expanded a second time, just before the rule is used
.SECONDEXPANSION:

# Contains the compiler commands that were used to build LUNA
-include /opt/LUNA/target-x86_64-linux_x86_64_CSP/lib64/../tools.mk

# Additional commands
RM=rm -rf
MKDIR=mkdir -p

# Compiler/Linker flags
LDFLAGS+=-L/opt/LUNA/target-x86_64-linux_x86_64_CSP/lib64
CPPFLAGS+=-Iinclude -I/opt/LUNA/target-x86_64-linux_x86_64_CSP/include
LIBS+=-lLUNA

# Add external model paths
CPPFLAGS+= -I ../Step/include -I ../Controller/include -I ../LinearSystem/include
LDFLAGS+= -L ../Step/lib -L ../Controller/lib -L ../LinearSystem/lib
LIBS:= -lStep -lController -lLinearSystem $(LIBS) -lm



LIBS+=-lpthread

## protected region to add additional statements on begin

# For example, use this region to add additional files that are required:
#SOURCE_FILES+=xxsim/PID/PID.cpp $(wildcard xxsim/common/*.cpp)
#CPPFLAGS+=-Ixxsim/PID -Ixxsim/common 

## protected region to add additional statements end

OBJECT_FILES=$(patsubst src/%.cpp,obj/%.o,$(SOURCE_FILES))

all: q3

q3: $(OBJECT_FILES)
	$(CXX) $(LDFLAGS) $^ $(LIBS) -o $@

obj/%.o: src/%.cpp | $$(@D)
	$(CXX) -c $(CPPFLAGS) -o $@ $<

clean:
	$(RM) obj lib q3

# Targets for creating directories
uniq = $(strip $(if $1,$(firstword $1) $(call uniq,$(filter-out $(firstword $1),$1))))
DIRS:=$(call uniq,$(patsubst %/,%,lib/ $(dir $(OBJECT_FILES))))

define DirectoryTarget
  $(foreach directory, $(DIRS),
    $(directory):
	$(MKDIR) $(directory)
  )
endef
$(eval $(call DirectoryTarget))

# Dependencies
q3: ../Step/lib/libStep.a
q3: ../Controller/lib/libController.a
q3: ../LinearSystem/lib/libLinearSystem.a
obj/main.o: include/MainModel.h
obj/MainModel.o: include/MainModel.h include/controllerTerra.h include/linearSystemTerra.h include/stepTerra.h
obj/stepTerra.o: include/stepTerra.h ../Step/include/Step/Step.h
obj/controllerTerra.o: include/controllerTerra.h ../Controller/include/Controller/Controller.h
obj/linearSystemTerra.o: include/linearSystemTerra.h ../LinearSystem/include/LinearSystem/LinearSystem.h

# protected region additional targets on begin

# protected region additional targets end