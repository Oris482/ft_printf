TARGET				:= printfTester

DEFINES				:=
DEPENDENCIES		:=

DEPENDENCIES_DIR	:= ./Dependencies

SRC_DIR				:= ./src
TESTS_DIR			:= $(SRC_DIR)/tests
OBJ_DIR				:= ./obj
CSRC				:= $(SRC_DIR)/buffered_writer.c
SRCS				:= $(SRC_DIR)/Tester.cpp 
TESTS				:= $(TESTS_DIR)/ErrorTests.cpp $(TESTS_DIR)/MixedTests.cpp $(TESTS_DIR)/CharTests.cpp $(TESTS_DIR)/NoSpecifierTests.cpp $(TESTS_DIR)/StringTests.cpp \
					$(TESTS_DIR)/Tests.cpp $(TESTS_DIR)/SIntTests.cpp $(TESTS_DIR)/UIntTests.cpp $(TESTS_DIR)/HexTests.cpp \
					$(TESTS_DIR)/PointerTests.cpp $(TESTS_DIR)/SpecifierTests.cpp
OBJS				:= $(SRCS:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)
COBJS				:= $(CSRC:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)
TESTS_OBJS			:= $(TESTS:$(TESTS_DIR)/%.cpp=$(OBJ_DIR)/%.o)
ALL_OBJS			:= $(OBJS) $(TESTS_OBJS) $(COBJS)

AIR_TESTER_DIR		:= $(DEPENDENCIES_DIR)/Air-Tester/Air-Tester
AIR_TESTER_LIB		:= $(AIR_TESTER_DIR)/../bin/Distribution/macosx/x86_64/Air-Tester/libAir-Tester.a
AIR_TESTER_INCLUDE	:= $(AIR_TESTER_DIR)/include

FT_PRINTF_DIR		:= ./..
FT_PRINTF_LIB		:= $(FT_PRINTF_DIR)/libftprintf.a

LINK_DEPENDENCIES	:= $(FT_PRINTF_LIB) $(AIR_TESTER_LIB)

INLCUDE_DIRS		:= -I $(FT_PRINTF_DIR)/include -I $(AIR_TESTER_INCLUDE) -I $(FT_PRINTF_DIR)

CXX					:= clang
CC					:= clang
LINK_CMD			:= clang++
ALL_CXX_FLAGS		:= -Wall -Wextra -Werror -pedantic -std=c++17 $(INLCUDE_DIRS)
ALL_C_FLAGS			:= -Wall -Wextra -Werror -pedantic -fsanitize=address $(INLCUDE_DIRS)

CXX_DISTR_FLAGS 	:= -Ofast
C_DISTR_FLAGS		:= -Ofast

CXX_RELEASE_FLAGS	:= -O2 -g
C_RELEASE_FLAGS		:= -O2 -g

CXX_DEBUG_FLAGS		:= -O0 -g
C_DEBUG_FLAGS		:= -O0 -g

.PHONY: all distribution release debug clean fclean re

all: distribution

distribution: ALL_CXX_FLAGS += $(CXX_DISTR_FLAGS)
distribution: ALL_C_FLAGS += $(C_DISTR_FLAGS)
distribution: $(TARGET)

release: ALL_CXX_FLAGS += $(CXX_RELEASE_FLAGS)
release: ALL_C_FLAGS += $(C_RELEASE_FLAGS)
release: $(TARGET)

debug: ALL_CXX_FLAGS += $(CXX_DEBUG_FLAGS)
debug: ALL_C_FLAGS += $(C_DEBUG_FLAGS)
debug: $(TARGET)

SILENT				:= @
ifdef VERBOSE
SILENT				:=
endif

$(TARGET): $(ALL_OBJS) $(FT_PRINTF_LIB) $(AIR_TESTER_LIB)
	$(SILENT)echo Linking $(TARGET)...
	$(SILENT)$(LINK_CMD) -o $(TARGET) $(LINK_DEPENDENCIES) $(ALL_OBJS) -fsanitize=address
	$(SILENT)echo Made $(TARGET)!

$(AIR_TESTER_LIB):
	$(SILENT)echo Updating Air-Tester...
	$(SILENT)git -C $(AIR_TESTER_DIR) pull origin development
	$(SILENT)echo Setting up Air-Tester...
	$(SILENT)(cd ./Dependencies/Air-Tester && bash ./setup_files.sh osx)
	$(SILENT)make -C $(AIR_TESTER_DIR) config=distribution_osx

$(FT_PRINTF_LIB):
	$(SILENT)echo Building $(FT_PRINTF_LIB)
	$(SILENT)make -C $(FT_PRINTF_DIR)
	$(SILENT)echo Built $(FT_PRINTF_LIB)!

$(OBJ_DIR)/buffered_writer.o: $(SRC_DIR)/buffered_writer.c
	$(SILENT)mkdir -p $(OBJ_DIR)
	$(SILENT)$(CC) $(ALL_C_FLAGS) -o $@ -c $<
	$(SILENT)echo $(notdir $<)

$(OBJS): $(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	$(SILENT)mkdir -p $(OBJ_DIR)
	$(SILENT)$(CXX) $(ALL_CXX_FLAGS) -o $@ -c $<
	$(SILENT)echo $(notdir $<)

# $(OBJS): $(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
# 	$(SILENT)mkdir -p $(OBJ_DIR)
# 	$(SILENT)$(CC) $(ALL_C_FLAGS) -o $@ -c $<
# 	$(SILENT)echo $(notdir $<)

$(TESTS_OBJS): $(OBJ_DIR)/%.o: $(TESTS_DIR)/%.cpp
	$(SILENT)mkdir -p $(OBJ_DIR)
	$(SILENT)$(CXX) $(ALL_CXX_FLAGS) -o $@ -c $<
	$(SILENT)echo $(notdir $<)

clean:
	$(SILENT)rm -f $(ALL_OBJS)
	$(SILENT)echo Cleaned up object files for $(TARGET)

fclean: clean
	$(SILENT)rm -f $(TARGET)
	$(SILENT)echo Cleaned up $(TARGET)

re: fclean all