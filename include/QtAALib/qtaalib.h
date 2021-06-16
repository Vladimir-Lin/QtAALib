/****************************************************************************
 *
 * Copyright (C) 2001~2016 Neutrino International Inc.
 *
 * Author   : Brian Lin ( Foxman , Vladimir Lin , Vladimir Forest )
 * E-mail   : lin.foxman@gmail.com
 *          : lin.vladimir@gmail.com
 *          : wolfram_lin@yahoo.com
 *          : wolfram_lin@sina.com
 *          : wolfram_lin@163.com
 * Skype    : wolfram_lin
 * WeChat   : 153-0271-7160
 * WhatsApp : 153-0271-7160
 * QQ       : lin.vladimir@gmail.com
 * URL      : http://qtaalib.sourceforge.net/
 *
 * QtAALib acts as an interface between Qt and AALib library.
 * Please keep QtAALib as simple as possible.
 *
 * Copyright 2001 ~ 2016
 *
 ****************************************************************************/

#ifndef QT_AALIB_H
#define QT_AALIB_H

#include <QtCore>
#ifndef QT_STATIC
#include <QtScript>
#endif

QT_BEGIN_NAMESPACE

#ifndef QT_STATIC
#  if defined(QT_BUILD_QTAALIB_LIB)
#    define Q_AALIB_EXPORT Q_DECL_EXPORT
#  else
#    define Q_AALIB_EXPORT Q_DECL_IMPORT
#  endif
#else
#    define Q_AALIB_EXPORT
#endif

#define QT_AALIB_LIB 1

#define BEGIN_AALIB_NAMESPACE namespace AALib {
#define END_AALIB_NAMESPACE   }

BEGIN_AALIB_NAMESPACE

Q_AALIB_EXPORT QString version (void) ;

END_AALIB_NAMESPACE

QT_END_NAMESPACE

#endif
