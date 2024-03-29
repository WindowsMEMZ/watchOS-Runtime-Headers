//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UITextPlaceholderAttachment_h
#define _UITextPlaceholderAttachment_h
@import Foundation;

#include ".h"

@class NSDictionary;

@interface _UITextPlaceholderAttachment : 

@property (nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } attachmentRange;
@property (copy, nonatomic) NSDictionary *typingAttributesBeforeInsertion;

/* instance methods */
- (id)imageForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds textContainer:(id)container characterIndex:(unsigned long long)index;
@end

#endif /* _UITextPlaceholderAttachment_h */
