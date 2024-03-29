//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 597.5.2.1.0
//
#ifndef ISGenericFolderIcon_h
#define ISGenericFolderIcon_h
@import Foundation;

#include "ISTypeIcon.h"
#include "ISResourceProvider.h"

@interface ISGenericFolderIcon : ISTypeIcon

@property (readonly) ISResourceProvider *resourceProvider;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (id)makeResourceProvider;
@end

#endif /* ISGenericFolderIcon_h */
