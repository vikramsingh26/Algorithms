all: clean
	mkdir -p build/bin
	cd build && cmake .. && make VERBOSE=true && make install

clean:
	rm -rf build
