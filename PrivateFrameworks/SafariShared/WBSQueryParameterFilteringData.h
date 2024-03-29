//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef WBSQueryParameterFilteringData_h
#define WBSQueryParameterFilteringData_h
@import Foundation;

@class NSMutableOrderedSet;

@interface WBSQueryParameterFilteringData : NSObject {
  /* instance variables */
  NSMutableOrderedSet *_originalAndAdjustedURLs;
}

@property (readonly, nonatomic) long long numberOfFilteredQueryParameters;

/* instance methods */
- (id)init;
- (void)addAdjustedURL:(id)url originalURL:(id)url;
- (void)addData:(id)data;
@end

#endif /* WBSQueryParameterFilteringData_h */
