# Name of the project
PROJ_NAME = Calculator
TEST_PROJ_NAME = Test_$(PROJ_NAME)

BUILD_DIR = Build

# All source code files
SRC = src/sum.c\
	src/sub.c\
	src/mul.c\
	src/divis.c 
# All test source files
TEST_SRC = test/test.c\
	unity/unity.c

# All include folders with header files
INC = -Iinc\
	-Iunity

#To check if the OS is Windows or Linux and set the executable file extension and delete command accordingly
ifdef OS
   RM = del /q
   FixPath = $(subst /,\,$1)
   EXEC = exe
   C=
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
	  C=-lm
   endif
endif

# Makefile will not run target command if the name with file already exists. To override, use .PHONY
.PHONY : all run test cppcheck valgrind clean

all:$(BUILD_DIR)
	gcc calculatorfinal.c $(SRC) $(INC) -o $(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).$(EXEC)) $(C)

run: all
	$(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).$(EXEC)) $(C)

test: $(SRC) $(TEST_SRC)
	gcc $^ $(INC) -o $(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC)) $(C)
	$(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC)) 

coverage:${PROJECT_NAME}
	gcc -fprofile-arcs -ftest-coverage calculatorfinal.c $(SRC) $(INC) -o $(PROJ_NAME) $(C)
	./${PROJ_NAME}
	gcov -a src/sum.c src/mul.c src/divis.c src/sub.c calculatorfinal.c

cppcheck: $(SRC)
	cppcheck --enable=all calculatorfinal.c $(SRC)
	
valgrind:
	valgrind $(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).$(EXEC))

clean:
	$(RM) $(call FixPath,$(BUILD_DIR)/*)