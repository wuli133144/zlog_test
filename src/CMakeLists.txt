
project(zlog_test)
cmake_minimum_required(VERSION 2.6)
  

aux_source_directory(./ src_list)

include_directories(../base/ ./ )

#link_libraries(../base/zloglib/)

link_directories(/home/server/test/zlog-latest-stable/base/zloglib/)

MESSAGE(${PROJECT_SOURCE_DIR})
add_executable(zlog_test  ${src_list})


target_link_libraries(zlog_test zlog)



