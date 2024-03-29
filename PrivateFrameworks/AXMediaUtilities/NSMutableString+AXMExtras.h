//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 127.1.3.0.0
//
#ifndef NSMutableString_AXMExtras_h
#define NSMutableString_AXMExtras_h
@import Foundation;

@interface NSMutableString (AXMExtras)
/* class methods */
+ (id)axmIndentationString:(long long)string;

/* instance methods */
- (void)axmAppendIndentation:(long long)indentation;
@end

#endif /* NSMutableString_AXMExtras_h */
