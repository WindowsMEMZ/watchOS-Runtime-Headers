//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2.3.3.0.0
//
#ifndef LBFDprivacydEvent_h
#define LBFDprivacydEvent_h
@import Foundation;

@class NSNumber, NSString;

@interface LBFDprivacydEvent : NSObject

@property (readonly, nonatomic) int eventPhase;
@property (readonly, nonatomic) NSString *eventUUID;
@property (readonly, nonatomic) NSNumber *succeeded;
@property (readonly, nonatomic) NSString *errorMessage;

/* instance methods */
- (id)initWithEventPhase:(int)phase eventUUID:(id)uuid succeeded:(BOOL)succeeded error:(id)error;
@end

#endif /* LBFDprivacydEvent_h */
