//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 158.42.9.28.10
//
#ifndef GEOTransitDepartureSequence_Protocol_h
#define GEOTransitDepartureSequence_Protocol_h
@import Foundation;

@protocol GEOTransitDepartureSequence <NSObject>

@property (readonly, nonatomic) unsigned long long transitId;
@property (readonly, nonatomic) NSObject<GEOTransitLine> *line;
@property (readonly, nonatomic) BOOL isLowFrequency;
@property (readonly, nonatomic) long long displayStyle;
@property (readonly, nonatomic) unsigned long long departureTimeDisplayStyle;
@property (readonly, nonatomic) NSString *direction;
@property (readonly, nonatomic) NSString *headsign;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSString *originName;
@property (readonly, nonatomic) NSString *containerDisplayName;
@property (readonly, nonatomic) NSArray *containerLabelItems;
@property (readonly, nonatomic) NSArray *operatingHours;
@property (readonly, nonatomic) NSSet *nextStopIDs;
@property (readonly, nonatomic) BOOL hasWalkingETA;
@property (readonly, nonatomic) unsigned long long walkingETA;
@property (readonly, nonatomic) NSTimeZone *timeZone;

/* instance methods */
- (id)firstDepartureOnOrAfterDate:(id)date;
- (id)firstDepartureAfterDate:(id)date;
- (id)departures;
- (unsigned long long)stopId;
- (unsigned long long)numberOfDeparturesAfterDate:(id)date;
- (id)firstDepartureFrequencyOnOrAfterDate:(id)date;
- (id)firstOpenOperatingDateOnOrAfterDate:(id)date;
- (BOOL)isValidForDate:(id)date inTimeZone:(id)zone;
- (id)firstDepartureValidForDate:(id)date;
- (id)departuresValidForDate:(id)date;
- (BOOL)hasFrequencyAtDate:(id)date;
- (double)frequencyForSortingAtDate:(id)date;
- (id)frequencyToDescribeAtDate:(id)date;
- (BOOL)isDepartureDateInactive:(id)inactive withReferenceDate:(id)date;
- (id)serviceResumesAfterDate:(id)date;
- (id)operatingHoursForDate:(id)date inTimeZone:(id)zone;
@end

#endif /* GEOTransitDepartureSequence_Protocol_h */
