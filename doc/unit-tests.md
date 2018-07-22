Compiling/running unit tests
------------------------------------

Unit tests will be automatically compiled if dependencies were met in configure
and tests weren't explicitly disabled.

After configuring, they can be run with 'make check'.

To run the barandosd tests manually, launch src/test/test_barandos .

To add more barandosd tests, add `BOOST_AUTO_TEST_CASE` functions to the existing
.cpp files in the test/ directory or add new .cpp files that
implement new BOOST_AUTO_TEST_SUITE sections.

To run the barandos-qt tests manually, launch src/qt/test/barandos-qt_test

To add more barandos-qt tests, add them to the `src/qt/test/` directory and
the `src/qt/test/test_main.cpp` file.
