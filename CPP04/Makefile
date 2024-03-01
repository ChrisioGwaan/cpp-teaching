#Note: Makefile is only for lab

.DEFAULT_GOAL := all

CXX := g++
CXXFLAGS := -Wall -Werror -std=c++14 -g -O

SRCDIR := lab
OBJDIR := obj
BINDIR := bin

TARGETS := cpp04-lab-p01 cpp04-lab-p02 cpp04-lab-p03 cpp04-lab-p04

all: $(TARGETS)

clean:
	rm -rf $(OBJDIR) $(BINDIR)

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	@mkdir -p $(OBJDIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(OBJDIR)/%.o: $(SRCDIR)/employeeClasses/%.cpp
	@mkdir -p $(OBJDIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(OBJDIR)/%.o: $(SRCDIR)/nodelink/%.cpp
	@mkdir -p $(OBJDIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

cpp04-lab-p01: $(OBJDIR)/p-01.o $(OBJDIR)/ContractEmployee.o $(OBJDIR)/Employee.o
	@mkdir -p $(BINDIR)
	$(CXX) $(CXXFLAGS) $^ -o $(BINDIR)/$@

cpp04-lab-p02: $(OBJDIR)/p-02.o $(OBJDIR)/LinkedList.o $(OBJDIR)/Node.o
	@mkdir -p $(BINDIR)
	$(CXX) $(CXXFLAGS) $^ -o $(BINDIR)/$@

cpp04-lab-p03: $(OBJDIR)/p-03.o
	@mkdir -p $(BINDIR)
	$(CXX) $(CXXFLAGS) $^ -o $(BINDIR)/$@

cpp04-lab-p04: $(OBJDIR)/p-04.o
	@mkdir -p $(BINDIR)
	$(CXX) $(CXXFLAGS) $^ -o $(BINDIR)/$@