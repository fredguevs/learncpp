CPP_FILES := $(wildcard *.cpp)

EXES := $(CPP_FILES:.cpp=)

all: $(EXES)

%: %.cpp
	g++ $< -o $@

clean:
	rm -f $(EXES)