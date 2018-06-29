EXE		= radreader
CXX		= $(shell wx-config --cxx)
LIBS	= -L./3rdparty/wxCharts/ -lwxcharts
WX_LIBS = $(shell wx-config --libs)
WX_CXXFLAGS = $(shell wx-config --cxxflags)		

OBJ := $(patsubst %.cpp,%.o,$(wildcard *.cpp))

.SUFFIXES: .o .cpp

.cpp.o:
	$(CXX) $(WX_CXXFLAGS) -c -o $@ $<
	
all: $(EXE)

$(EXE):$(OBJ)
	$(CXX) -o $(EXE) -Wl,--start-group $(LIBS) $(WX_LIBS) $(OBJ) -Wl,--end-group

clean:
	$(RM) *.o *~ $(EXE)
