//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 767.3.3.0.0
//
#ifndef NSData_HMFCalendarCreation_h
#define NSData_HMFCalendarCreation_h
@import Foundation;

@interface NSData (HMFCalendarCreation) <HMFObject>
/* class methods */
+ (id)shortDescription;

/* instance methods */
- (id)decodeTimeZone;
- (id)shortDescription;
- (id)privateDescription;
- (BOOL)hmf_isZeroed;
- (id)hmf_initWithHexadecimalString:(id)string options:(unsigned long long)options;
- (id)hmf_hexadecimalStringWithOptions:(unsigned long long)options;
- (id)hmf_hexadecimalRepresentation;
- (id)hmf_zeroingCopy;
- (id)decodeDateComponents;
- (id)decodeArrayOfDateComponents;
- (id)decodeCalendar;
@end

#endif /* NSData_HMFCalendarCreation_h */
