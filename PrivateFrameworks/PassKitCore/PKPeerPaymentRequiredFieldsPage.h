//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPeerPaymentRequiredFieldsPage_h
#define PKPeerPaymentRequiredFieldsPage_h
@import Foundation;

@class NSArray, NSString;

@interface PKPeerPaymentRequiredFieldsPage : NSObject

@property (retain, nonatomic) NSArray *requiredFields;
@property (copy, nonatomic) NSString *localizedTitle;
@property (copy, nonatomic) NSString *localizedDescription;
@property (copy, nonatomic) NSString *requestToken;
@property (copy, nonatomic) NSString *status;
@property (copy, nonatomic) NSArray *actions;

/* instance methods */
- (id)initWithDictionary:(id)dictionary fieldOptions:(id)options;
@end

#endif /* PKPeerPaymentRequiredFieldsPage_h */
