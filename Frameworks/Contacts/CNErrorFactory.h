//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3628.0.0.0.0
//
#ifndef CNErrorFactory_h
#define CNErrorFactory_h
@import Foundation;

@interface CNErrorFactory : NSObject
/* class methods */
+ (id)os_log;
+ (id)genericiOSABError;
+ (id)errorForiOSABError:(struct __CFError *)osaberror;
+ (long long)CNErrorCodeForABError:(struct __CFError *)aberror;
+ (id)errorWithCode:(long long)code;
+ (id)errorWithCode:(long long)code userInfo:(id)info;
+ (id)_localizedDescriptionForCode:(long long)code;
+ (id)_localizedReasonForCode:(long long)code;
+ (id)errorByPrependingKeyPath:(id)path toKeyPathsInError:(id)error;
+ (id)errorByAddingUserInfoEntries:(id)entries toError:(id)error;
+ (id)errorObject:(id)object doesNotImplementSelector:(SEL)selector;
+ (id)validationErrorByAggregatingValidationErrors:(id)errors;
@end

#endif /* CNErrorFactory_h */
