//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1205.1.1.2.0
//
#ifndef NSString_NameDecomposition_h
#define NSString_NameDecomposition_h
@import Foundation;

@interface NSString (NameDecomposition)
/* class methods */
+ (id)CUIK_attendeeNameExtensions;
+ (id)CUIK_attendeePartialSurnames;

/* instance methods */
- (BOOL)CUIK_attendeeAppearsToBeAnInitial;
- (id)CUIK_attendeeTrimCommasSpacesQuotes;
- (void)CUIK_attendeeFirstName:(id *)name middleName:(id *)name lastName:(id *)name extension:(id *)extension;
@end

#endif /* NSString_NameDecomposition_h */
