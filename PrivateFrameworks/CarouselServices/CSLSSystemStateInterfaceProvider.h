//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLSSystemStateInterfaceProvider_h
#define CSLSSystemStateInterfaceProvider_h
@import Foundation;

#include "CSLSSystemStateInterfaceProviding-Protocol.h"

@class NSString;

@interface CSLSSystemStateInterfaceProvider : NSObject<CSLSSystemStateInterfaceProviding>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedProvider;

/* instance methods */
- (id)interfaceForType:(unsigned long long)type;
@end

#endif /* CSLSSystemStateInterfaceProvider_h */
