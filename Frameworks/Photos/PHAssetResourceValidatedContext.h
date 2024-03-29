//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PHAssetResourceValidatedContext_h
#define PHAssetResourceValidatedContext_h
@import Foundation;

#include "PHExternalAssetResource.h"

@class NSData, NSURL;

@interface PHAssetResourceValidatedContext : NSObject

@property (readonly, nonatomic) PHExternalAssetResource *resource;
@property (readonly, nonatomic) NSURL *validatedURL;
@property (readonly, nonatomic) NSData *validatedData;

/* instance methods */
- (id)initWithResource:(id)resource validatedURL:(id)url validatedData:(id)data;
@end

#endif /* PHAssetResourceValidatedContext_h */
