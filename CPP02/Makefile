#Note: Makefile is only for lab

.DEFAULT_GOAL := all

CXX := g++
CXXFLAGS := -Wall -Werror -std=c++14 -g -O

SRCDIR := lab
OBJDIR := obj
BINDIR := bin

TARGETS := cpp02-lab-p01 cpp02-lab-p02 cpp02-lab-p03 cpp02-lab-p04 cpp02-lab-p05

all: $(TARGETS)

clean:
	rm -rf $(OBJDIR) $(BINDIR)

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	@mkdir -p $(OBJDIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

cpp02-lab-p01: $(OBJDIR)/p-01-typedef.o
	@mkdir -p $(BINDIR)
	$(CXX) $(CXXFLAGS) $^ -o $(BINDIR)/$@

cpp02-lab-p02: $(OBJDIR)/p-02-copy-constructor.o $(OBJDIR)/User.o
	@mkdir -p $(BINDIR)
	$(CXX) $(CXXFLAGS) $^ -o $(BINDIR)/$@

cpp02-lab-p03: $(OBJDIR)/p-03-vector.o
	@mkdir -p $(BINDIR)
	$(CXX) $(CXXFLAGS) $^ -o $(BINDIR)/$@

cpp02-lab-p04: $(OBJDIR)/p-04-sort.o
	@mkdir -p $(BINDIR)
	$(CXX) $(CXXFLAGS) $^ -o $(BINDIR)/$@

cpp02-lab-p05: $(OBJDIR)/p-05-eof.o
	@mkdir -p $(BINDIR)
	$(CXX) $(CXXFLAGS) $^ -o $(BINDIR)/$@