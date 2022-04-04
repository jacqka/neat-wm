
LICENSE='GNU General Public License 3'

# --- need link. changed file names from 'util' countetparts

CC_VERSION='11.2.0' 
CC=gcc 
CFLAGS='${CFLAGS} x86_64 -x86'

CXX='g++'
CXXFLAGS='${CXXFLAGS} x86_64 -x86'

LIBDIR='/usr/lib
INCLUDEDIR='/usr/include:${LOCAL_INCLUDE}'


fcompile=$(wildcard *.c)
fall=$(pathsubst %c,%o,${fcompile} ${fcompile})

all: ${fall} \
	
	'${CC}  ${fall} -o ${fcompile}.o' 


