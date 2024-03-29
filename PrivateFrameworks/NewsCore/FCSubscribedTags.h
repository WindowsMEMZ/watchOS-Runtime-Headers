//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef FCSubscribedTags_h
#define FCSubscribedTags_h
@import Foundation;

@class NSArray;

@interface FCSubscribedTags : NSObject

@property (copy, nonatomic) NSArray *subscribedTags;
@property (copy, nonatomic) NSArray *mutedTags;
@property (copy, nonatomic) NSArray *autoFavoriteTags;
@property (copy, nonatomic) NSArray *groupableTags;

/* instance methods */
- (id)initWithSubscribedTags:(id)tags mutedTags:(id)tags autoFavoriteTags:(id)tags groupableTags:(id)tags;
@end

#endif /* FCSubscribedTags_h */
