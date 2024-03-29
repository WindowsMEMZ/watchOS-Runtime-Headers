//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef FCFDBConnectionReadable_Protocol_h
#define FCFDBConnectionReadable_Protocol_h
@import Foundation;

@protocol FCFDBConnectionReadable 
/* instance methods */
- (long long)selectMaxFeedLookupID;
- (id)selectFeedsWithFeedIDs:(id)ids;
- (id)selectFeedItemIDsWithFeedLookupIDs:(id)ids feedRange:(id)range feature:(id)feature maxCount:(unsigned long long)count;
- (id)selectFeedItemsWithIDs:(id)ids;
@end

#endif /* FCFDBConnectionReadable_Protocol_h */
