lib_LIBRARIES = ../libpico.a
pkginclude_HEADERS = ../include/pico/*.h

___libpico_a_SOURCES = cencode.c displayqr.c keypair.c messagestart.c rvpbuffer.c base64.c channel.c json.c keypairing.c messagestatus.c shared.c buffer.c cryptosupport.c keyagreement.c messagepicoauth.c nonce.c sigmakeyderiv.c cdecode.c curlsupport.c keyauth.c messageserviceauth.c sigmaverifier.c log.c users.c debug.c auth.c continuous.c messagepicoreauth.c messageservicereauth.c sequencenumber.c
___libpico_a_CFLAGS = -std=c99 -fPIC -I"../include" @BT_CFLAGS@
ARFLAGS = cr
AR_FLAGS = cr

lib_LTLIBRARIES = ../libpico.la
___libpico_la_SOURCES = $(___libpico_a_SOURCES)
___libpico_la_CFLAGS = $(___libpico_a_CFLAGS) @BT_CFLAGS@
___libpico_la_LDFLAGS = = -version-info 1:0:0 @BT_LIBS@

