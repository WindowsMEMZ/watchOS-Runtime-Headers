//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1454.2.1.0.0
//
#ifndef EKParticipantForDisplay_h
#define EKParticipantForDisplay_h
@import Foundation;

@class NSMutableAttributedString;

@interface EKParticipantForDisplay : NSObject

@property (retain, nonatomic) NSMutableAttributedString *displayString;
@property (nonatomic) BOOL optionalParticipant;

/* instance methods */
- (BOOL)isOptionalParticipant;
@end

#endif /* EKParticipantForDisplay_h */
