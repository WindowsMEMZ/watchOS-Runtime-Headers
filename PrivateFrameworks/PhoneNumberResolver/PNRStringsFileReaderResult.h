//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 36.40.7.2.1
//
#ifndef PNRStringsFileReaderResult_h
#define PNRStringsFileReaderResult_h
@import Foundation;

@class NSString;

@interface PNRStringsFileReaderResult : NSObject

@property (retain, nonatomic) NSString *country;
@property (retain, nonatomic) NSString *region;
@property (retain, nonatomic) NSString *city;
@property (readonly, nonatomic) long long score;

/* class methods */
+ (long long)maxPossibleScore;

/* instance methods */
- (id)initWithCountry:(id)country region:(id)region city:(id)city;
- (BOOL)isEqualTo:(id)to;
- (id)separatorForLanguage:(id)language;
- (BOOL)shouldOrderCityFirstForLanguage:(id)language phoneNumberInCC:(id)cc;
- (id)aggregateStringWhileInCountry:(id)country forLanguage:(id)language ccOfNumber:(id)number;
- (BOOL)isPlaceHolderForEmpty;
@end

#endif /* PNRStringsFileReaderResult_h */
