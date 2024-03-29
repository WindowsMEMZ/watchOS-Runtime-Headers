//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMCConformanceCache_h
#define HMCConformanceCache_h
@import Foundation;

#include "HMFObject.h"

@class NSMapTable, NSSet;

@interface HMCConformanceCache : HMFObject {
  /* instance variables */
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
  NSSet *_protocols;
  NSMapTable *_conformanceCache;
}

/* instance methods */
- (id)initWithProtocols:(id)protocols;
- (id)initWithProtocol:(id)protocol;
- (BOOL)classConforms:(Class)conforms;
- (BOOL)objectConforms:(id)conforms;
- (void)refreshConformanceOf:(Class)of;
@end

#endif /* HMCConformanceCache_h */
