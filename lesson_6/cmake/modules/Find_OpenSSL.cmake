find_package(OpenSSL)



if(NOT OPENSSL_FOUND)
  set(all_found_result "not found")
  message("OpenSSL not found!")
else()
  message("system OpenSSL library found. Version - ${OPENSSL_VERSION}")
endif()

if(OPENSSL_INCLUDE_DIR)
  message("OpenSSL include directory found.")
else()
  set(all_found_result "not found")
  message("OpenSSL include directory not found!")
endif()

if(OPENSSL_LIBRARIES)
  message("The libraries needed to use OpenSSL found.")
else()
  set(all_found_result "not found")
  message("The libraries needed to use OpenSSL not found!")
endif()
