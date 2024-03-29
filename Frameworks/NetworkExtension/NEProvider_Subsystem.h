//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1838.60.8.0.0
//
#ifndef NEProvider_Subsystem_h
#define NEProvider_Subsystem_h
@import Foundation;

#include "PKModularService-Protocol.h"

@class NSString;

@interface NEProvider_Subsystem : NSObject<PKModularService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)initForPlugInKit;
@end

#endif /* NEProvider_Subsystem_h */
