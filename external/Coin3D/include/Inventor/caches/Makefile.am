
PublicHeaders = \
	SoBoundingBoxCache.h \
	SoCache.h \
	SoConvexDataCache.h \
	SoGLCacheList.h \
	SoGLRenderCache.h \
	SoNormalCache.h \
	SoPrimitiveVertexCache.h \
	SoTextureCoordinateCache.h

PrivateHeaders =

ObsoleteHeaders =

##$ BEGIN TEMPLATE Make-Include-Common(caches, caches)
# **************************************************************************
# This template depends on the following variables having been set up before
# its invokation.
#
# PublicHeaders    - header files that should be installed
# PrivateHeaders   - source files that should be distributed, but not
#                    installed - including source-included source files.
# ObsoletedHeaders - header files that should be removed upon installation

# Everything below is autogenerated from a macro, so don't modify
# within the Makefile.am itself. 19991201 mortene.

EXTRA_DIST = $(PrivateHeaders)

if MAC_FRAMEWORK
libcachesincdir = $(MAC_FRAMEWORK_PREFIX)/$(MAC_FRAMEWORK_NAME).framework/Versions/$(MAC_FRAMEWORK_VERSION)/Headers/caches
# hack to change libdir value when installing Mac OS X compiler framework
lib@nop@dir = $(MAC_FRAMEWORK_PREFIX)/$(MAC_FRAMEWORK_NAME).framework/Versions/$(MAC_FRAMEWORK_VERSION)/Libraries
else
libcachesincdir = $(includedir)/Inventor/caches
endif
libcachesinc_HEADERS = $(PublicHeaders)

install-libcachesincHEADERS: $(libcachesinc_HEADERS)
	@$(NORMAL_INSTALL)
	@if test x"$(libcachesinc_HEADERS)" = x""; then :; else \
	  echo " $(mkinstalldirs) $(DESTDIR)$(libcachesincdir)"; \
	  $(mkinstalldirs) $(DESTDIR)$(libcachesincdir); \
	fi
	@list='$(libcachesinc_HEADERS)'; for p in $$list; do \
	  if test -f "$$p"; then d=; else d="$(srcdir)/"; fi; \
	  f="`echo $$p | sed -e 's|^.*/||'`"; \
	  src="$$d$$p"; dst="$(DESTDIR)$(libcachesincdir)/$$f"; \
	  if cmp -s "$$src" "$$dst"; then :; else \
	    echo " $(INSTALL_HEADER) $$src $$dst"; \
	    $(INSTALL_HEADER) "$$src" "$$dst" || exit 1; \
	  fi \
	done
	@list='$(ObsoletedHeaders)'; for f in $$list; do \
	  file="$(DESTDIR)$(libcachesincdir)/$$f"; \
	  if test -x "$$file"; then \
	    echo " rm -f $$file"; \
	    rm -f "$$file"; \
	  fi \
	done; \
	:

##$ END TEMPLATE Make-Include-Common
