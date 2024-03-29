//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef IPASerializationManager_h
#define IPASerializationManager_h
@import Foundation;

@interface IPASerializationManager : NSObject
/* class methods */
+ (void)initialize;
+ (id)serializerMap;
+ (id)_serializerForFormat:(id)format formatVersion:(id)version error:(id *)error;
+ (char)adjustmentTypeForFormat:(id)format formatVersion:(id)version;
+ (id)formatForAdjustmentStack:(id)stack;
+ (id)serializeWithCurrentDefaultFormat:(id)format error:(id *)error;
+ (id)serializeWithCurrentDefaultFormat:(id)format format:(id *)format formatVersion:(id *)version error:(id *)error;
+ (id)serialize:(id)serialize error:(id *)error;
+ (id)serialize:(id)serialize format:(id)format formatVersion:(id)version error:(id *)error;
+ (id)deserialize:(id)deserialize originator:(id)originator format:(id)format formatVersion:(id)version error:(id *)error;
+ (id)debug_serializeEnvelope:(id)envelope error:(id *)error;
+ (char)debug_adjustmentTypeFromEnvelopeDictionary:(id)dictionary;
+ (id)debug_deserializeEnvelopeDictionary:(id)dictionary error:(id *)error;
@end

#endif /* IPASerializationManager_h */
