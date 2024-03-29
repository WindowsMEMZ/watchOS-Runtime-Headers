//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLResourceChooser_h
#define PLResourceChooser_h
@import Foundation;

@interface PLResourceChooser : NSObject
/* class methods */
+ (id)_chooseFileReservationForLargeDisplayableImageFileForAsset:(id)asset format:(id)format forceLarge:(BOOL)large allowMetadataSnapshot:(BOOL)snapshot outFilePath:(id *)path outImageType:(long long *)type;
+ (id)fileReservationForLargeDisplayableImageFileForAsset:(id)asset format:(id)format allowMetadataSnapshot:(BOOL)snapshot forceLarge:(BOOL)large outFilePath:(id *)path outImageType:(long long *)type;
+ (id)fileReservationForImageFileForAsset:(id)asset format:(id)format outFilePath:(id *)path outImageType:(long long *)type;
+ (id)_originalItemFromAllItems:(id)items;
+ (id)_penultimateItemFromAllItems:(id)items;
+ (id)_filteredArrayUsingPredicate:(id)predicate originalItems:(id)items nonMatchingItems:(id *)items;
+ (id)_itemMatchingFormat:(id)format allItems:(id)items acceptableSortedAlternatives:(id *)alternatives;
+ (void)_chooseCloudResourceTypeForFormat:(id)format asset:(id)asset optimalCPLResourceType:(unsigned long long *)type localCPLResourceType:(unsigned long long *)type localCPLResourceFilePath:(id *)path fileReservation:(id *)reservation;
+ (long long)_fileResourceTypeForCloudResourceType:(unsigned long long)type hasAdjustments:(BOOL)adjustments requiresUnadjustedVersion:(BOOL)version;
+ (unsigned long long)cloudResourceTypeForAsset:(id)asset format:(id)format filePath:(id *)path imageType:(long long *)type;

/* instance methods */
- (id)init;
@end

#endif /* PLResourceChooser_h */
