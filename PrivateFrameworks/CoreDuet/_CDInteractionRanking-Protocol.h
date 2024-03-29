//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1852.4.7.0.3
//
#ifndef _CDInteractionRanking_Protocol_h
#define _CDInteractionRanking_Protocol_h
@import Foundation;

@protocol _CDInteractionRanking 

@property (nonatomic) unsigned long long rankAggregationMethod;

/* instance methods */
- (id)rankInteraction:(id)interaction;
- (BOOL)contactIsAllowed:(id)allowed;
- (BOOL)canRankContacts;
- (double)rankContact:(id)contact;
@end

#endif /* _CDInteractionRanking_Protocol_h */
