/*
 * Copyright (C) 2016 Kees Bakker
 *               2016 Freie Universität Berlin
 *
 * This file is subject to the terms and conditions of the GNU Lesser
 * General Public License v2.1. See the file LICENSE in the top level
 * directory for more details.
 */

/**
 * @ingroup         cpu_sam0_common
 * @{
 *
 * @file
 * @brief           Wrapper include file for including the specific SAM0 vendor
 *                  header
 *
 * @author          Kees Bakker <kees@sodaq.com>
 * @author          Hauke Petersen <hauke.petersen@fu-berlin.de>
 */

#ifndef SAM0_H
#define SAM0_H

#ifdef __cplusplus
extern "C" {
#endif

#if   defined(CPU_MODEL_SAML21E15A)
  #include "cmsis/saml21/include/saml21e15a.h"
#elif defined(CPU_MODEL_SAML21E16A)
  #include "cmsis/saml21/include/saml21e16a.h"
#elif defined(CPU_MODEL_SAML21E17A)
  #include "cmsis/saml21/include/saml21e17a.h"
#elif defined(CPU_MODEL_SAML21G16A)
  #include "cmsis/saml21/include/saml21g16a.h"
#elif defined(CPU_MODEL_SAML21G17A)
  #include "cmsis/saml21/include/saml21g17a.h"
#elif defined(CPU_MODEL_SAML21G18A)
  #include "cmsis/saml21/include/saml21g18a.h"
#elif defined(CPU_MODEL_SAML21J16A)
  #include "cmsis/saml21/include/saml21j16a.h"
#elif defined(CPU_MODEL_SAML21J17A)
  #include "cmsis/saml21/include/saml21j17a.h"
#elif defined(CPU_MODEL_SAML21J18A)
  #include "cmsis/saml21/include/saml21j18a.h"

#elif defined(CPU_MODEL_SAMR21E16A)
  #include "cmsis/samr21/include/samr21e16a.h"
#elif defined(CPU_MODEL_SAMR21E17A)
  #include "cmsis/samr21/include/samr21e17a.h"
#elif defined(CPU_MODEL_SAMR21E18A)
  #include "cmsis/samr21/include/samr21e18a.h"
#elif defined(CPU_MODEL_SAMR21G16A)
  #include "cmsis/samr21/include/samr21g16a.h"
#elif defined(CPU_MODEL_SAMR21G17A)
  #include "cmsis/samr21/include/samr21g17a.h"
#elif defined(CPU_MODEL_SAMR21G18A)
  #include "cmsis/samr21/include/samr21g18a.h"

#elif defined(CPU_MODEL_SAMD21E15A)
  #include "cmsis/samd21/include/samd21e15a.h"
#elif defined(CPU_MODEL_SAMD21E16A)
  #include "cmsis/samd21/include/samd21e16a.h"
#elif defined(CPU_MODEL_SAMD21E17A)
  #include "cmsis/samd21/include/samd21e17a.h"
#elif defined(CPU_MODEL_SAMD21E18A)
  #include "cmsis/samd21/include/samd21e18a.h"
#elif defined(CPU_MODEL_SAMD21G15A)
  #include "cmsis/samd21/include/samd21g15a.h"
#elif defined(CPU_MODEL_SAMD21G16A)
  #include "cmsis/samd21/include/samd21g16a.h"
#elif defined(CPU_MODEL_SAMD21G17A)
  #include "cmsis/samd21/include/samd21g17a.h"
#elif defined(CPU_MODEL_SAMD21G17AU)
  #include "cmsis/samd21/include/samd21g17au.h"
#elif defined(CPU_MODEL_SAMD21G18A)
  #include "cmsis/samd21/include/samd21g18a.h"
#elif defined(CPU_MODEL_SAMD21G18AU)
  #include "cmsis/samd21/include/samd21g18au.h"
#elif defined(CPU_MODEL_SAMD21J15A)
  #include "cmsis/samd21/include/samd21j15a.h"
#elif defined(CPU_MODEL_SAMD21J16A)
  #include "cmsis/samd21/include/samd21j16a.h"
#elif defined(CPU_MODEL_SAMD21J17A)
  #include "cmsis/samd21/include/samd21j17a.h"
#elif defined(CPU_MODEL_SAMD21J18A)
  #include "cmsis/samd21/include/samd21j18a.h"
#elif defined(CPU_MODEL_SAMD21E15B)
  #include "cmsis/samd21/include/samd21e15b.h"
#elif defined(CPU_MODEL_SAMD21E15BU)
  #include "cmsis/samd21/include/samd21e15bu.h"
#elif defined(CPU_MODEL_SAMD21E15L)
  #include "cmsis/samd21/include/samd21e15l.h"
#elif defined(CPU_MODEL_SAMD21E16B)
  #include "cmsis/samd21/include/samd21e16b.h"
#elif defined(CPU_MODEL_SAMD21E16BU)
  #include "cmsis/samd21/include/samd21e16bu.h"
#elif defined(CPU_MODEL_SAMD21E16L)
  #include "cmsis/samd21/include/samd21e16l.h"
#elif defined(CPU_MODEL_SAMD21G15B)
  #include "cmsis/samd21/include/samd21g15b.h"
#elif defined(CPU_MODEL_SAMD21G15L)
  #include "cmsis/samd21/include/samd21g15l.h"
#elif defined(CPU_MODEL_SAMD21G16B)
  #include "cmsis/samd21/include/samd21g16b.h"
#elif defined(CPU_MODEL_SAMD21G16L)
  #include "cmsis/samd21/include/samd21g16l.h"
#elif defined(CPU_MODEL_SAMD21J15B)
  #include "cmsis/samd21/include/samd21j15b.h"
#elif defined(CPU_MODEL_SAMD21J16B)
  #include "cmsis/samd21/include/samd21j16b.h"

#else
  #error "Unsupported SAM0 variant."
#endif

#ifdef __cplusplus
}
#endif

#endif /* SAM0_H */
/** @} */
