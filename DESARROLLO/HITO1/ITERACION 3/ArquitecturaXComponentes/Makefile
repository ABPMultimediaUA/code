# Plantilla de Makefile para Irrlicht
# Solo es necesario cambiar target, lista de fuentes, recursos y directorio de instalacion de Irrlicht

# Nombre del ejecutable que va a ser generado
Target := ArquitecturaXComponentes
# Lista de ficheros fuente, separados por espacios
Sources := main.cpp facade/CAppReceiver.cpp facade/facadeMotorGrafico.cpp entitySystem/framework/gameEntity.cpp entitySystem/framework/diccionarioEnCo.cpp entitySystem/framework/vectorEntity.cpp entitySystem/framework/entityManager.cpp framework/vector2.cpp framework/vector3.cpp entitySystem/components/componente.cpp entitySystem/components/transformComponent.cpp entitySystem/components/balaComponent.cpp entitySystem/components/escenarioComponent.cpp entitySystem/components/colisionComponent.cpp entitySystem/components/stateMachineComponent.cpp entitySystem/components/camaraComponent.cpp entitySystem/components/velocityComponent.cpp entitySystem/components/renderComponent.cpp entitySystem/components/playerComponent.cpp entitySystem/components/handleMoverComponent.cpp entitySystem/components/cargadorComponent.cpp entitySystem/systems/system.cpp entitySystem/systems/playerSystem.cpp entitySystem/systems/handleMoverSystem.cpp entitySystem/systems/moveSystem.cpp entitySystem/systems/camaraSystem.cpp entitySystem/systems/rotarSystem.cpp entitySystem/systems/disparoSystem.cpp framework/gameClock.cpp facade/Entity2D.cpp facade/facadeColision.cpp framework/MiContactListener.cpp framework/MyContactFilter.cpp
# Lista de ficheros de recursos, separados por espacios windows no hace falta
Resources :=
# Ruta del directorio donde tenemos Irrlicht instalado (donde estan los directorios lib e include)
IrrlichtHome := tools\irrlicht184
Box2DHome := tools\Box2D
JsonHome := tools\rapidjson
# Ruta del ejecutable generado
BinPath = .
# CXX = mingw32-g++
# opciones generales de compilacion (might need to be set when compiling the lib, too)
# flash de preprocesamiento (defines y directorios de includes)
USERCPPFLAGS =
# flags de optimizacion
USERCXXFLAGS = -O3 -ffast-math
#USERCXXFLAGS = -g -Wall
# flags de enlazado (librerias y rutas de librerias)
USERLDFLAGS =

####
# No es necesario hacer cambios a partir de aqui
####

CPPFLAGS = -I$(IrrlichtHome)/include -I/usr/X11R6/include $(USERCPPFLAGS) -I$(Box2DHome)
CXXFLAGS = $(USERCXXFLAGS)
LDFLAGS = $(USERLDFLAGS)

# Linux es el target por defecto
all: all_win32

# opciones especificas de cada target
all_linux all_macos all_win32 static_win32: LDFLAGS += -L$(IrrlichtHome)/lib/$(SYSTEM) -lIrrlicht -L$(Box2DHome) -lBox2D
all_linux: LDFLAGS += -L/usr/X11R6/lib$(LIBSELECT) -lGL -lXxf86vm -lXext -lX11 -lXcursor
all_linux clean_linux: SYSTEM=Linux
all_macos: LDFLAGS += -Xlinker -no_pie -framework OpenGL -framework Cocoa -framework Carbon -framework IOKit
#all_macos: CPPFLAGS += -arch i386 -stdlib=libstdc++
all_macos clean_macos: SYSTEM=MacOSX
all_win32 clean_win32 static_win32: SYSTEM=Win32-gcc
all_win32 clean_win32 static_win32: SUF=.exe
static_win32: CPPFLAGS += -D_IRR_STATIC_LIB_
all_win32: LDFLAGS += -lopengl32 -lm
static_win32: LDFLAGS += -lgdi32 -lwinspool -lcomdlg32 -lole32 -loleaut32 -luuid -lodbc32 -lodbccp32 -lopengl32
# nombre del binario
DESTPATH = $(BinPath)/$(Target)$(SUF)

all_linux compile_macos all_win32 static_win32:
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) $(Sources) -o $(DESTPATH) $(LDFLAGS)

all_macos: compile_macos
	mkdir -p $(BinPath)/${Target}.app
	mkdir -p $(BinPath)/${Target}.app/Contents
	mkdir -p $(BinPath)/${Target}.app/Contents/Resources
	mkdir -p $(BinPath)/${Target}.app/Contents/MacOS
ifdef Resources
	cp $(Resources) $(BinPath)/${Target}.app/Contents/Resources
endif
	mv $(DESTPATH) $(BinPath)/${Target}.app/Contents/MacOS

clean: clean_linux clean_macos clean_win32

clean_linux clean_win32:
	@$(RM) $(DESTPATH)

clean_macos:
	@$(RM) -Rf $(BinPath)/${Target}.app

.PHONY: all all_win32 static_win32 clean clean_linux clean_win32

ifeq ($(HOSTTYPE), x86_64)
LIBSELECT=64
endif

ifeq ($(HOSTTYPE), sun4)
LDFLAGS += -lrt
endif
