//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1431.300.81.0.0
//
#ifndef TUContactsDataProviderAppleCareHandles_h
#define TUContactsDataProviderAppleCareHandles_h
@import Foundation;

@class NSSet;

@interface TUContactsDataProviderAppleCareHandles : NSObject

@property (readonly, copy, nonatomic) NSSet *appleCareHandles;

/* instance methods */
- (id)init;
- (void)loadHandles;
- (BOOL)contains:(id)contains;
@end

#endif /* TUContactsDataProviderAppleCareHandles_h */
