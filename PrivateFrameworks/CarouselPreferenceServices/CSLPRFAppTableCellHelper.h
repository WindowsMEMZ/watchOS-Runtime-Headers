//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLPRFAppTableCellHelper_h
#define CSLPRFAppTableCellHelper_h
@import Foundation;

@class PSTableCell;

@interface CSLPRFAppTableCellHelper : NSObject {
  /* instance variables */
  BOOL _requestInProgress;
  PSTableCell *_tableCell;
}

/* instance methods */
- (id)initWithTableCell:(id)cell;
- (id)blankIcon;
- (id)getLazyIcon;
@end

#endif /* CSLPRFAppTableCellHelper_h */
