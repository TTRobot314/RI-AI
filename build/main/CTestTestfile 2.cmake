# CMake generated Testfile for 
# Source directory: /Users/mukuyo/Desktop/RI-AI/src/main
# Build directory: /Users/mukuyo/Desktop/RI-AI/build/main
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test("copyright" "/usr/local/bin/python3" "-u" "/Users/mukuyo/ros2_ws/ros2-osx/share/ament_cmake_test/cmake/run_test.py" "/Users/mukuyo/Desktop/RI-AI/build/main/test_results/main/copyright.xunit.xml" "--package-name" "main" "--output-file" "/Users/mukuyo/Desktop/RI-AI/build/main/ament_copyright/copyright.txt" "--command" "/Users/mukuyo/ros2_ws/ros2-osx/bin/ament_copyright" "--xunit-file" "/Users/mukuyo/Desktop/RI-AI/build/main/test_results/main/copyright.xunit.xml")
set_tests_properties("copyright" PROPERTIES  LABELS "copyright;linter" TIMEOUT "60" WORKING_DIRECTORY "/Users/mukuyo/Desktop/RI-AI/src/main" _BACKTRACE_TRIPLES "/Users/mukuyo/ros2_ws/ros2-osx/share/ament_cmake_test/cmake/ament_add_test.cmake;118;add_test;/Users/mukuyo/ros2_ws/ros2-osx/share/ament_cmake_copyright/cmake/ament_copyright.cmake;41;ament_add_test;/Users/mukuyo/ros2_ws/ros2-osx/share/ament_cmake_copyright/cmake/ament_cmake_copyright_lint_hook.cmake;18;ament_copyright;/Users/mukuyo/ros2_ws/ros2-osx/share/ament_cmake_copyright/cmake/ament_cmake_copyright_lint_hook.cmake;0;;/Users/mukuyo/ros2_ws/ros2-osx/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/Users/mukuyo/ros2_ws/ros2-osx/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/Users/mukuyo/ros2_ws/ros2-osx/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/Users/mukuyo/ros2_ws/ros2-osx/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/Users/mukuyo/ros2_ws/ros2-osx/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/Users/mukuyo/Desktop/RI-AI/src/main/CMakeLists.txt;54;ament_package;/Users/mukuyo/Desktop/RI-AI/src/main/CMakeLists.txt;0;")
add_test("cppcheck" "/usr/local/bin/python3" "-u" "/Users/mukuyo/ros2_ws/ros2-osx/share/ament_cmake_test/cmake/run_test.py" "/Users/mukuyo/Desktop/RI-AI/build/main/test_results/main/cppcheck.xunit.xml" "--package-name" "main" "--output-file" "/Users/mukuyo/Desktop/RI-AI/build/main/ament_cppcheck/cppcheck.txt" "--command" "/Users/mukuyo/ros2_ws/ros2-osx/bin/ament_cppcheck" "--xunit-file" "/Users/mukuyo/Desktop/RI-AI/build/main/test_results/main/cppcheck.xunit.xml")
set_tests_properties("cppcheck" PROPERTIES  LABELS "cppcheck;linter" TIMEOUT "180" WORKING_DIRECTORY "/Users/mukuyo/Desktop/RI-AI/src/main" _BACKTRACE_TRIPLES "/Users/mukuyo/ros2_ws/ros2-osx/share/ament_cmake_test/cmake/ament_add_test.cmake;118;add_test;/Users/mukuyo/ros2_ws/ros2-osx/share/ament_cmake_cppcheck/cmake/ament_cppcheck.cmake;61;ament_add_test;/Users/mukuyo/ros2_ws/ros2-osx/share/ament_cmake_cppcheck/cmake/ament_cmake_cppcheck_lint_hook.cmake;83;ament_cppcheck;/Users/mukuyo/ros2_ws/ros2-osx/share/ament_cmake_cppcheck/cmake/ament_cmake_cppcheck_lint_hook.cmake;0;;/Users/mukuyo/ros2_ws/ros2-osx/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/Users/mukuyo/ros2_ws/ros2-osx/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/Users/mukuyo/ros2_ws/ros2-osx/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/Users/mukuyo/ros2_ws/ros2-osx/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/Users/mukuyo/ros2_ws/ros2-osx/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/Users/mukuyo/Desktop/RI-AI/src/main/CMakeLists.txt;54;ament_package;/Users/mukuyo/Desktop/RI-AI/src/main/CMakeLists.txt;0;")
add_test("cpplint" "/usr/local/bin/python3" "-u" "/Users/mukuyo/ros2_ws/ros2-osx/share/ament_cmake_test/cmake/run_test.py" "/Users/mukuyo/Desktop/RI-AI/build/main/test_results/main/cpplint.xunit.xml" "--package-name" "main" "--output-file" "/Users/mukuyo/Desktop/RI-AI/build/main/ament_cpplint/cpplint.txt" "--command" "/Users/mukuyo/ros2_ws/ros2-osx/bin/ament_cpplint" "--xunit-file" "/Users/mukuyo/Desktop/RI-AI/build/main/test_results/main/cpplint.xunit.xml")
set_tests_properties("cpplint" PROPERTIES  LABELS "cpplint;linter" TIMEOUT "120" WORKING_DIRECTORY "/Users/mukuyo/Desktop/RI-AI/src/main" _BACKTRACE_TRIPLES "/Users/mukuyo/ros2_ws/ros2-osx/share/ament_cmake_test/cmake/ament_add_test.cmake;118;add_test;/Users/mukuyo/ros2_ws/ros2-osx/share/ament_cmake_cpplint/cmake/ament_cpplint.cmake;68;ament_add_test;/Users/mukuyo/ros2_ws/ros2-osx/share/ament_cmake_cpplint/cmake/ament_cmake_cpplint_lint_hook.cmake;35;ament_cpplint;/Users/mukuyo/ros2_ws/ros2-osx/share/ament_cmake_cpplint/cmake/ament_cmake_cpplint_lint_hook.cmake;0;;/Users/mukuyo/ros2_ws/ros2-osx/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/Users/mukuyo/ros2_ws/ros2-osx/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/Users/mukuyo/ros2_ws/ros2-osx/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/Users/mukuyo/ros2_ws/ros2-osx/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/Users/mukuyo/ros2_ws/ros2-osx/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/Users/mukuyo/Desktop/RI-AI/src/main/CMakeLists.txt;54;ament_package;/Users/mukuyo/Desktop/RI-AI/src/main/CMakeLists.txt;0;")
add_test("flake8" "/usr/local/bin/python3" "-u" "/Users/mukuyo/ros2_ws/ros2-osx/share/ament_cmake_test/cmake/run_test.py" "/Users/mukuyo/Desktop/RI-AI/build/main/test_results/main/flake8.xunit.xml" "--package-name" "main" "--output-file" "/Users/mukuyo/Desktop/RI-AI/build/main/ament_flake8/flake8.txt" "--command" "/Users/mukuyo/ros2_ws/ros2-osx/bin/ament_flake8" "--xunit-file" "/Users/mukuyo/Desktop/RI-AI/build/main/test_results/main/flake8.xunit.xml")
set_tests_properties("flake8" PROPERTIES  LABELS "flake8;linter" TIMEOUT "60" WORKING_DIRECTORY "/Users/mukuyo/Desktop/RI-AI/src/main" _BACKTRACE_TRIPLES "/Users/mukuyo/ros2_ws/ros2-osx/share/ament_cmake_test/cmake/ament_add_test.cmake;118;add_test;/Users/mukuyo/ros2_ws/ros2-osx/share/ament_cmake_flake8/cmake/ament_flake8.cmake;48;ament_add_test;/Users/mukuyo/ros2_ws/ros2-osx/share/ament_cmake_flake8/cmake/ament_cmake_flake8_lint_hook.cmake;18;ament_flake8;/Users/mukuyo/ros2_ws/ros2-osx/share/ament_cmake_flake8/cmake/ament_cmake_flake8_lint_hook.cmake;0;;/Users/mukuyo/ros2_ws/ros2-osx/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/Users/mukuyo/ros2_ws/ros2-osx/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/Users/mukuyo/ros2_ws/ros2-osx/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/Users/mukuyo/ros2_ws/ros2-osx/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/Users/mukuyo/ros2_ws/ros2-osx/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/Users/mukuyo/Desktop/RI-AI/src/main/CMakeLists.txt;54;ament_package;/Users/mukuyo/Desktop/RI-AI/src/main/CMakeLists.txt;0;")
add_test("lint_cmake" "/usr/local/bin/python3" "-u" "/Users/mukuyo/ros2_ws/ros2-osx/share/ament_cmake_test/cmake/run_test.py" "/Users/mukuyo/Desktop/RI-AI/build/main/test_results/main/lint_cmake.xunit.xml" "--package-name" "main" "--output-file" "/Users/mukuyo/Desktop/RI-AI/build/main/ament_lint_cmake/lint_cmake.txt" "--command" "/Users/mukuyo/ros2_ws/ros2-osx/bin/ament_lint_cmake" "--xunit-file" "/Users/mukuyo/Desktop/RI-AI/build/main/test_results/main/lint_cmake.xunit.xml")
set_tests_properties("lint_cmake" PROPERTIES  LABELS "lint_cmake;linter" TIMEOUT "60" WORKING_DIRECTORY "/Users/mukuyo/Desktop/RI-AI/src/main" _BACKTRACE_TRIPLES "/Users/mukuyo/ros2_ws/ros2-osx/share/ament_cmake_test/cmake/ament_add_test.cmake;118;add_test;/Users/mukuyo/ros2_ws/ros2-osx/share/ament_cmake_lint_cmake/cmake/ament_lint_cmake.cmake;41;ament_add_test;/Users/mukuyo/ros2_ws/ros2-osx/share/ament_cmake_lint_cmake/cmake/ament_cmake_lint_cmake_lint_hook.cmake;21;ament_lint_cmake;/Users/mukuyo/ros2_ws/ros2-osx/share/ament_cmake_lint_cmake/cmake/ament_cmake_lint_cmake_lint_hook.cmake;0;;/Users/mukuyo/ros2_ws/ros2-osx/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/Users/mukuyo/ros2_ws/ros2-osx/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/Users/mukuyo/ros2_ws/ros2-osx/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/Users/mukuyo/ros2_ws/ros2-osx/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/Users/mukuyo/ros2_ws/ros2-osx/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/Users/mukuyo/Desktop/RI-AI/src/main/CMakeLists.txt;54;ament_package;/Users/mukuyo/Desktop/RI-AI/src/main/CMakeLists.txt;0;")
add_test("pep257" "/usr/local/bin/python3" "-u" "/Users/mukuyo/ros2_ws/ros2-osx/share/ament_cmake_test/cmake/run_test.py" "/Users/mukuyo/Desktop/RI-AI/build/main/test_results/main/pep257.xunit.xml" "--package-name" "main" "--output-file" "/Users/mukuyo/Desktop/RI-AI/build/main/ament_pep257/pep257.txt" "--command" "/Users/mukuyo/ros2_ws/ros2-osx/bin/ament_pep257" "--xunit-file" "/Users/mukuyo/Desktop/RI-AI/build/main/test_results/main/pep257.xunit.xml")
set_tests_properties("pep257" PROPERTIES  LABELS "pep257;linter" TIMEOUT "60" WORKING_DIRECTORY "/Users/mukuyo/Desktop/RI-AI/src/main" _BACKTRACE_TRIPLES "/Users/mukuyo/ros2_ws/ros2-osx/share/ament_cmake_test/cmake/ament_add_test.cmake;118;add_test;/Users/mukuyo/ros2_ws/ros2-osx/share/ament_cmake_pep257/cmake/ament_pep257.cmake;41;ament_add_test;/Users/mukuyo/ros2_ws/ros2-osx/share/ament_cmake_pep257/cmake/ament_cmake_pep257_lint_hook.cmake;18;ament_pep257;/Users/mukuyo/ros2_ws/ros2-osx/share/ament_cmake_pep257/cmake/ament_cmake_pep257_lint_hook.cmake;0;;/Users/mukuyo/ros2_ws/ros2-osx/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/Users/mukuyo/ros2_ws/ros2-osx/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/Users/mukuyo/ros2_ws/ros2-osx/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/Users/mukuyo/ros2_ws/ros2-osx/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/Users/mukuyo/ros2_ws/ros2-osx/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/Users/mukuyo/Desktop/RI-AI/src/main/CMakeLists.txt;54;ament_package;/Users/mukuyo/Desktop/RI-AI/src/main/CMakeLists.txt;0;")
add_test("uncrustify" "/usr/local/bin/python3" "-u" "/Users/mukuyo/ros2_ws/ros2-osx/share/ament_cmake_test/cmake/run_test.py" "/Users/mukuyo/Desktop/RI-AI/build/main/test_results/main/uncrustify.xunit.xml" "--package-name" "main" "--output-file" "/Users/mukuyo/Desktop/RI-AI/build/main/ament_uncrustify/uncrustify.txt" "--command" "/Users/mukuyo/ros2_ws/ros2-osx/bin/ament_uncrustify" "--xunit-file" "/Users/mukuyo/Desktop/RI-AI/build/main/test_results/main/uncrustify.xunit.xml")
set_tests_properties("uncrustify" PROPERTIES  LABELS "uncrustify;linter" TIMEOUT "60" WORKING_DIRECTORY "/Users/mukuyo/Desktop/RI-AI/src/main" _BACKTRACE_TRIPLES "/Users/mukuyo/ros2_ws/ros2-osx/share/ament_cmake_test/cmake/ament_add_test.cmake;118;add_test;/Users/mukuyo/ros2_ws/ros2-osx/share/ament_cmake_uncrustify/cmake/ament_uncrustify.cmake;65;ament_add_test;/Users/mukuyo/ros2_ws/ros2-osx/share/ament_cmake_uncrustify/cmake/ament_cmake_uncrustify_lint_hook.cmake;34;ament_uncrustify;/Users/mukuyo/ros2_ws/ros2-osx/share/ament_cmake_uncrustify/cmake/ament_cmake_uncrustify_lint_hook.cmake;0;;/Users/mukuyo/ros2_ws/ros2-osx/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/Users/mukuyo/ros2_ws/ros2-osx/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/Users/mukuyo/ros2_ws/ros2-osx/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/Users/mukuyo/ros2_ws/ros2-osx/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/Users/mukuyo/ros2_ws/ros2-osx/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/Users/mukuyo/Desktop/RI-AI/src/main/CMakeLists.txt;54;ament_package;/Users/mukuyo/Desktop/RI-AI/src/main/CMakeLists.txt;0;")
add_test("xmllint" "/usr/local/bin/python3" "-u" "/Users/mukuyo/ros2_ws/ros2-osx/share/ament_cmake_test/cmake/run_test.py" "/Users/mukuyo/Desktop/RI-AI/build/main/test_results/main/xmllint.xunit.xml" "--package-name" "main" "--output-file" "/Users/mukuyo/Desktop/RI-AI/build/main/ament_xmllint/xmllint.txt" "--command" "/Users/mukuyo/ros2_ws/ros2-osx/bin/ament_xmllint" "--xunit-file" "/Users/mukuyo/Desktop/RI-AI/build/main/test_results/main/xmllint.xunit.xml")
set_tests_properties("xmllint" PROPERTIES  LABELS "xmllint;linter" TIMEOUT "60" WORKING_DIRECTORY "/Users/mukuyo/Desktop/RI-AI/src/main" _BACKTRACE_TRIPLES "/Users/mukuyo/ros2_ws/ros2-osx/share/ament_cmake_test/cmake/ament_add_test.cmake;118;add_test;/Users/mukuyo/ros2_ws/ros2-osx/share/ament_cmake_xmllint/cmake/ament_xmllint.cmake;50;ament_add_test;/Users/mukuyo/ros2_ws/ros2-osx/share/ament_cmake_xmllint/cmake/ament_cmake_xmllint_lint_hook.cmake;18;ament_xmllint;/Users/mukuyo/ros2_ws/ros2-osx/share/ament_cmake_xmllint/cmake/ament_cmake_xmllint_lint_hook.cmake;0;;/Users/mukuyo/ros2_ws/ros2-osx/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/Users/mukuyo/ros2_ws/ros2-osx/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/Users/mukuyo/ros2_ws/ros2-osx/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/Users/mukuyo/ros2_ws/ros2-osx/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/Users/mukuyo/ros2_ws/ros2-osx/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/Users/mukuyo/Desktop/RI-AI/src/main/CMakeLists.txt;54;ament_package;/Users/mukuyo/Desktop/RI-AI/src/main/CMakeLists.txt;0;")
