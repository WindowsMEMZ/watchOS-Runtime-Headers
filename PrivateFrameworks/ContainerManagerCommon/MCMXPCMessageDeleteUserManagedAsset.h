//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 582.60.2.0.0
//
#ifndef MCMXPCMessageDeleteUserManagedAsset_h
#define MCMXPCMessageDeleteUserManagedAsset_h
@import Foundation;

#include "MCMXPCMessageWithContainerBase.h"
#include "MCMContainerIdentity.h"
#include "MCMParametersDeleteUserManagedAsset-Protocol.h"

@class NSString;

@interface MCMXPCMessageDeleteUserManagedAsset : MCMXPCMessageWithContainerBase<MCMParametersDeleteUserManagedAsset>

@property (readonly, nonatomic) NSString *sourceRelativePath;
@property (readonly, nonatomic) MCMContainerIdentity *containerIdentity;

/* instance methods */
- (id)initWithXPCObject:(id)xpcobject context:(id)context error:(unsigned long long *)error;
@end

#endif /* MCMXPCMessageDeleteUserManagedAsset_h */
