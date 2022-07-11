#ifndef PRISMCORE_GLOBAL_H
#define PRISMCORE_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(PRISMCORE_LIBRARY)
#define PRISMCORE_EXPORT Q_DECL_EXPORT
#else
#define PRISMCORE_EXPORT Q_DECL_IMPORT
#endif

#endif // PRISMCORE_GLOBAL_H
