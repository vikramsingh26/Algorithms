.PHONY: default
default: build

.PHONY: build
build:
	mkdir -p build/bin
	mkdir -p build/test
	cd build && cmake .. && make VERBOSE=true && make install

.PHONY: clean
clean:
	echo "clean"
	rm -rf build

.PHONY: tests
tests:build
	cd build && \
	make test
	
