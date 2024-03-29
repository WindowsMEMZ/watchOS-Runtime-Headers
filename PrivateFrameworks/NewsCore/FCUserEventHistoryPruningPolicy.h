//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef FCUserEventHistoryPruningPolicy_h
#define FCUserEventHistoryPruningPolicy_h
@import Foundation;

@interface FCUserEventHistoryPruningPolicy : NSObject

@property (nonatomic) long long type;
@property (nonatomic) unsigned long long value;

/* instance methods */
- (id)initWithType:(long long)type value:(unsigned long long)value;
- (id)description;
@end

#endif /* FCUserEventHistoryPruningPolicy_h */
