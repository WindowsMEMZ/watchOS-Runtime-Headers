//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef WBSResultRankerHelpers_h
#define WBSResultRankerHelpers_h
@import Foundation;

@interface WBSResultRankerHelpers : NSObject
/* class methods */
+ (BOOL)hostAreEqual:(id)equal forSecondURLString:(id)urlstring;
+ (id)simplifiedURL:(id)url;
+ (long long)numberOfWords:(id)words;
+ (double)topSitesScoreAndVisitCountScoreFactor:(id)factor forTopSiteScore:(float)score forVisitCountScore:(long long)score;
+ (BOOL)allowMatch:(id)match forMatch:(id)match forQueryString:(id)string;
@end

#endif /* WBSResultRankerHelpers_h */
