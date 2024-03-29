//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1899.42.9.28.10
//
#ifndef VKIconManager_h
#define VKIconManager_h
@import Foundation;

#include "VKInternalIconManager.h"
#include "VKSharedResources.h"

@protocol OS_dispatch_source;

@interface VKIconManager : NSObject {
  /* instance variables */
  VKSharedResources *_sharedResources;
  VKInternalIconManager *_iconManager;
  BOOL _usingSingletonIconManager;
  struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char x[56] __opaque; } __m_; } _lock;
  NSObject<OS_dispatch_source> *_iconManagerReleaseSource;
  unsigned int _iconManagerTimerID;
}

/* class methods */
+ (id)sharedManager;

/* instance methods */
- (id)init;
- (void)dealloc;
- (id)_internalIconManager;
- (id)imageForImageSourceKey:(id)key;
- (id)imageForStyleAttributes:(id)attributes styleManager:(struct shared_ptr<gss::StylesheetManager<gss::PropertyID>> { void * x0; struct __shared_weak_count * x1; })manager contentScale:(float)scale sizeGroup:(long long)group modifiers:(id)modifiers;
- (id)imageForStyleAttributes:(id)attributes withStylesheetName:(id)name contentScale:(float)scale sizeGroup:(long long)group modifiers:(id)modifiers;
- (id)imageForDataID:(unsigned int)id text:(id)text contentScale:(float)scale sizeGroup:(long long)group modifiers:(id)modifiers;
- (id)imageForKey:(unsigned int)key value:(unsigned int)value contentScale:(float)scale sizeGroup:(long long)group modifiers:(id)modifiers;
- (id)imageForName:(id)name contentScale:(float)scale sizeGroup:(long long)group modifiers:(id)modifiers;
- (id)imageForIconID:(unsigned int)id contentScale:(float)scale sizeGroup:(long long)group modifiers:(id)modifiers;
- (unsigned int)styleAttributeTransitTypeKey;
- (unsigned int)styleAttributeTransitSystemTypeKey;
- (unsigned int)trafficIncidentTypeKey;
- (unsigned int)darkVariant;
- (BOOL)isCachingAtlases;
- (void)setIsCachingAtlases:(BOOL)atlases;
- (void)purge;
@end

#endif /* VKIconManager_h */
