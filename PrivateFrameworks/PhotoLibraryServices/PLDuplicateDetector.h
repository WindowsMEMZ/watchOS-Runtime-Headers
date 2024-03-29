//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLDuplicateDetector_h
#define PLDuplicateDetector_h
@import Foundation;

@interface PLDuplicateDetector : NSObject
/* class methods */
+ (id)duplicateDetectorProcessingFilterAssetsPredicateWithPrefix:(id)prefix processingType:(unsigned long long)type pathManager:(id)manager;
+ (id)duplicateDetectorExcludeZeroByteFingerprintPredicateWithProperty:(id)property;
+ (id)duplicateDetectorFilterProcessingStateWithPrefix:(id)prefix processingType:(unsigned long long)type;
+ (id)predicateFormatToPrependAssetAttributeSubstitutionWithPrefix:(id)prefix;
+ (BOOL)duplicateDetectorCompletedDateBackgroundMigrationAction:(id)action;
+ (BOOL)duplicateDetectorCompletedPerceptualHashProcessingWithManagedObjectContext:(id)context pathManager:(id)manager;
+ (short)currentSceneAnalysisUmbrellaVersion;
@end

#endif /* PLDuplicateDetector_h */
