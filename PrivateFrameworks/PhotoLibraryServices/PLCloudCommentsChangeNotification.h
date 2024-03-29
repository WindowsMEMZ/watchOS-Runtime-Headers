//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLCloudCommentsChangeNotification_h
#define PLCloudCommentsChangeNotification_h
@import Foundation;

#include "PLContainerChangeNotification.h"
#include "PLManagedAsset.h"

@class NSDictionary;

@interface PLCloudCommentsChangeNotification : PLContainerChangeNotification {
  /* instance variables */
  NSDictionary *_userInfo;
}

@property (readonly, nonatomic) PLManagedAsset *asset;

/* class methods */
+ (id)notificationWithAsset:(id)asset snapshot:(id)snapshot;

/* instance methods */
- (id)name;
- (id)userInfo;
- (id)description;
- (id)_contentRelationshipName;
@end

#endif /* PLCloudCommentsChangeNotification_h */
