//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1226.2.2.1.0
//
#ifndef SGQuickResponsesRecords_h
#define SGQuickResponsesRecords_h
@import Foundation;

@class NSArray;

@interface SGQuickResponsesRecords : NSObject

@property (readonly, nonatomic) NSArray *replyRecords;
@property (readonly, nonatomic) double totalOpportunities;
@property (readonly, nonatomic) double totalDisplayed;
@property (readonly, nonatomic) double totalSelected;
@property (readonly, nonatomic) double totalMatched;
@property (readonly, nonatomic) double totalUnmatched;

/* instance methods */
- (id)initWithReplyRecords:(id)records totalOpportunities:(double)opportunities totalDisplayed:(double)displayed totalSelected:(double)selected totalMatched:(double)matched totalUnmatched:(double)unmatched;
@end

#endif /* SGQuickResponsesRecords_h */
