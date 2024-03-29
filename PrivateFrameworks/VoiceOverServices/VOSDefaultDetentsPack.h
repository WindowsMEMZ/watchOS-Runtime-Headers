//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3093.2.4.4.10
//
#ifndef VOSDefaultDetentsPack_h
#define VOSDefaultDetentsPack_h
@import Foundation;

#include "VOSHapticPack-Protocol.h"

@class NSDictionary, NSString;

@interface VOSDefaultDetentsPack : NSObject<VOSHapticPack>

@property (readonly, nonatomic) NSDictionary *eventToDetentTypeMapping;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (long long)detentAssetTypeForOutputEvent:(id)event;
@end

#endif /* VOSDefaultDetentsPack_h */
