//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UITextInteractableLinkItem_h
#define _UITextInteractableLinkItem_h
@import Foundation;

#include "_UITextInteractableItem.h"

@class NSURL;

@interface _UITextInteractableLinkItem : _UITextInteractableItem

@property (retain, nonatomic) NSURL *link;

/* instance methods */
- (BOOL)isLinkItem;
- (BOOL)isEqual:(id)equal;
- (id)_itemRepresentationWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
@end

#endif /* _UITextInteractableLinkItem_h */
