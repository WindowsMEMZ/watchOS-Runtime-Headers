//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 396.4.0.0.0
//
#ifndef TRIFBCloudKitTreatmentRecordAssetBuilder_h
#define TRIFBCloudKitTreatmentRecordAssetBuilder_h
@import Foundation;

@class AFBBufferBuilder;

@interface TRIFBCloudKitTreatmentRecordAssetBuilder : NSObject {
  /* instance variables */
  AFBBufferBuilder *_owner;
  struct CloudKitTreatmentRecordAssetBuilder { struct FlatBufferBuilder * x0; unsigned int x1; } * _bldr;
}

/* instance methods */
- (void)dealloc;
- (void)setContainer:(unsigned char)container;
- (void)setTreatmentId:(id)id;
- (void)setAssetIndex:(unsigned int)index;
- (void)setHasCkIndex:(BOOL)index;
- (id)init;
@end

#endif /* TRIFBCloudKitTreatmentRecordAssetBuilder_h */
