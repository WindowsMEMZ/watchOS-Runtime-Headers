//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 105.150.0.0.0
//
#ifndef CVNLPTextDecodingToken_h
#define CVNLPTextDecodingToken_h
@import Foundation;

@class NSNumber, NSString;

@interface CVNLPTextDecodingToken : NSObject

@property (readonly, copy, nonatomic) NSString *string;
@property (readonly, nonatomic) BOOL hasPrecedingSpace;
@property (readonly, copy, nonatomic) NSString *terminatingCharacter;
@property (readonly, copy, nonatomic) NSNumber *score;
@property (readonly, copy, nonatomic) NSNumber *alignmentScore;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } activationRange;
@property (readonly, copy, nonatomic) NSString *fullString;

/* instance methods */
- (id)initWithString:(id)string score:(id)score alignmentScore:(id)score activationRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range terminatingCharacter:(id)character;
- (id)initWithString:(id)string score:(id)score activationRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range terminatingCharacter:(id)character;
- (id)initWithString:(id)string score:(id)score activationRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range hasPrecedingSpace:(BOOL)space;
@end

#endif /* CVNLPTextDecodingToken_h */
