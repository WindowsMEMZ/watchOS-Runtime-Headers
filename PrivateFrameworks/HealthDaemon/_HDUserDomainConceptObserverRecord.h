//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef _HDUserDomainConceptObserverRecord_h
#define _HDUserDomainConceptObserverRecord_h
@import Foundation;

@class HKUserDomainConcept;

@interface _HDUserDomainConceptObserverRecord : NSObject

@property (readonly, nonatomic) long long changeType;
@property (readonly, nonatomic) HKUserDomainConcept *userDomainConcept;

/* instance methods */
- (id)init;
- (id)initWithUserDomainConcept:(id)concept modificationType:(long long)type;
@end

#endif /* _HDUserDomainConceptObserverRecord_h */
