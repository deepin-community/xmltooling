/**
 * Licensed to the University Corporation for Advanced Internet
 * Development, Inc. (UCAID) under one or more contributor license
 * agreements. See the NOTICE file distributed with this work for
 * additional information regarding copyright ownership.
 *
 * UCAID licenses this file to you under the Apache License,
 * Version 2.0 (the "License"); you may not use this file except
 * in compliance with the License. You may obtain a copy of the
 * License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
 * either express or implied. See the License for the specific
 * language governing permissions and limitations under the License.
 */

/* config_win32.h.  Copied from a ./configure on Unix */

/* Define if C++ compiler supports covariant virtual methods. */
#define HAVE_COVARIANT_RETURNS 1

/* Define to 1 if C++ compiler supports nullptr keyword. */
#if _MSC_VER >= 1600
# define HAVE_NULLPTR 1
#endif

/* Define to 1 if you have the <dlfcn.h> header file. */
/* #undef HAVE_DLFCN_H */

/* Define to 1 if you have the `gmtime_r' function. */
/* #undef HAVE_GMTIME_R */

/* Define if you have an STL implementation that supports useful string
   specialization. */
#define HAVE_GOOD_STL 1

/* Define to 1 if you have an STL implementation that supports
   std::iterator_traits. */
#define HAVE_ITERATOR_TRAITS 1

/* Define to 1 if you have the <inttypes.h> header file. */
/* #undef HAVE_INTTYPES_H */

/* Define if log4shib library is used. */
#define XMLTOOLING_LOG4SHIB 1

/* Define if log4cpp library is used. */
/* #undef XMLTOOLING_LOG4CPP */

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* define if the compiler implements namespaces */
#define HAVE_NAMESPACES 1

/* Define to 1 if you have the <stdint.h> header file. */
/* #undef HAVE_STDINT_H */

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the `strchr' function. */
#define HAVE_STRCHR 1

/* Define to 1 if you have the `strdup' function. */
#define HAVE_STRDUP 1

/* Define to 1 if you have the <strings.h> header file. */
/* #undef HAVE_STRINGS_H */

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the `strstr' function. */
#define HAVE_STRSTR 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <unistd.h> header file. */
/* #undef HAVE_UNISTD_H */

/* Define to 1 if you have the `curl_off_t' type. */
#define HAVE_CURL_OFF_T 1

/* Define to 1 if you have support for the CURLINFO_TLS_SSL_PTR feature. */
#define HAVE_DECL_CURLINFO_TLS_SSL_PTR 1

/* Define to 1 if you have support for the CURLOPT_ACCEPT_ENCODING option. */
#define HAVE_DECL_CURLOPT_ACCEPT_ENCODING 1

/* Name of package */
#define PACKAGE "xmltooling"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "https://issues.shibboleth.net/"

/* Define to the full name of this package. */
#define PACKAGE_NAME "xmltooling"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "xmltooling 3.2.4"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "xmltooling"

/* Define to the version of this package. */
#define PACKAGE_VERSION "3.2.4"

/* Define to the necessary symbol if this constant uses a non-standard name on
   your system. */
/* #undef PTHREAD_CREATE_JOINABLE */

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Define to 1 if your <sys/time.h> declares `struct tm'. */
/* #undef TM_IN_SYS_TIME */

/* Version number of package */
#define VERSION "3.2.4"

/* Define if you wish to disable XML-Security-dependent features. */
/* #undef XMLTOOLING_NO_XMLSEC */

/* Define to empty if `const' does not conform to ANSI C. */
/* #undef const */

/* Define to `unsigned' if <sys/types.h> does not define. */
/* #undef size_t */
