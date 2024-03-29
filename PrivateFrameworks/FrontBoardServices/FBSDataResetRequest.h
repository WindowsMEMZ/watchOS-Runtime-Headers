//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 867.10.0.0.0
//
#ifndef FBSDataResetRequest_h
#define FBSDataResetRequest_h
@import Foundation;

@class NSString;

@interface FBSDataResetRequest : NSObject

@property (nonatomic) long long mode;
@property (nonatomic) long long options;
@property (copy, nonatomic) NSString *reason;

/* instance methods */
- (id)initWithMode:(long long)mode options:(long long)options reason:(id)reason;
@end

#endif /* FBSDataResetRequest_h */
