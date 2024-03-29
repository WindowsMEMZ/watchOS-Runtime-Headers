//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 402.2.3.0.0
//
#ifndef ETDataSourceWithCache_h
#define ETDataSourceWithCache_h
@import Foundation;

#include "ETDataSource-Protocol.h"

@protocol {basic_string<char, std::char_traits<char>, std::allocator<char>>="__r_"{__compressed_pair<std::basic_string<char>::__rep, std::allocator<char>>="__value_"{__rep=""(?="__l"{__long="__data_"*"__size_"Q"__cap_"b63"__is_long_"b1}"__s"{__short="__data_"[23c]"__padding_"[0C]"__size_"b7"__is_long_"b1}"__r"{__raw="__words"[3Q]})}}}, {map<int, ETDataPoint *, std::less<int>, std::allocator<std::pair<const int, ETDataPoint *>>>="__tree_"{__tree<std::__value_type<int, ETDataPoint *>, std::__map_value_compare<int, std::__value_type<int, ETDataPoint *>, std::less<int>>, std::allocator<std::__value_type<int, ETDataPoint *>>>="__begin_node_"^v"__pair1_"{__compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<int, ETDataPoint *>, void *>>>="__value_"{__tree_end_node<std::__tree_node_base<void *> *>="__left_"^v}}"__pair3_"{__compressed_pair<unsigned long, std::__map_value_compare<int, std::__value_type<int, ETDataPoint *>, std::less<int>>>="__value_"Q}}};

@interface ETDataSourceWithCache : NSObject<ETDataSource> {
  /* instance variables */
  NSObject<ETDataSource> *_source;
  struct map<int, ETDataPoint *, std::less<int>, std::allocator<std::pair<const int, ETDataPoint *>>> { struct __tree<std::__value_type<int, ETDataPoint *>, std::__map_value_compare<int, std::__value_type<int, ETDataPoint *>, std::less<int>>, std::allocator<std::__value_type<int, ETDataPoint *>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<int, ETDataPoint *>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<int, std::__value_type<int, ETDataPoint *>, std::less<int>>> { unsigned long long __value_; } __pair3_; } __tree_; } _cache;
  struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *__data_; unsigned long long __size_; unsigned int x :63 __cap_; unsigned int x :1 __is_long_; } __l; struct __short { char x[23] __data_; unsigned char x[0] __padding_; unsigned int x :7 __size_; unsigned int x :1 __is_long_; } __s; struct __raw { unsigned long long x[3] __words; } __r; } x0; } __value_; } __r_; } dump_path;
  BOOL dump_descriptors;
}

/* instance methods */
- (id)initWithDataSource:(id)source;
- (id)initWithDataSource:(id)source dumpPath:(id)path;
- (id)dataPointAtIndex:(int)index;
- (int)numberOfDataPoints;
@end

#endif /* ETDataSourceWithCache_h */
