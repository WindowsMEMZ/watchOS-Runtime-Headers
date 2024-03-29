//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1226.2.2.1.0
//
#ifndef PPLocationStore_h
#define PPLocationStore_h
@import Foundation;

#include "PPClientFeedbackHelper.h"
#include "PPClientStore-Protocol.h"
#include "PPFeedbackAccepting-Protocol.h"

@class NSString;

@interface PPLocationStore : NSObject<PPFeedbackAccepting, PPClientStore> {
  /* instance variables */
  PPClientFeedbackHelper *_clientFeedbackHelper;
}

@property (retain, @dynamic, nonatomic) NSString *clientIdentifier;

/* class methods */
+ (id)new;
+ (id)defaultStore;
+ (id)_mergedThoroughfareForThorughfare:(id)thorughfare subThoroughfare:(id)thoroughfare subPremises:(id)premises;
+ (id)placemarkWithLocation:(id)location name:(id)name thoroughfare:(id)thoroughfare subthoroughFare:(id)fare locality:(id)locality subLocality:(id)locality administrativeArea:(id)area subAdministrativeArea:(id)area postalCode:(id)code countryCode:(id)code country:(id)country inlandWater:(id)water ocean:(id)ocean areasOfInterest:(id)interest;
+ (id)placemarkWithLatitudeDegrees:(id)degrees longitudeDegrees:(id)degrees name:(id)name thoroughfare:(id)thoroughfare subthoroughFare:(id)fare locality:(id)locality subLocality:(id)locality administrativeArea:(id)area subAdministrativeArea:(id)area postalCode:(id)code countryCode:(id)code country:(id)country inlandWater:(id)water ocean:(id)ocean areasOfInterest:(id)interest;
+ (id)placemarkWithName:(id)name clLocation:(id)location;
+ (id)describeLocationConsumer:(unsigned long long)consumer;

/* instance methods */
- (id)init;
- (void)registerFeedback:(id)feedback completion:(id /* block */)completion;
- (void)registerFeedback:(id)feedback clientIdentifier:(id)identifier completion:(id /* block */)completion;
- (BOOL)donateLocations:(id)locations source:(id)source contextualNamedEntities:(id)entities algorithm:(unsigned short)algorithm cloudSync:(BOOL)sync decayRate:(double)rate error:(id *)error;
- (BOOL)cloudSyncWithError:(id *)error;
- (BOOL)clearWithError:(id *)error deletedCount:(unsigned long long *)count;
- (BOOL)iterRankedLocationsWithQuery:(id)query error:(id *)error block:(id /* block */)block;
- (id)rankedLocationsWithQuery:(id)query error:(id *)error;
- (BOOL)iterLocationRecordsWithQuery:(id)query error:(id *)error block:(id /* block */)block;
- (id)locationRecordsWithQuery:(id)query error:(id *)error;
- (id)forwardingTargetForSelector:(SEL)selector;
@end

#endif /* PPLocationStore_h */
