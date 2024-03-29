//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef WKNavigation_h
#define WKNavigation_h
@import Foundation;

#include "WKObject-Protocol.h"

@class NSString;
@protocol {ObjectStorage<API::Navigation>="data"{type="__lx"[1696C]}};

@interface WKNavigation : NSObject<WKObject> {
  /* instance variables */
  struct ObjectStorage<API::Navigation> { struct type { unsigned char x[1696] __lx; } data; } _navigation;
}

@property (readonly, nonatomic) long long effectiveContentMode;
@property (readonly) struct Object { undefined * * x0; void * x1; } * _apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)dealloc;
- (id)_request;
- (BOOL)_isUserInitiated;
@end

#endif /* WKNavigation_h */
