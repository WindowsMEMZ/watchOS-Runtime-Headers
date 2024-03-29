//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef EAEmailAddressGenerator_h
#define EAEmailAddressGenerator_h
@import Foundation;

@interface EAEmailAddressGenerator : NSObject
/* class methods */
+ (id)formattedAddressWithName:(id)name email:(id)email useQuotes:(BOOL)quotes;
+ (id)stringByTrimmingCommasSpacesQuotesFromString:(id)string;
@end

#endif /* EAEmailAddressGenerator_h */
