//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2201.0.2.0.0
//
#ifndef INPlayMediaIntentExport_Protocol_h
#define INPlayMediaIntentExport_Protocol_h
@import Foundation;

@protocol INPlayMediaIntentExport <NSObject, JSExport>

@property (copy, nonatomic) NSArray *mediaItems;
@property (copy, nonatomic) INMediaItem *mediaContainer;
@property (copy, nonatomic) NSNumber *playShuffled;
@property (nonatomic) long long playbackRepeatMode;
@property (copy, nonatomic) NSNumber *resumePlayback;
@property (copy, nonatomic) NSDate *expirationDate;
@property (copy, nonatomic) NSArray *buckets;
@property (copy, nonatomic) NSString *recoID;
@property (nonatomic) long long playbackQueueLocation;
@property (copy, nonatomic) NSNumber *playbackSpeed;
@property (copy, nonatomic) INMediaSearch *mediaSearch;
@property (copy, nonatomic) NSArray *hashedRouteUIDs;
@property (copy, nonatomic) NSArray *audioSearchResults;
@property (copy, nonatomic) NSArray *alternativeResults;
@property (nonatomic) long long parsecCategory;
@property (copy, nonatomic) NSString *proxiedBundleIdentifier;
@property (copy, nonatomic) INPrivatePlayMediaIntentData *privatePlayMediaIntentData;

/* instance methods */
- (id)init;
@end

#endif /* INPlayMediaIntentExport_Protocol_h */
