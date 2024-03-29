//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1547.1.1.3.0
//
#ifndef CalVirtualConferenceJoinMethod_h
#define CalVirtualConferenceJoinMethod_h
@import Foundation;

@class NSString, NSURL;

@interface CalVirtualConferenceJoinMethod : NSObject

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic) BOOL isBroadcast;

/* instance methods */
- (id)initWithTitle:(id)title URL:(id)url isBroadcast:(BOOL)broadcast;
- (id)description;
- (BOOL)isEqual:(id)equal;
@end

#endif /* CalVirtualConferenceJoinMethod_h */
