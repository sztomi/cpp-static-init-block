-- this is a premake4 script
-- see http://industriousone.com/premake

solution "static_init"
    language "c++"
    includedirs "./src"
    buildoptions { "-std=c++11" }

    configurations { "debug", "release" }

    configuration "debug"
        targetdir "build/debug"
        flags "Symbols"
        defines "DEBUG"

    configuration "release"
        targetdir "build/release"
        defines { "RELEASE", "NDEBUG" }

    project "static_init"
        kind "ConsoleApp"
        files "./src/**cc"
