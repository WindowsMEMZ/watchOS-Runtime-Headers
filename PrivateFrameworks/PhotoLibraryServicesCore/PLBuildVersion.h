//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLBuildVersion_h
#define PLBuildVersion_h
@import Foundation;

@class NSString;

@interface PLBuildVersion : NSObject

@property (readonly, copy, nonatomic) NSString *stringRepresentation;
@property (readonly, nonatomic) long long majorBuildNumber;
@property (readonly, copy, nonatomic) NSString *majorBuildLetterString;
@property (readonly, nonatomic) long long minorBuildNumber;
@property (readonly, copy, nonatomic) NSString *minorBuildLetterString;

/* class methods */
+ (id)currentBuildVersionString;

/* instance methods */
- (id)initWithString:(id)string;
- (long long)compareBuildVersion:(id)version withPrecision:(long long)precision;
- (long long)compareBuildVersionString:(id)string withPrecision:(long long)precision;
- (id)description;
@end

#endif /* PLBuildVersion_h */
