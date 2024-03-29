//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKApplyRadioPickerTitleRow_h
#define PKApplyRadioPickerTitleRow_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "PKApplyCollectionViewRow-Protocol.h"

@class NSString;

@interface PKApplyRadioPickerTitleRow : NSObject<PKApplyCollectionViewRow> {
  /* instance variables */
  NSString *_title;
}

@property (readonly, nonatomic) NSObject<NSCopying> *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithTitle:(id)title;
- (Class)cellClass;
- (void)configureCell:(id)cell;
@end

#endif /* PKApplyRadioPickerTitleRow_h */
