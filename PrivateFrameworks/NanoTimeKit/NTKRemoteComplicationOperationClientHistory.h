//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKRemoteComplicationOperationClientHistory_h
#define NTKRemoteComplicationOperationClientHistory_h
@import Foundation;

@class NSDate, NSMutableDictionary;

@interface NTKRemoteComplicationOperationClientHistory : NSObject {
  /* instance variables */
  NSMutableDictionary *_denylistTypeToCountMapping;
}

@property (retain, nonatomic) NSDate *lastSessionStartDate;
@property (nonatomic) long long failedWakeSessionCount;

/* instance methods */
- (id)init;
- (id)description;
- (void)resetTimeoutCountForOperation:(id)operation;
- (void)resetAllTimeoutCounts;
- (void)incrementTimeoutCountForOperation:(id)operation;
- (long long)timeoutCountForOperation:(id)operation;
- (long long)totalTimeoutCount;
@end

#endif /* NTKRemoteComplicationOperationClientHistory_h */
