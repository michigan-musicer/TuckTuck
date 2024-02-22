LIB_PATH := ../TuckTuck/lib
GCM_PATH := $(LIB_PATH)/gcm.cache
# mapper process lets us specify where to build and fetch GCM libs, based on magic from this SO post
# https://stackoverflow.com/questions/69549286/how-to-modify-gcm-cache-path-when-using-gcc-11-to-build-c20-modules
MAPPER := '-fmodule-mapper=|@g++-mapper-server -r'$(GCM_PATH)
FLAGS := g++-11 -std=c++20 -fmodules-ts

all: Sandbox

# test: Application.cpp 
# 	$(FLAGS) $(MAPPER) -fPIC -c Application.cpp -o application.o 

# 	$(FLAGS) $(MAPPER) main.cpp -o main -Xlinker $(LIB_PATH)/test.so 

Sandbox: Sandbox.o TuckTuck.so
	$(FLAGS) $(MAPPER) $< -o ^@ -Xlinker TuckTuck.so

%.o: src/%.cpp
	$(FLAGS) $(MAPPER) -fPIC -c $< -o $@
