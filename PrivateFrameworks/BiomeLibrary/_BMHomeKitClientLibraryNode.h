//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 55.4.3.0.0
//
#ifndef _BMHomeKitClientLibraryNode_h
#define _BMHomeKitClientLibraryNode_h
@import Foundation;

#include "_BMLibraryNode.h"

@interface _BMHomeKitClientLibraryNode : _BMLibraryNode
/* class methods */
+ (id)AccessoryControl;
+ (id)ActionSet;
+ (id)MediaAccessoryControl;
+ (id)storeConfigurationForAccessoryControl;
+ (id)syncPolicyForAccessoryControl;
+ (id)configurationForAccessoryControl;
+ (id)storeConfigurationForActionSet;
+ (id)syncPolicyForActionSet;
+ (id)configurationForActionSet;
+ (id)storeConfigurationForMediaAccessoryControl;
+ (id)syncPolicyForMediaAccessoryControl;
+ (id)configurationForMediaAccessoryControl;
+ (id)identifier;
+ (id)streamNames;
+ (id)validKeyPaths;
+ (id)streamWithName:(id)name;
+ (id)sublibraries;
@end

#endif /* _BMHomeKitClientLibraryNode_h */
