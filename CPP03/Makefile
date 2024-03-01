#Note: Makefile is only for lab

.DEFAULT_GOAL := all

CXX := g++
CXXFLAGS := -Wall -Werror -std=c++14 -g -O

SRCDIR := lab
OBJDIR := obj
BINDIR := bin

TARGETS := cpp03-lab-p01 cpp03-lab-p02 cpp03-lab-p03 cpp03-lab-p04 cpp03-lab-p05 cpp03-lab-p06

all: $(TARGETS)

clean:
	rm -rf $(OBJDIR) $(BINDIR)

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	@mkdir -p $(OBJDIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

cpp03-lab-p01: $(OBJDIR)/p-01-inheritance.o $(OBJDIR)/User.o $(OBJDIR)/Doctor.o
	@mkdir -p $(BINDIR)
	$(CXX) $(CXXFLAGS) $^ -o $(BINDIR)/$@

cpp03-lab-p02: $(OBJDIR)/p-02-streams.o
	@mkdir -p $(BINDIR)
	$(CXX) $(CXXFLAGS) $^ -o $(BINDIR)/$@

cpp03-lab-p03: $(OBJDIR)/p-03-binary-search.o
	@mkdir -p $(BINDIR)
	$(CXX) $(CXXFLAGS) $^ -o $(BINDIR)/$@

cpp03-lab-p04: $(OBJDIR)/p-04-insertion-sort.o
	@mkdir -p $(BINDIR)
	$(CXX) $(CXXFLAGS) $^ -o $(BINDIR)/$@

cpp03-lab-p05: $(OBJDIR)/p-05-namespace.o
	@mkdir -p $(BINDIR)
	$(CXX) $(CXXFLAGS) $^ -o $(BINDIR)/$@

cpp03-lab-p06: $(OBJDIR)/p-06-scope.o
	@mkdir -p $(BINDIR)
	$(CXX) $(CXXFLAGS) $^ -o $(BINDIR)/$@