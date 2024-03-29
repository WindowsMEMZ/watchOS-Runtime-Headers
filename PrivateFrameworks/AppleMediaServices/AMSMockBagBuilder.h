//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tools: [ld (607.2), ld (814.1), ld (902.8)]
//    - LC_SOURCE_VERSION: 7.2.10.0.0
//
#ifndef AMSMockBagBuilder_h
#define AMSMockBagBuilder_h
@import Foundation;

@class NSDate, NSMutableDictionary, NSString;

@interface AMSMockBagBuilder : NSObject

@property (retain, nonatomic) NSMutableDictionary *data;
@property (retain, nonatomic) NSDate *expirationDate;
@property (retain, nonatomic) NSString *profile;
@property (retain, nonatomic) NSString *profileVersion;

/* instance methods */
- (id)init;
- (id)initWithData:(id)data;
- (void)addBagKey:(id)key value:(id)value valueType:(unsigned long long)type;
- (id)createMockBag;
- (void)unionBagKeySet:(id)set;
@end

#endif /* AMSMockBagBuilder_h */
