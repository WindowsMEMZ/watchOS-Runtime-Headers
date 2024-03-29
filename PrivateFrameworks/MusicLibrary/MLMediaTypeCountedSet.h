//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.6.0.0
//
#ifndef MLMediaTypeCountedSet_h
#define MLMediaTypeCountedSet_h
@import Foundation;

@protocol {map<unsigned int, unsigned long, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, unsigned long>>>="__tree_"{__tree<std::__value_type<unsigned int, unsigned long>, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, unsigned long>, std::less<unsigned int>>, std::allocator<std::__value_type<unsigned int, unsigned long>>>="__begin_node_"^v"__pair1_"{__compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned int, unsigned long>, void *>>>="__value_"{__tree_end_node<std::__tree_node_base<void *> *>="__left_"^v}}"__pair3_"{__compressed_pair<unsigned long, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, unsigned long>, std::less<unsigned int>>>="__value_"Q}}};

@interface MLMediaTypeCountedSet : NSObject {
  /* instance variables */
  struct map<unsigned int, unsigned long, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, unsigned long>>> { struct __tree<std::__value_type<unsigned int, unsigned long>, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, unsigned long>, std::less<unsigned int>>, std::allocator<std::__value_type<unsigned int, unsigned long>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned int, unsigned long>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, unsigned long>, std::less<unsigned int>>> { unsigned long long __value_; } __pair3_; } __tree_; } _map;
}

@property (readonly, nonatomic) unsigned long long count;

/* instance methods */
- (id)description;
- (void)addMediaType:(unsigned int)type count:(unsigned long long)count;
- (void)enumerateMediaTypesWithBlock:(id /* block */)block;
@end

#endif /* MLMediaTypeCountedSet_h */
