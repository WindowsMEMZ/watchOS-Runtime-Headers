//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.21.3.0.0
//
#ifndef SSREnrollmentDataManager_h
#define SSREnrollmentDataManager_h
@import Foundation;

@interface SSREnrollmentDataManager : NSObject
/* class methods */
+ (void)saveRawUtteranceAndMetadata:(id)metadata to:(id)to isExplicitEnrollment:(BOOL)enrollment;
+ (BOOL)saveUtteranceAndMetadata:(id)metadata atDirectory:(id)directory isExplicitEnrollment:(BOOL)enrollment;
+ (BOOL)saveUtterance:(id)utterance utteranceAudioPath:(id)path numSamplesToWrite:(unsigned long long)write isExplicitEnrollment:(BOOL)enrollment;
+ (BOOL)saveMetadata:(id)metadata isExplicitEnrollment:(BOOL)enrollment;
+ (id)_getBaseMetaDictionaryForUtterancePath:(id)path;
+ (BOOL)writeMetaDict:(id)dict atMetaPath:(id)path;
@end

#endif /* SSREnrollmentDataManager_h */
