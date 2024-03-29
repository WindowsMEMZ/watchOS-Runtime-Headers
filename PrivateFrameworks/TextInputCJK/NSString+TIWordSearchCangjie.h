//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3431.206.0.0.0
//
#ifndef NSString_TIWordSearchCangjie_h
#define NSString_TIWordSearchCangjie_h
@import Foundation;

#include "TIWordSearchShapeBased.h"

@interface NSString (TIWordSearchCangjie)
/* instance methods */
- (long long)chinesePinyinCompare:(id)compare;
- (long long)traditionalChineseZhuyinCompare:(id)compare;
- (BOOL)containsCangjieWildcard;
@end

#endif /* NSString_TIWordSearchCangjie_h */
