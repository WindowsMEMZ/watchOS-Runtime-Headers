//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef _WKVisitedLinkStore_h
#define _WKVisitedLinkStore_h
@import Foundation;

#include "WKObject-Protocol.h"

@class NSString;
@protocol {ObjectStorage<WebKit::VisitedLinkStore>="data"{type="__lx"[152C]}};

@interface _WKVisitedLinkStore : NSObject<WKObject> {
  /* instance variables */
  struct ObjectStorage<WebKit::VisitedLinkStore> { struct type { unsigned char x[152] __lx; } data; } _visitedLinkStore;
}

@property (readonly) struct Object { undefined * * x0; void * x1; } * _apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)addVisitedLinkWithURL:(id)url;
- (void)addVisitedLinkWithString:(id)string;
- (void)removeAll;
- (BOOL)containsVisitedLinkWithURL:(id)url;
- (void)removeVisitedLinkWithURL:(id)url;
@end

#endif /* _WKVisitedLinkStore_h */
