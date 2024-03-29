//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLFactoryContainer_h
#define CSLFactoryContainer_h
@import Foundation;

#include "CUISNotificationCenterCellFactory-Protocol.h"

@class NSMutableSet;

@interface CSLFactoryContainer : NSObject

@property (retain, nonatomic) NSObject<CUISNotificationCenterCellFactory> *factory;
@property (retain, nonatomic) NSMutableSet *supportedSectionIDs;

/* instance methods */
- (id)init;
@end

#endif /* CSLFactoryContainer_h */
