PyECC: Python Elliptical Curve Cryptography
============================================

PyECC is a Python module wrapped around the ``libseccure`` library which itself is 
based off of code developed originally for the `seccure(1) utility <http://point-at-infinity.org/seccure/>`_.

Build and Install
-----------------

Since PyECC uses `setuptools <http://pypi.python.org/pypi/setuptools>`_ to build and 
install the PyECC module and corresponding library, you need to run:: 
    
    % sudo python setup.py install

You may need to also get the development headers for you version of python::

    % sudo apt-get install python2.7-dev

where "2.7" should correspond to your default python version. If your compiler gives
you errors about a missing gcrypt.h file, you will also need to install the gcrypt 
library and your distro's package for seccure::

    % sudo apt-get install libgcrypt11-dev seccure

Author(s)
---------

PyECC was developed by R. Tyler Ballance (``tyler@slide.com``) at `Slide, Inc. <http://slide.com>`_. 
The original seccure(1) binary however was developed by B. Poettering.
