//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CUISNotificationCenterDefaultCellFactoryBase_h
#define CUISNotificationCenterDefaultCellFactoryBase_h
@import Foundation;

#include "CUISNotificationNCCell.h"

@interface CUISNotificationCenterDefaultCellFactoryBase : NSObject {
  /* instance variables */
  CUISNotificationNCCell *_sizingCell;
}

/* class methods */
+ (Class)classFactory;

/* instance methods */
- (id)supportedSectionIDs;
- (id)newCellForReuseIdentifier:(id)identifier;
- (id)sizingCellForNotificationCount:(unsigned long long)count;
- (void)configureCell:(id)cell withNotificationInfo:(id)info appName:(id)name icon:(id)icon;
- (BOOL)willReconfigureCellWhenModifyingNotificationInfo:(id)info withNotificationInfo:(id)info;
- (void)cellDidEndDisplaying:(id)displaying;
@end

#endif /* CUISNotificationCenterDefaultCellFactoryBase_h */
