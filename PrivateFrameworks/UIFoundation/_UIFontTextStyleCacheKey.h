//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 908.2.0.0.0
//
#ifndef _UIFontTextStyleCacheKey_h
#define _UIFontTextStyleCacheKey_h
@import Foundation;

#include "_UIFontCacheKey.h"

@class NSString;

@interface _UIFontTextStyleCacheKey : _UIFontCacheKey

@property (copy, nonatomic) NSString *textStyle;
@property (copy, nonatomic) NSString *contentSizeCategory;
@property (nonatomic) BOOL textLegibility;

/* instance methods */
- (void)dealloc;
- (unsigned long long)_hash;
- (BOOL)_isEqualToKey:(id)key;
- (id)description;
@end

#endif /* _UIFontTextStyleCacheKey_h */
