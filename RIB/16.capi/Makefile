LIBDIR=${RMANTREE}
CFLAGS=-I${LIBDIR}/include
LIBS= -L${LIBDIR}/lib -lprman
RENDERER=render

SCENE=light

all :${SCENE}.tiff
	sho ${SCENE}.tiff
${SCENE}.tiff : ${SCENE}.rib
	${RENDERER} ${SCENE}.rib

${SCENE}.rib : ${SCENE}.gen
	./${SCENE}.gen >${SCENE}.rib

${SCENE}.gen : ${SCENE}.c
	cc ${CFLAGS} -o ${SCENE}.gen  ${SCENE}.c ${LIBS}

clean :
	rm -f *.tiff *.rib *.gen
