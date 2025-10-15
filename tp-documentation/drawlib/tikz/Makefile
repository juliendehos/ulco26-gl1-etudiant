TEX = $(shell find . -name "*.tex")
SVG = $(TEX:.tex=.svg)

.PHONY: all clean

all: $(SVG)

%.svg: %.tex
	rm -rf tmp
	mkdir tmp
	xelatex --shell-escape --output-directory tmp -jobname myfile1 $<
	pdfcrop --margin 5 tmp/myfile1.pdf tmp/myfile2.pdf
	pdf2svg tmp/myfile2.pdf $@
	rm -rf tmp

clean:
	rm -rf $(SVG)

