bin_PROGRAMS = viewnior

QUIET_GEN = $(Q:@=@echo '  GEN   '$@;)

uni_headers =           \
    vnr-message-area.h  \
    vnr-properties-dialog.h  \
    vnr-file.h          \
    vnr-prefs.h         \
    vnr-crop.h          \
    vnr-tools.h

viewnior_SOURCES =      \
    main.c              \
    vnr-window.c        \
    vnr-window.h        \
    vnr-message-area.c  \
    vnr-properties-dialog.c  \
    vnr-file.c          \
    vnr-prefs.c         \
    vnr-crop.c          \
    vnr-tools.c         \
    $(BUILT_SOURCES)    \
    $(uni_headers)

viewnior_CFLAGS =       \
    $(VNR_CFLAGS)       \
    $(VNR_WARNINGS)     \
    -DPACKAGE_DATA_DIR=\""$(datadir)"\" \
    -DPACKAGE_LOCALE_DIR=\""$(datadir)/locale"\"

viewnior_LDADD = $(VNR_LIBS)
