//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1205.1.1.2.0
//
#ifndef CUIKTimeToLeaveDescriptionGenerator_h
#define CUIKTimeToLeaveDescriptionGenerator_h
@import Foundation;

@interface CUIKTimeToLeaveDescriptionGenerator : NSObject
/* class methods */
+ (id)explanatoryTextForTTLStatus:(unsigned long long)ttlstatus;
+ (id)travelAdvisoryDescriptionOfType:(unsigned long long)type hypothesis:(id)hypothesis location:(id)location;
+ (id)_travelAdvisoryDescriptionOfType:(unsigned long long)type hypothesis:(id)hypothesis eta:(id)eta location:(id)location;
+ (id)timeToLeaveStringWithHypothesis:(id)hypothesis location:(id)location;
+ (id)timeToLeaveStringWithHypothesis:(id)hypothesis eta:(id)eta location:(id)location;
+ (id)timeToLeaveStringWithEta:(double)eta transportType:(int)type runningLate:(BOOL)late;
+ (id)timeToLeaveAttributedStringWithAttributes:(id)attributes hypothesis:(id)hypothesis location:(id)location;
+ (id)_etaString:(double)string;
+ (id)departureDateString:(id)string;
+ (id)_attributedEtaString:(double)string fontName:(id)name fontSize:(double)size;
+ (id)travelTimeApproachingDepartureDateStringWithHypothesis:(id)hypothesis eta:(id)eta location:(id)location;
+ (id)travelTimeApproachingDepartureDateTransitStringWithDepartureDate:(id)date location:(id)location;
+ (id)travelTimeLeaveNowStringWithHypothesis:(id)hypothesis eta:(id)eta location:(id)location;
+ (id)_travelTimeLeaveNowWalkingStringWithHypothesis:(id)hypothesis eta:(id)eta location:(id)location;
+ (id)_travelTimeLeaveNowWalkingStringWithEta:(id)eta location:(id)location;
+ (id)_travelTimeLeaveNowTransitStringWithEta:(id)eta location:(id)location;
+ (id)_travelTimeLeaveNowTransitStringWithLocation:(id)location;
+ (id)_travelTimeLeaveNowDrivingStringWithHypothesis:(id)hypothesis eta:(id)eta location:(id)location;
+ (id)_travelTimeLeaveNowDrivingStringIncludingTrafficWithHypothesis:(id)hypothesis eta:(id)eta location:(id)location;
+ (id)_travelTimeLeaveNowDrivingStringExcludingTrafficWithHypothesis:(id)hypothesis eta:(id)eta location:(id)location;
+ (id)_travelTimeLeaveNowDrivingSubstringWithEta:(id)eta location:(id)location routeName:(id)name includeTransportType:(BOOL)type;
+ (id)_travelTimeLeaveNowDrivingSubstringWithEta:(id)eta location:(id)location includeTransportType:(BOOL)type;
+ (id)travelTimeRunningLateStringWithHypothesis:(id)hypothesis eta:(id)eta location:(id)location;
+ (id)_travelTimeRunningLateTransitStringWithEta:(id)eta location:(id)location;
+ (id)_travelTimeOnTimeWalkingStringWithEta:(id)eta;
+ (id)_travelTimeOnTimeDrivingStringWithEta:(id)eta;
+ (id)_travelTimeOnTimeTransitStringWithEta:(id)eta;
+ (id)_travelTimeStringWithHypothesis:(id)hypothesis eta:(id)eta location:(id)location;
+ (id)_travelTimeWalkingStringWithHypothesis:(id)hypothesis eta:(id)eta location:(id)location;
+ (id)_travelTimeWalkingStringWithEta:(id)eta location:(id)location;
+ (id)_travelTimeDrivingStringWithHypothesis:(id)hypothesis eta:(id)eta location:(id)location;
+ (id)_travelTimeDrivingStringIncludingTrafficWithHypothesis:(id)hypothesis eta:(id)eta location:(id)location;
+ (id)_travelTimeDrivingStringExcludingTrafficWithHypothesis:(id)hypothesis eta:(id)eta location:(id)location;
+ (id)_travelTimeDrivingSubstringWithEta:(id)eta location:(id)location routeName:(id)name includeTransportType:(BOOL)type;
+ (id)_travelTimeDrivingSubstringWithEta:(id)eta location:(id)location includeTransportType:(BOOL)type;
@end

#endif /* CUIKTimeToLeaveDescriptionGenerator_h */
