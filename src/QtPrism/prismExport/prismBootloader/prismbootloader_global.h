#ifndef PRISMBOOTLOADER_GLOBAL_H
#define PRISMBOOTLOADER_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(PRISMBOOTLOADER_LIBRARY)
#define PRISMBOOTLOADER_EXPORT Q_DECL_EXPORT
#else
#define PRISMBOOTLOADER_EXPORT Q_DECL_IMPORT
#endif

#endif // PRISMBOOTLOADER_GLOBAL_H
