//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1235.0.0.0.0
//
#ifndef CNFoundationUserDefaults_Protocol_h
#define CNFoundationUserDefaults_Protocol_h
@import Foundation;

#include "CNFoundationUserDefaults-Protocol.h"
#include "CNUserDefaults.h"

@class NSDictionary, NSString;

@protocol CNFoundationUserDefaults <NSObject>

@property BOOL preferNickname;
@property unsigned long long nameOrder;
@property unsigned long long shortNameFormat;
@property (nonatomic) BOOL shortNameFormatEnabled;
@property (nonatomic) NSDictionary *filteredAccountsAndContainers;

/* instance methods */
- (unsigned long long)newContactNameOrder;
- (unsigned long long)sortOrder;
- (id)countryCode;
- (BOOL)isShortNameFormatEnabled;
@end

#endif /* CNFoundationUserDefaults_Protocol_h */
