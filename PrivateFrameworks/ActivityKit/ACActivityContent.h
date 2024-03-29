//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 127.16.0.0.0
//
#ifndef ACActivityContent_h
#define ACActivityContent_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSData, NSDate;

@interface ACActivityContent : NSObject<NSCopying>

@property (copy, nonatomic) NSData *contentData;
@property (copy, nonatomic) NSDate *staleDate;
@property (nonatomic) double relevanceScore;

/* instance methods */
- (id)initWithContentData:(id)data staleDate:(id)date relevanceScore:(double)score;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* ACActivityContent_h */
