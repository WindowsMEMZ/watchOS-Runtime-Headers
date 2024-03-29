//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef WBSContentBlockerStatisticsFirstParty_h
#define WBSContentBlockerStatisticsFirstParty_h
@import Foundation;

@class NSString;

@interface WBSContentBlockerStatisticsFirstParty : NSObject

@property (readonly, nonatomic) NSString *domain;
@property (readonly, nonatomic) double lastSeen;

/* instance methods */
- (id)initWithDomain:(id)domain lastSeen:(double)seen;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
@end

#endif /* WBSContentBlockerStatisticsFirstParty_h */
