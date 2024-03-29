//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef FCHLSKey_h
#define FCHLSKey_h
@import Foundation;

@class NSString, NSURL;

@interface FCHLSKey : NSObject {
  /* instance variables */
  long long _method;
  NSURL *_url;
  NSString *_keyFormat;
  NSString *_keyFormatVersions;
  NSString *_iv;
}

/* instance methods */
- (id)description;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
@end

#endif /* FCHLSKey_h */
