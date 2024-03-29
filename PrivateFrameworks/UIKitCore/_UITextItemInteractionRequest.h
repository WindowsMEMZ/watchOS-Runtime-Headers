//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UITextItemInteractionRequest_h
#define _UITextItemInteractionRequest_h
@import Foundation;

#include "_UITextItem.h"

@interface _UITextItemInteractionRequest : NSObject

@property (nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } _range;
@property (retain, nonatomic) _UITextItem *_item;

/* class methods */
+ (id)_requestWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range item:(id)item;

/* instance methods */
@end

#endif /* _UITextItemInteractionRequest_h */
