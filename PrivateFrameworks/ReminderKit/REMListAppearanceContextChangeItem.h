//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1004.0.0.0.0
//
#ifndef REMListAppearanceContextChangeItem_h
#define REMListAppearanceContextChangeItem_h
@import Foundation;

#include "REMListBadge.h"
#include "REMListChangeItem.h"

@class NSString;

@interface REMListAppearanceContextChangeItem : NSObject

@property (retain, nonatomic) REMListChangeItem *listChangeItem;
@property (copy, nonatomic) REMListBadge *badge;
@property (copy, nonatomic) NSString *badgeEmblem;

/* instance methods */
- (id)initWithListChangeItem:(id)item;
- (void)setShowingLargeAttachments:(BOOL)attachments;
- (BOOL)showingLargeAttachments;
@end

#endif /* REMListAppearanceContextChangeItem_h */
