# Plantilla de Makefile para Irrlicht
# Solo es necesario cambiar target, lista de fuentes, recursos y directorio de instalacion de Irrlicht

# Nombre del ejecutable que va a ser generado
Target := Starship1414
# Lista de ficheros fuente, separados por espacios
Sources := main.cpp intro.cpp ManejadorEstadoGeneral.cpp EstadoGeneral.cpp Menu/Menu.cpp CAppReceiver.cpp Juego.cpp Enemigos/Enemigo.cpp Enemigos/CriaAlien.cpp Enemigos/AlienBerserker.cpp Escenario/Camara.cpp Escenario/Escenario.cpp Escenario/Pared.cpp Escenario/Puerta.cpp Escenario/readJson.cpp Fisicas/Entity2D.cpp Fisicas/MiContactListener.cpp Fisicas/MyContactFilter.cpp Fisicas/RayCastCallback.cpp Jugador/Bala.cpp Jugador/Personaje.cpp Jugador/Arma.cpp Jugador/Pistola.cpp Jugador/Fusil.cpp Jugador/Escopeta.cpp
# Lista de ficheros de recursos, separados por espacios windows no hace falta
Resources := 
# Ruta del directorio donde tenemos Irrlicht instalado (donde estan los directorios lib e include)
IrrlichtHome := ../irrlicht-1.8.4
Box2DHome := ../Box2D\Box2D
JsonHome := ../rapidjson
# Ruta del ejecutable generado
BinPath = .
CXX = mingw32-g++
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

CPPFLAGS = -I$(IrrlichtHome)/include -I/usr/X11R6/include $(USERCPPFLAGS) -I$(Box2DHome) -I$(JsonHome)
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

