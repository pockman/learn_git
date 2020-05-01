CFLAGS = -std=c99
all: hello



.PHONY: clean fun

clean:
	cal
	rm -fr hello


fun:
	fortune
