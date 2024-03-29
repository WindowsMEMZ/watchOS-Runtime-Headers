//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3762.60.29.0.0
//
#ifndef NSMutableString_NEPrettyPrint_h
#define NSMutableString_NEPrettyPrint_h
@import Foundation;

@interface NSMutableString (NEPrettyPrint)
/* instance methods */
- (void)appendPrettyObject:(id)object withName:(id)name indent:(int)indent showFullContent:(BOOL)content;
- (void)appendPrettyBOOL:(BOOL)bool withName:(id)name indent:(int)indent;
- (void)appendPrettyInt:(int)int withName:(id)name indent:(int)indent;
@end

#endif /* NSMutableString_NEPrettyPrint_h */
