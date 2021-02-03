# makefile for compilation of the thesis
# (c) 2008 Michal Bidlo
# E-mail: bidlom AT fit vutbr cz
# Edited by: dytrych AT fit vutbr cz
# Edited by: xharmi00 AT stud fit vutbr cz
#===========================================

CO := xharmi00
CHAPTERS := $(CO)-chapters.tex
APPENDICES := $(CO)-appendices.tex
BST := enplain.bst
CLS := fitthesis.cls
IMGS := template-fig/* img/*
ASSIGNMENT := assignment.pdf
DESKS := desks.pdf


.PHONY: all
all: $(CO).pdf

.PHONY: pdf
pdf: $(CO).pdf

$(CO).pdf: clean $(CO).tex $(CO).bib
	pdflatex $(CO)
	-bibtex $(CO)
	pdflatex $(CO)
	pdflatex $(CO)


.PHONY: clean
clean:
	rm -f $(CO).dvi $(CO).log $(CO).blg $(CO).bbl $(CO).toc $(CO).aux \
		$(CO).out $(CO).lof $(CO).ptc $(CO).fdb_latexmk $(CO).fls \
		$(CO).synctex.gz
	rm -f *~
	rm -f $(CO).tar.gz


.PHONY: pack
pack: $(CO).tar.gz

$(CO).tar.gz: $(CO).pdf
	COPYFILE_DISABLE=1 tar -czvf $@ $(CO).tex $(CO).bib $(BST) $(IMGS) $(CLS) \
		$(ASSIGNMENT) $(DESKS) $^ Makefile latexmkrc $(CHAPTERS) \
		$(APPENDICES)


.PHONY: vlna
vlna:
	vlna -l $(CO).tex $(CO).bib $(CHAPTERS) $(APPENDICES)


.PHONY: normostrany
normostrany:
	echo "scale=2; `detex -n $(CHAPTERS) | sed s/"^ *"/""/ | \
		sed s/"^	*"/""/ | wc -c`/1800;" | bc
