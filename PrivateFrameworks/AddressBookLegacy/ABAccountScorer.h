//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 12698.0.0.0.0
//
#ifndef ABAccountScorer_h
#define ABAccountScorer_h
@import Foundation;

@class ACAccountStore, NSString;

@interface ABAccountScorer : NSObject

@property (nonatomic) void * addressBook;
@property (retain, nonatomic) ACAccountStore *accountStore;
@property (nonatomic) void * account;
@property (nonatomic) int defaultSourceID;
@property (nonatomic) double score;
@property (retain, nonatomic) NSString *accountType;
@property (readonly, nonatomic) NSString *accountTypeDescription;
@property (readonly, nonatomic) NSString *accountDisambiguationDescription;
@property (nonatomic) int sourceID;

/* instance methods */
- (id)initWithAddressBook:(void *)book accountStore:(id)store account:(void *)account defaultSourceID:(int)id;
- (void)dealloc;
- (void)calculateScore;
- (int)_findBestSourceID;
@end

#endif /* ABAccountScorer_h */
