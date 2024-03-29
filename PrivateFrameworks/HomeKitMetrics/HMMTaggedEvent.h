//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMMTaggedEvent_h
#define HMMTaggedEvent_h
@import Foundation;

@class NSDictionary, NSString;

@interface HMMTaggedEvent : NSObject

@property (readonly, nonatomic) NSString *tagName;
@property (readonly, nonatomic) long long tagTime;
@property (readonly, nonatomic) NSDictionary *tagData;

/* instance methods */
- (id)initWithTag:(id)tag data:(id)data;
- (id)initWithTag:(id)tag time:(long long)time data:(id)data;
- (id)description;
@end

#endif /* HMMTaggedEvent_h */
