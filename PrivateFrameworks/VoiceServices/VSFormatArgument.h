//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.3.1.0.0
//
#ifndef VSFormatArgument_h
#define VSFormatArgument_h
@import Foundation;

@class NSDictionary, NSString;

@interface VSFormatArgument : NSObject {
  /* instance variables */
  NSString *formatSpecifier;
  NSDictionary *attributes;
  NSString *formattedArg;
}

/* instance methods */
- (void)dealloc;
@end

#endif /* VSFormatArgument_h */
