//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.16.1.0.0
//
#ifndef INFERENCESchemaINFERENCENotebookAppSelectionGroundTruthGenerated_h
#define INFERENCESchemaINFERENCENotebookAppSelectionGroundTruthGenerated_h
@import Foundation;

#include "SISchemaInstrumentationMessage.h"
#include "INFERENCESchemaINFERENCENotebookAppSelectionTrainingIndependentSignals.h"

@class NSArray, NSData;

@interface INFERENCESchemaINFERENCENotebookAppSelectionGroundTruthGenerated : SISchemaInstrumentationMessage

@property (retain, nonatomic) INFERENCESchemaINFERENCENotebookAppSelectionTrainingIndependentSignals *inferenceNotebookAppSelectionTrainingAppIndependentSignals;
@property (nonatomic) BOOL hasInferenceNotebookAppSelectionTrainingAppIndependentSignals;
@property (copy, nonatomic) NSArray *inferenceNotebookAppSelectionTrainingAppDependentSignals;
@property (readonly, nonatomic) NSData *jsonData;

/* instance methods */
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)policy;
- (void)deleteInferenceNotebookAppSelectionTrainingAppIndependentSignals;
- (void)clearInferenceNotebookAppSelectionTrainingAppDependentSignals;
- (void)deleteInferenceNotebookAppSelectionTrainingAppDependentSignals;
- (void)addInferenceNotebookAppSelectionTrainingAppDependentSignals:(id)signals;
- (unsigned long long)inferenceNotebookAppSelectionTrainingAppDependentSignalsCount;
- (id)inferenceNotebookAppSelectionTrainingAppDependentSignalsAtIndex:(unsigned long long)index;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)json;
- (id)initWithDictionary:(id)dictionary;
@end

#endif /* INFERENCESchemaINFERENCENotebookAppSelectionGroundTruthGenerated_h */
