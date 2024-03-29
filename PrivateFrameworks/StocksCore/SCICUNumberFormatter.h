//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1304.0.0.0.0
//
#ifndef SCICUNumberFormatter_h
#define SCICUNumberFormatter_h
@import Foundation;

@interface SCICUNumberFormatter : NSObject
/* instance methods */
- (id)formattedCount:(long long)count;
- (id)formattedCount:(long long)count withLocale:(id)locale;
- (id)formattedCount:(long long)count withLocale:(id)locale longform:(BOOL)longform;
- (id)formattedCount:(long long)count withLocale:(id)locale longform:(BOOL)longform compactDisplay:(BOOL)display;
@end

#endif /* SCICUNumberFormatter_h */
