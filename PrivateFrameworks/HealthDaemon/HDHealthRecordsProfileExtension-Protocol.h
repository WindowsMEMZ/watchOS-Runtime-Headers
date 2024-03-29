//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDHealthRecordsProfileExtension_Protocol_h
#define HDHealthRecordsProfileExtension_Protocol_h
@import Foundation;

@protocol HDHealthRecordsProfileExtension 
/* instance methods */
- (BOOL)deviceConfigurationSupportsHealthRecords:(BOOL *)records error:(id *)error;
- (BOOL)isSupportedFHIRVersionString:(id)string;
- (BOOL)isSupportedFHIRResourceType:(id)type FHIRVersionString:(id)string;
- (void)registerHealthRecordsSupportedChangeObserver:(id)observer;
- (void)unregisterHealthRecordsSupportedChangeObserver:(id)observer;
- (long long)hasGatewayBackedAccountsWithError:(id *)error;
- (long long)hasIssuerBackedAccountsWithError:(id *)error;
- (long long)hasGatewayBackedAccountsWithTransaction:(id)transaction error:(id *)error;
- (long long)hasIssuerBackedAccountsWithTransaction:(id)transaction error:(id *)error;
- (void)addAccountEventObserver:(id)observer;
- (void)removeAccountEventObserver:(id)observer;
@end

#endif /* HDHealthRecordsProfileExtension_Protocol_h */
