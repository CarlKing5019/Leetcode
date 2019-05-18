CODE_TYPE = cpp
SOURCE = $(wildcard *.cpp)
TARGET = README.md
PROBLEM = ../problem.md
MAKEFILE = makefile

.PHONY: clean open


${TARGET}: ${SOURCE} ${PROBLEM} ${MAKEFILE}
	@ cat ${PROBLEM} | sed -n '1p' > ${TARGET}; \
	echo "" >> ${TARGET}; \
	i=1; \
	for file in ${SOURCE}; \
	do \
		echo "" >> ${TARGET}; \
		echo "" >> ${TARGET}; \
		echo "#### Solution "$${i} >> ${TARGET}; \
		echo "" >> ${TARGET}; \
		echo "" >> ${TARGET}; \
		cat $${file} >> ${TARGET}; \
		echo "" >> ${TARGET}; \
		echo "" >> ${TARGET}; \
		let i=i+1; \
	done;


open:
	@open ${TARGET}


clean:
	@rm -rf ${TARGET}