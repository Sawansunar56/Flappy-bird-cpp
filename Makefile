b:
	cmake -B build

bu:
	cmake --build build

run:
	./build/src/main

clean:
	rm -rf build
