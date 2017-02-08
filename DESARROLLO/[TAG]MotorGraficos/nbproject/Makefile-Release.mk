#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=MinGW-Windows
CND_DLIB_EXT=dll
CND_CONF=Release
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/arbolMotorGrafico/TNodo.o \
	${OBJECTDIR}/entidadesMotorGrafico/TCamara.o \
	${OBJECTDIR}/entidadesMotorGrafico/TLuz.o \
	${OBJECTDIR}/entidadesMotorGrafico/TMalla.o \
	${OBJECTDIR}/entidadesMotorGrafico/TTransform.o \
	${OBJECTDIR}/main.o \
	${OBJECTDIR}/tools/glm/detail/dummy.o \
	${OBJECTDIR}/tools/glm/detail/glm.o


# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/_tag_motorgraficos.exe

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/_tag_motorgraficos.exe: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/_tag_motorgraficos ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/arbolMotorGrafico/TNodo.o: arbolMotorGrafico/TNodo.cpp
	${MKDIR} -p ${OBJECTDIR}/arbolMotorGrafico
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/arbolMotorGrafico/TNodo.o arbolMotorGrafico/TNodo.cpp

${OBJECTDIR}/entidadesMotorGrafico/TCamara.o: entidadesMotorGrafico/TCamara.cpp
	${MKDIR} -p ${OBJECTDIR}/entidadesMotorGrafico
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/entidadesMotorGrafico/TCamara.o entidadesMotorGrafico/TCamara.cpp

${OBJECTDIR}/entidadesMotorGrafico/TLuz.o: entidadesMotorGrafico/TLuz.cpp
	${MKDIR} -p ${OBJECTDIR}/entidadesMotorGrafico
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/entidadesMotorGrafico/TLuz.o entidadesMotorGrafico/TLuz.cpp

${OBJECTDIR}/entidadesMotorGrafico/TMalla.o: entidadesMotorGrafico/TMalla.cpp
	${MKDIR} -p ${OBJECTDIR}/entidadesMotorGrafico
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/entidadesMotorGrafico/TMalla.o entidadesMotorGrafico/TMalla.cpp

${OBJECTDIR}/entidadesMotorGrafico/TTransform.o: entidadesMotorGrafico/TTransform.cpp
	${MKDIR} -p ${OBJECTDIR}/entidadesMotorGrafico
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/entidadesMotorGrafico/TTransform.o entidadesMotorGrafico/TTransform.cpp

${OBJECTDIR}/main.o: main.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/main.o main.cpp

${OBJECTDIR}/tools/glm/detail/dummy.o: tools/glm/detail/dummy.cpp
	${MKDIR} -p ${OBJECTDIR}/tools/glm/detail
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/tools/glm/detail/dummy.o tools/glm/detail/dummy.cpp

${OBJECTDIR}/tools/glm/detail/glm.o: tools/glm/detail/glm.cpp
	${MKDIR} -p ${OBJECTDIR}/tools/glm/detail
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/tools/glm/detail/glm.o tools/glm/detail/glm.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
