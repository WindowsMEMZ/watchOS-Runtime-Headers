//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UITextPlaceholder_h
#define UITextPlaceholder_h
@import Foundation;

#include "_UITextPlaceholderAttachment.h"

@class NSArray;

@interface UITextPlaceholder : NSObject

@property (copy, nonatomic) NSArray *rects;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } caretRectBeforeInsertion;
@property (retain, nonatomic) _UITextPlaceholderAttachment *attachment;

/* instance methods */
- (id)init;
@end

#endif /* UITextPlaceholder_h */
