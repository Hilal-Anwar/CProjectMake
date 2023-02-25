all :build

build:
	clang ./basics/main.c -o ./target/text
	clang ./basics/StringHandling.c -o ./target/StringHandling

