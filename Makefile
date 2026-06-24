CXX := g++
CXXFLAGS := -std=c++17 -Wall -Wextra -pedantic -Iinclude -MMD -MP
LDFLAGS :=

BUILD_DIR := build
TARGET := fraction_tests

SRCS := src/Fraction.cc tests/main.cc
OBJS := $(SRCS:%.cc=$(BUILD_DIR)/%.o)
DEPS := $(OBJS:.o=.d)

.PHONY: all run clean

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(OBJS) $(LDFLAGS) -o $@

$(BUILD_DIR)/%.o: %.cc
	@mkdir -p $(dir $@)
	$(CXX) $(CXXFLAGS) -c $< -o $@

run: $(TARGET)
	./$(TARGET)

clean:
	rm -rf $(BUILD_DIR) $(TARGET)

-include $(DEPS)
