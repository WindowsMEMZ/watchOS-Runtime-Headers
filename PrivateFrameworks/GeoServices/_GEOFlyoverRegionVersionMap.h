//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef _GEOFlyoverRegionVersionMap_h
#define _GEOFlyoverRegionVersionMap_h
@import Foundation;

#include "GEOFlyoverRegionVersions.h"

@protocol {unordered_map<unsigned int, unsigned long, std::hash<unsigned int>, std::equal_to<unsigned int>, std::allocator<std::pair<const unsigned int, unsigned long>>>="__table_"{__hash_table<std::__hash_value_type<unsigned int, unsigned long>, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, unsigned long>, std::hash<unsigned int>, std::equal_to<unsigned int>>, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, unsigned long>, std::equal_to<unsigned int>, std::hash<unsigned int>>, std::allocator<std::__hash_value_type<unsigned int, unsigned long>>>="__bucket_list_"{unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned long>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned long>, void *> *> *>>>="__ptr_"{__compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned long>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned long>, void *> *> *>>>="__value_"^^v"__value_"{__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned long>, void *> *> *>>="__data_"{__compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned long>, void *> *> *>>="__value_"Q}}}}"__p1_"{__compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned long>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned int, unsigned long>, void *>>>="__value_"{__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned long>, void *> *>="__next_"^v}}"__p2_"{__compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, unsigned long>, std::hash<unsigned int>, std::equal_to<unsigned int>>>="__value_"Q}"__p3_"{__compressed_pair<float, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, unsigned long>, std::equal_to<unsigned int>, std::hash<unsigned int>>>="__value_"f}}};

@interface _GEOFlyoverRegionVersionMap : NSObject {
  /* instance variables */
  GEOFlyoverRegionVersions *_versions;
  struct unordered_map<unsigned int, unsigned long, std::hash<unsigned int>, std::equal_to<unsigned int>, std::allocator<std::pair<const unsigned int, unsigned long>>> { struct __hash_table<std::__hash_value_type<unsigned int, unsigned long>, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, unsigned long>, std::hash<unsigned int>, std::equal_to<unsigned int>>, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, unsigned long>, std::equal_to<unsigned int>, std::hash<unsigned int>>, std::allocator<std::__hash_value_type<unsigned int, unsigned long>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned long>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned long>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned long>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned long>, void *> *> *>>> { void * *__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned long>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned long>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned long>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned int, unsigned long>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned long>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, unsigned long>, std::hash<unsigned int>, std::equal_to<unsigned int>>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, unsigned long>, std::equal_to<unsigned int>, std::hash<unsigned int>>> { float __value_; } __p3_; } __table_; } _regionToIndex;
}

/* instance methods */
- (id)init;
- (id)initWithData:(id)data;
- (id)initWithFlyoverRegions:(id)regions;
- (struct GEOFlyoverRegion { unsigned int x0; unsigned int x1; unsigned int x2; struct { unsigned int x0 :1; unsigned int x1 :1; unsigned int x2 :1; } x3; } *)regionForID:(unsigned int)id;
- (void)enumerateFlyoverRegions:(id /* block */)regions;
@end

#endif /* _GEOFlyoverRegionVersionMap_h */
