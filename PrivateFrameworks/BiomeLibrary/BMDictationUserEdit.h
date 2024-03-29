//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 55.4.3.0.0
//
#ifndef BMDictationUserEdit_h
#define BMDictationUserEdit_h
@import Foundation;

#include "BMEventBase.h"
#include "BMDictationUserEditRequestMetadata.h"
#include "BMStoreData-Protocol.h"

@class NSArray, NSString;

@interface BMDictationUserEdit : BMEventBase<BMStoreData>

@property (readonly, nonatomic) NSString *asrID;
@property (readonly, nonatomic) NSString *interactionID;
@property (readonly, nonatomic) BMDictationUserEditRequestMetadata *metadata;
@property (readonly, nonatomic) unsigned int startIndex;
@property (nonatomic) BOOL hasStartIndex;
@property (readonly, nonatomic) unsigned int endIndex;
@property (nonatomic) BOOL hasEndIndex;
@property (readonly, nonatomic) NSString *correctedText;
@property (readonly, nonatomic) NSString *recognizedText;
@property (readonly, nonatomic) NSArray *recognizedTokens;
@property (readonly, nonatomic) NSArray *alternativeSelections;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)eventWithData:(id)data dataVersion:(unsigned int)version;
+ (id)columns;
+ (id)validKeyPaths;

/* instance methods */
- (id)initWithAsrID:(id)id interactionID:(id)id metadata:(id)metadata startIndex:(id)index endIndex:(id)index correctedText:(id)text recognizedText:(id)text recognizedTokens:(id)tokens alternativeSelections:(id)selections;
- (id)initByReadFrom:(id)from;
- (void)writeTo:(id)to;
- (id)serialize;
- (id)initWithJSONDictionary:(id)jsondictionary error:(id *)error;
- (id)_recognizedTokensJSONArray;
- (id)_alternativeSelectionsJSONArray;
- (id)jsonDictionary;
- (BOOL)isEqual:(id)equal;
@end

#endif /* BMDictationUserEdit_h */
