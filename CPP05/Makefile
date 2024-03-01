#Note: Makefile is only for lab

.DEFAULT_GOAL := all

CXX := g++
CXXFLAGS := -Wall -Werror -std=c++14 -g -O

SRCDIR := lab
OBJDIR := obj
BINDIR := bin

TARGETS := cpp05-lab-p01 cpp05-lab-p02 cpp05-lab-p03

all: $(TARGETS)

clean:
	rm -rf $(OBJDIR) $(BINDIR)

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	@mkdir -p $(OBJDIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(OBJDIR)/%.o: $(SRCDIR)/bst/%.cpp
	@mkdir -p $(OBJDIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(OBJDIR)/%.o: $(SRCDIR)/dl/%.cpp
	@mkdir -p $(OBJDIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

cpp05-lab-p01: $(OBJDIR)/p-01.o $(OBJDIR)/DE_LinkedList.o
	@mkdir -p $(BINDIR)
	$(CXX) $(CXXFLAGS) $^ -o $(BINDIR)/$@

cpp05-lab-p02: $(OBJDIR)/p-02.o $(OBJDIR)/BST.o
	@mkdir -p $(BINDIR)
	$(CXX) $(CXXFLAGS) $^ -o $(BINDIR)/$@

cpp05-lab-p03: $(OBJDIR)/p-03.o
	@mkdir -p $(BINDIR)
	$(CXX) $(CXXFLAGS) $^ -o $(BINDIR)/$@