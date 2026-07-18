CXX ?= clang++
CXXFLAGS := -std=c++20 -O3 -DNDEBUG -flto -Wall -Wpedantic -Iinclude
TEST_CXXFLAGS := -std=c++20 -O2 -Wall -Wpedantic -Iinclude
BIN_DIR := build
CORE := src/x.cpp

.PHONY: all test clean

all: $(BIN_DIR)/multi-wave-replay $(BIN_DIR)/multi-wave-backfill $(BIN_DIR)/multi-wave-server

$(BIN_DIR):
	mkdir -p $@

$(BIN_DIR)/multi-wave-replay: $(CORE) src/r.cpp | $(BIN_DIR)
	$(CXX) $(CXXFLAGS) $^ -o $@

$(BIN_DIR)/multi-wave-backfill: $(CORE) src/b.cpp | $(BIN_DIR)
	$(CXX) $(CXXFLAGS) $^ -o $@

$(BIN_DIR)/multi-wave-server: $(CORE) src/s.cpp | $(BIN_DIR)
	$(CXX) $(CXXFLAGS) $^ -o $@

$(BIN_DIR)/core-test: $(CORE) tests/t.cpp | $(BIN_DIR)
	$(CXX) $(TEST_CXXFLAGS) $^ -o $@

test: $(BIN_DIR)/core-test
	$(BIN_DIR)/core-test

clean:
	rm -rf $(BIN_DIR)
