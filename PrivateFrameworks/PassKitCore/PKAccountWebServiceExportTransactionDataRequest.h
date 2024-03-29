//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKAccountWebServiceExportTransactionDataRequest_h
#define PKAccountWebServiceExportTransactionDataRequest_h
@import Foundation;

#include "PKAccountWebServiceRequest.h"

@class NSDate, NSString, NSTimeZone, NSURL;

@interface PKAccountWebServiceExportTransactionDataRequest : PKAccountWebServiceRequest

@property (copy, nonatomic) NSString *accountIdentifier;
@property (retain, nonatomic) NSURL *baseURL;
@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long trigger;
@property (copy, nonatomic) NSString *fileFormat;
@property (copy, nonatomic) NSDate *beginDate;
@property (copy, nonatomic) NSDate *endDate;
@property (copy, nonatomic) NSString *statementIdentifier;
@property (copy, nonatomic) NSTimeZone *productTimeZone;

/* instance methods */
- (id)_urlRequestWithAppleAccountInformation:(id)information;
@end

#endif /* PKAccountWebServiceExportTransactionDataRequest_h */
