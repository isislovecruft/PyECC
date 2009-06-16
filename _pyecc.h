/*
 *  pyecc - Copyright 2009 Slide, Inc.
 *
 *  This program is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU General Public License as
 *  published by the Free Software Foundation; either version 2 of the
 *  License, or (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *  General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA
 *  02111-1307 USA
 */

#ifndef _PYECC_H_
#define _PYECC_H_

#include <Python.h>

#include "seccure/libecc.h"

typedef struct {
    PyObject_HEAD
    /* object specific members */
    PyObject  *weakreflist;
} PyECC_KeyPair;

static PyTypeObject PyECC_KeyPairType = {
    PyObject_HEAD_INIT(NULL)
    0,                         /*ob_size*/
    "_pyecc.PyECC_KeyPair",             /*tp_name*/
    sizeof(PyECC_KeyPair), /*tp_basicsize*/
    0,                         /*tp_itemsize*/
    0,                         /*tp_dealloc*/
    0,                         /*tp_print*/
    0,                         /*tp_getattr*/
    0,                         /*tp_setattr*/
    0,                         /*tp_compare*/
    0,                         /*tp_repr*/
    0,                         /*tp_as_number*/
    0,                         /*tp_as_sequence*/
    0,                         /*tp_as_mapping*/
    0,                         /*tp_hash */
    0,                         /*tp_call*/
    0,                         /*tp_str*/
    0,                         /*tp_getattro*/
    0,                         /*tp_setattro*/
    0,                         /*tp_as_buffer*/
    Py_TPFLAGS_DEFAULT,        /*tp_flags*/
    "The KeyPair object contains the references to an \
encrypted private key and an unencrypted public key.", /* tp_doc */
};

typedef struct {
    PyObject_HEAD
    /* object specific members */
    PyObject *weakreflist;
} PyECC_ECC;

static PyTypeObject PyECC_ECCType = {
    PyObject_HEAD_INIT(NULL)
    0,                         /*ob_size*/
    "_pyecc.ECC",             /*tp_name*/
    sizeof(PyECC_ECC), /*tp_basicsize*/
    0,                         /*tp_itemsize*/
    0,                         /*tp_dealloc*/
    0,                         /*tp_print*/
    0,                         /*tp_getattr*/
    0,                         /*tp_setattr*/
    0,                         /*tp_compare*/
    0,                         /*tp_repr*/
    0,                         /*tp_as_number*/
    0,                         /*tp_as_sequence*/
    0,                         /*tp_as_mapping*/
    0,                         /*tp_hash */
    0,                         /*tp_call*/
    0,                         /*tp_str*/
    0,                         /*tp_getattro*/
    0,                         /*tp_setattro*/
    0,                         /*tp_as_buffer*/
    Py_TPFLAGS_DEFAULT,        /*tp_flags*/
    "The ECC object must be instantiated to work with any encrypted \
data, as some amount of state with libecc and libgcrypt is required", /* tp_doc */
};


#endif
