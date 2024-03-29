//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 252.9.0.0.0
//
#ifndef _LTMatch_h
#define _LTMatch_h
@import Foundation;

@class NSDictionary, NSString;

@interface _LTMatch : NSObject

@property (retain, nonatomic) NSDictionary *node;
@property (nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } range;
@property (retain, nonatomic) NSString *token;

/* instance methods */
- (id)initWithNode:(id)node range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (id)description;
@end

#endif /* _LTMatch_h */
