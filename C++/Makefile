all: #clean
	mkdir -p build/bin
	mkdir -p build/test
	cd build && cmake .. && make VERBOSE=true && make install

clean:
	echo "clean"
	rm -rf build
