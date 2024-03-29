//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3300.28.1.0.0
//
#ifndef SAMPPodcastCollection_h
#define SAMPPodcastCollection_h
@import Foundation;

#include "SAMPCollection.h"

@class NSArray, NSNumber, NSString;

@interface SAMPPodcastCollection : SAMPCollection

@property (copy, nonatomic) NSString *artist;
@property (copy, nonatomic) NSArray *preferredPlayOrder;
@property (copy, nonatomic) NSString *sortArtist;
@property (copy, nonatomic) NSNumber *subscribed;

/* class methods */
+ (id)podcastCollection;
+ (id)podcastCollectionWithDictionary:(id)dictionary context:(id)context;

/* instance methods */
- (id)groupIdentifier;
- (id)encodedClassName;
@end

#endif /* SAMPPodcastCollection_h */
