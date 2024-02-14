#include <stdio.h>
#include <Python.h>

#include <Python.h>

void print_python_list(PyObject *p) {
    if (!PyList_Check(p)) {
        fprintf(stderr, "Invalid Python list object.\n");
        return;
    }

    Py_ssize_t list_size = PyList_Size(p);
    PyObject *item;

    printf("[*] Python list info\n");
    printf("[*] Size of the Python List = %ld\n", list_size);
    printf("[*] Allocated = %ld\n", ((PyListObject *)p)->allocated);

    for (Py_ssize_t i = 0; i < list_size; i++) {
        item = PyList_GET_ITEM(p, i);
        printf("Element %ld: %s\n", i, Py_TYPE(item)->tp_name);
    }
}

void print_python_bytes(PyObject *p) {
    if (!PyBytes_Check(p)) {
        fprintf(stderr, "Invalid Python bytes object.\n");
        return;
    }

    Py_ssize_t bytes_size = PyBytes_Size(p);
    Py_ssize_t max_bytes = bytes_size > 10 ? 10 : bytes_size;

    printf("[.] bytes object info\n");
    printf("  Size: %ld\n", bytes_size);
    printf("  trying string: %s\n", ((PyBytesObject *)p)->ob_sval);
    printf("  first %ld bytes: ", max_bytes);
    for (Py_ssize_t i = 0; i < max_bytes; i++) {
        printf("%02x", (unsigned char)((PyBytesObject *)p)->ob_sval[i]);
        if (i < max_bytes - 1)
            printf(" ");
    }
    printf("\n");
}

