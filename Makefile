TARGETS = brk const text top 
CFLAGS = -Wall -O2

all: $(TARGETS)

clean:
	rm $(TARGETS)

test: $(TARGETS)
	@for x in $(TARGETS) ; do echo $$x: ; ./$$x ; done ; true

