//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef EDClientResumer_h
#define EDClientResumer_h
@import Foundation;

#include "EDResumable-Protocol.h"

@class NSString;

@interface EDClientResumer : NSObject<EDResumable>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithClientBundleIdentifier:(id)identifier hookRegistry:(id)registry clientState:(id)state;
- (void)invalidate;
- (void)resumeForUpdates;
@end

#endif /* EDClientResumer_h */
