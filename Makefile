CCX = g++
sample_files = grammar/sample_class.cc grammar/sample.cc
template_sample_files = grammar/template_sample_class.cc grammar/template_sample.cc

.PHONY: sample \
	template_sample \
	clean

sample: clean
	$(CCX) $(sample_files)

template_sample: clean
	$(CCX) $(template_sample_files)

clean:
	@rm -f boost/a.out grammar/a.out a.out
