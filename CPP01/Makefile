#Note: Makefile is only for lab

.DEFAULT_GOAL := all

CXX := g++
CXXFLAGS := -Wall -Werror -std=c++14 -g -O

SRCDIR := lab
OBJDIR := obj
BINDIR := bin

TARGETS := cpp01-lab-p00 cpp01-lab-p01 cpp01-lab-p02 cpp01-lab-p03 cpp01-lab-p04 cpp01-lab-p05 cpp01-lab-p06 cpp01-lab-p07

all: $(TARGETS)

clean:
	rm -rf $(OBJDIR) $(BINDIR)

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	@mkdir -p $(OBJDIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

cpp01-lab-p00: $(OBJDIR)/p-00-intro.o
	@mkdir -p $(BINDIR)
	$(CXX) $(CXXFLAGS) $^ -o $(BINDIR)/$@

cpp01-lab-p01: $(OBJDIR)/p-01-data-type.o
	@mkdir -p $(BINDIR)
	$(CXX) $(CXXFLAGS) $^ -o $(BINDIR)/$@

cpp01-lab-p02: $(OBJDIR)/p-02-if-else.o
	@mkdir -p $(BINDIR)
	$(CXX) $(CXXFLAGS) $^ -o $(BINDIR)/$@

cpp01-lab-p03: $(OBJDIR)/p-03-for-while.o
	@mkdir -p $(BINDIR)
	$(CXX) $(CXXFLAGS) $^ -o $(BINDIR)/$@

cpp01-lab-p04: $(OBJDIR)/p-04-array.o
	@mkdir -p $(BINDIR)
	$(CXX) $(CXXFLAGS) $^ -o $(BINDIR)/$@

cpp01-lab-p05: $(OBJDIR)/p-05-read-write.o
	@mkdir -p $(BINDIR)
	$(CXX) $(CXXFLAGS) $^ -o $(BINDIR)/$@

cpp01-lab-p06: $(OBJDIR)/p-06-class.o $(OBJDIR)/User.o
	@mkdir -p $(BINDIR)
	$(CXX) $(CXXFLAGS) $^ -o $(BINDIR)/$@

cpp01-lab-p07: $(OBJDIR)/p-07-pointers-reference.o
	@mkdir -p $(BINDIR)
	$(CXX) $(CXXFLAGS) $^ -o $(BINDIR)/$@
