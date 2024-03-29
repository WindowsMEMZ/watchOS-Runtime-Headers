//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 200.0.0.0.0
//
#ifndef RKNLEventToken_h
#define RKNLEventToken_h
@import Foundation;

@class NSString;

@interface RKNLEventToken : NSObject

@property (retain) NSString *string;
@property unsigned int tokenID;
@property long long location;
@property long long length;

/* instance methods */
- (id)initWithString:(id)string location:(long long)location length:(long long)length;
@end

#endif /* RKNLEventToken_h */
