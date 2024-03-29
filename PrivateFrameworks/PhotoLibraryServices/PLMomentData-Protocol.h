//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLMomentData_Protocol_h
#define PLMomentData_Protocol_h
@import Foundation;

@protocol PLMomentData <PLMomentRefreshable, PLMomentProcessingProtocol, PLSharedAssetsContainer>

@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (nonatomic) int timeZoneOffset;
@property (readonly, retain, nonatomic) NSDate *localStartDate;
@property (readonly, retain, nonatomic) NSDate *localEndDate;
@property (retain, nonatomic) NSDate *representativeDate;
@property (readonly, retain, nonatomic) NSObject<NSCopying> *uniqueObjectID;
@property (nonatomic) double approximateLatitude;
@property (nonatomic) double approximateLongitude;
@property (retain, nonatomic) CLLocation *approximateLocation;
@property (nonatomic) unsigned short processedLocation;
@property (nonatomic) double gpsHorizontalAccuracy;
@property (nonatomic) short originatorState;
@property (nonatomic) float aggregationScore;
@property (retain, nonatomic) NSSet *assets;
@property (readonly, retain, nonatomic) NSArray *batchedAssets;
@property (readonly, nonatomic) NSObject<PLPhotosHighlightData> *highlight;
@property (nonatomic) int cachedCount;
@property (nonatomic) int cachedPhotosCount;
@property (nonatomic) int cachedVideosCount;
@property (retain, nonatomic) NSString *uuid;
@property (retain, nonatomic) NSString *title;

/* class methods */
+ (id)sortByTimeSortDescriptors;
/* instance methods */
- (BOOL)isDeleted;
- (void)delete;
- (void)removeAssetData:(id)data;
- (void)insertAssetData:(id)data;
@end

#endif /* PLMomentData_Protocol_h */
