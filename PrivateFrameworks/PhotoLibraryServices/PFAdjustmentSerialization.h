//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PFAdjustmentSerialization_h
#define PFAdjustmentSerialization_h
@import Foundation;

@interface PFAdjustmentSerialization : NSObject
/* class methods */
+ (BOOL)validateArchive:(id)archive containsEntryWithKey:(id)key ofType:(Class)type errors:(id)errors;
+ (BOOL)validateValue:(id)value isOfType:(Class)type errors:(id)errors;
+ (id)serializeAdjustments:(id)adjustments error:(id *)error;
+ (id)deserializeAdjustmentsFromData:(id)data error:(id *)error;
+ (id)serializeDictionary:(id)dictionary error:(id *)error;
+ (id)deserializeDictionaryFromData:(id)data error:(id *)error;
@end

#endif /* PFAdjustmentSerialization_h */
