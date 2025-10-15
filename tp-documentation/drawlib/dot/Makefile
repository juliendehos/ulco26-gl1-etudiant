DOT = $(shell find . -name "*.dot")
SVG = $(DOT:.dot=.svg)

.PHONY: all clean

all: $(SVG)

%.svg: %.dot
	dot -Tsvg -o$@ $<

clean:
	rm -f $(SVG)

