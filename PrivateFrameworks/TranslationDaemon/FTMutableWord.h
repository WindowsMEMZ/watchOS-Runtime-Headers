//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 252.9.0.0.0
//
#ifndef FTMutableWord_h
#define FTMutableWord_h
@import Foundation;

#include "FTWord.h"

@class NSData, NSString;

@interface FTMutableWord : FTWord

@property (copy, nonatomic) NSString *orthography;
@property (copy, nonatomic) NSData *pronunciations;
@property (nonatomic) int frequency;
@property (copy, nonatomic) NSString *tag;

/* instance methods */
- (id)init;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)pronunciations:(id /* block */)pronunciations;
@end

#endif /* FTMutableWord_h */
