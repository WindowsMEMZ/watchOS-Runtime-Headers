//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1004.0.0.0.0
//
#ifndef NSCharacterSet_TTRAdditions_h
#define NSCharacterSet_TTRAdditions_h
@import Foundation;

@interface NSCharacterSet (TTRAdditions)
/* class methods */
+ (id)hashtagTokenAllowedCharacters;
+ (id)emojis;
+ (id)makeFormatCharacters;
+ (void)subtractOtherPunctuationCharactersFrom:(id)from;
@end

#endif /* NSCharacterSet_TTRAdditions_h */
