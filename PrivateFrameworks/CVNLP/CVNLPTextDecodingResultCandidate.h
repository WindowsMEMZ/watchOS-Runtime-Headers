//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 105.150.0.0.0
//
#ifndef CVNLPTextDecodingResultCandidate_h
#define CVNLPTextDecodingResultCandidate_h
@import Foundation;

@class NSArray, NSString;

@interface CVNLPTextDecodingResultCandidate : NSObject

@property (readonly, nonatomic) NSArray *tokens;
@property (readonly, copy, nonatomic) NSString *fullString;
@property double score;
@property double activationScore;

/* instance methods */
- (id)initWithTokens:(id)tokens score:(double)score activationScore:(double)score;
@end

#endif /* CVNLPTextDecodingResultCandidate_h */
