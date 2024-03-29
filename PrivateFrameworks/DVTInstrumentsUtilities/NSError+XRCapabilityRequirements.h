//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 64562.3.1.1.0
//
#ifndef NSError_XRCapabilityRequirements_h
#define NSError_XRCapabilityRequirements_h
@import Foundation;

@class NSMutableDictionary;

@interface NSError (XRCapabilityRequirements)
/* class methods */
+ (id)dvtiuErrorWithCode:(unsigned long long)code;
+ (id)dvtiuErrorWithFormat:(id)format;
+ (id)dvtiu_errorWithCode:(unsigned long long)code description:(id)description recoverySuggestion:(id)suggestion;

/* instance methods */
- (BOOL)getRecommendedRecoveryAction:(id *)action parameter:(id *)parameter;
- (BOOL)dvtiu_isURLAlreadyExistsError;
- (BOOL)dvtiu_isNoSuchFileOrDirectoryError;
- (BOOL)isCapabilityRequirementFailure;
- (void)enumerateFailedCapabilityRequirements:(id /* block */)requirements;
@end

#endif /* NSError_XRCapabilityRequirements_h */
