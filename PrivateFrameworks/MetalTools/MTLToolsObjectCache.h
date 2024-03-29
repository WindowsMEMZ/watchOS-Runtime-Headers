//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 341.35.0.0.0
//
#ifndef MTLToolsObjectCache_h
#define MTLToolsObjectCache_h
@import Foundation;

@class NSMapTable;
@protocol {vector<id, std::allocator<id>>="__begin_"^@"__end_"^@"__end_cap_"{__compressed_pair<id *, std::allocator<id>>="__value_"^@}};

@interface MTLToolsObjectCache : NSObject {
  /* instance variables */
  NSMapTable *_map;
  struct recursive_mutex { struct _opaque_pthread_mutex_t { long long __sig; char x[56] __opaque; } __m_; } _lock;
  struct vector<id, std::allocator<id>> { __end_ * *__begin_; __end_cap_ * * x0; struct __compressed_pair<id *, std::allocator<id>> { id *__value_; } x1; } _keyRemoveList;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _listLock;
}

/* instance methods */
- (id)init;
- (void)removeKey:(id)key;
- (id)getCachedObjectForKey:(id)key;
- (id)getCachedObjectForKey:(id)key onMiss:(id /* block */)miss;
- (void)dealloc;
@end

#endif /* MTLToolsObjectCache_h */
