# build.mk file for assignment3_dispaly.cspm, provide information to 'project MakeFile' 
# Generated by the TERRA CSPm2LUNA generator version 1.1.3
#
# protected region document description on begin

# protected region document description end

TARGETS+=bin/assignment3_dispaly

assignment3_dispaly/assignment3_dispaly:
	@echo
	@echo "Building $@"
	@make -C assignment3_dispaly --no-print-directory

bin/assignment3_dispaly: assignment3_dispaly/assignment3_dispaly | bin
	@cp $^ $@
	@echo "Build $@"

# Additional dependencies to ensure that bin/assignment3_dispaly gets properly rebuild
assignment3_dispaly/assignment3_dispaly: assignment3_dispaly/src/main.cpp Step/lib/libStep.a Controller/lib/libController.a LinearSystem/lib/libLinearSystem.a
assignment3_dispaly/assignment3_dispaly: assignment3_dispaly/src/MainModel.cpp assignment3_dispaly/include/MainModel.h
assignment3_dispaly/assignment3_dispaly: assignment3_dispaly/src/stepTERRA.cpp assignment3_dispaly/include/stepTERRA.h Step/include/Step/Step.h
assignment3_dispaly/assignment3_dispaly: assignment3_dispaly/src/controllerTERRA.cpp assignment3_dispaly/include/controllerTERRA.h Controller/include/Controller/Controller.h
assignment3_dispaly/assignment3_dispaly: assignment3_dispaly/src/linearSystemTERRA.cpp assignment3_dispaly/include/linearSystemTERRA.h LinearSystem/include/LinearSystem/LinearSystem.h

# protected region additional dependencies on begin

# protected region additional dependencies end