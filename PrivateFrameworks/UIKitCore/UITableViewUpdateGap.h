//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UITableViewUpdateGap_h
#define UITableViewUpdateGap_h
@import Foundation;

#include "UIUpdateItem.h"

@class NSMutableArray;

@interface UITableViewUpdateGap : NSObject {
  /* instance variables */
  NSMutableArray *_deleteItems;
  NSMutableArray *_insertItems;
  struct { unsigned int x :1 hasAutomaticAnimationItems; } _gapFlags;
  UIUpdateItem *_firstUpdateItem;
  UIUpdateItem *_lastUpdateItem;
}

/* instance methods */
- (id)description;
@end

#endif /* UITableViewUpdateGap_h */
