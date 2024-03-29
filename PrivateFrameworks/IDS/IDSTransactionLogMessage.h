//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1814.300.81.4.2
//
#ifndef IDSTransactionLogMessage_h
#define IDSTransactionLogMessage_h
@import Foundation;

@class NSString;

@interface IDSTransactionLogMessage : NSObject

@property (readonly, nonatomic) NSString *fromID;
@property (readonly, nonatomic) NSString *loginID;
@property (readonly, nonatomic) NSString *accountUniqueID;
@property (readonly, nonatomic) NSString *serviceName;

/* class methods */
+ (id)transactionLogMessageFromDictionaryRepresentation:(id)representation;

/* instance methods */
- (id)_initWithAccountUniqueID:(id)id fromID:(id)id loginID:(id)id serviceName:(id)name;
- (id)initWithDictionaryRepresentation:(id)representation;
- (id)_dictionaryRepresentation;
- (id)dictionaryRepresentation;
@end

#endif /* IDSTransactionLogMessage_h */
