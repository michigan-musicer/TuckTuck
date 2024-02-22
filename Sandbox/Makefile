LIB_PATH := ./lib
GCM_PATH := $(LIB_PATH)/gcm.cache
# mapper process lets us specify where to build and fetch GCM libs, based on magic from this SO post
# https://stackoverflow.com/questions/69549286/how-to-modify-gcm-cache-path-when-using-gcc-11-to-build-c20-modules
MAPPER := '-fmodule-mapper=|@g++-mapper-server -r'$(GCM_PATH)
FLAGS := g++-11 -std=c++20 -fmodules-ts

# I think it would be correct to just call make in make ../TuckTuck from here,
# essentially says "TuckTuck is a dependency of this project"
all: Sandbox.exe

Sandbox.exe: Sandbox.o 
	$(FLAGS) $(MAPPER) $< -o $@ -Xlinker TuckTuck.so

%.o: src/%.cpp
	# $(MAKE) fetch_so
	$(FLAGS) $(MAPPER) -fPIC -c $< -o $@

fetch_so: 
	mkdir lib
	mkdir lib/gcm.cache
	cp ../TuckTuck/lib/gcm.cache/TuckTuck.gcm lib/gcm.cache/TuckTuck.gcm
	cp ../TuckTuck/TuckTuck.so ./TuckTuck.so

clean: 
	rm -rf ./lib *.o *.so *.exe
