find_package(OpenSSL)

if(OPENSSL_FOUND)
  message("TEST OpenSSL2 found!")
else()
  set(all_found_result "not found")
  message("TEST OpenSSL2 not found!")
endif()

if(OPENSSL_LIBRARIES)
  message("TEST OpenSSL2 lib found!")
else()
  set(all_found_result "not found")
  message("TEST OpenSSL2 lib not found!")
endif()


find_package(MFC REQUIRED)
if(MFC_FOUND)
  message("MFC_FOUND found!")
else()
  #set(all_found_result "not found")
  message("MFC_FOUND not found!")
endif()

