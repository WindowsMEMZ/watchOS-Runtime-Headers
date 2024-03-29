//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 127.1.3.0.0
//
#ifndef AXMTextLayoutManager_h
#define AXMTextLayoutManager_h
@import Foundation;

#include "AXMSemanticTextFactory.h"

@class NSMeasurementFormatter, NSNumberFormatter;

@interface AXMTextLayoutManager : NSObject

@property (retain, nonatomic) AXMSemanticTextFactory *semanticTextFactory;
@property (retain, nonatomic) NSNumberFormatter *numberFormatter;
@property (retain, nonatomic) NSMeasurementFormatter *measurementFormatter;

/* instance methods */
- (id)initWithSemanticTextFactory:(id)factory;
- (id)fractionDenominatorValuesWithOneAsNumerator;
- (id)fractionDenominatorValues;
- (id)measurementAbbreviationsToVerboseString;
- (id)receiptRegularExpressions;
- (id)_assembleLayoutSequences:(id)sequences;
- (id)_assembleLayoutLines:(id)lines;
- (id)_assembleLayoutRegions:(id)regions;
- (id)_assembleLayoutCellsWithFeatures:(id)features;
- (id)_assembleLayoutRow:(id)row;
- (id)_assembleLayoutHeader:(id)header;
- (id)_assembleLayoutColumn:(id)column;
- (id)_assembleLayoutRowFromCell:(id)cell;
- (id)_assembleLayoutTable:(id)table header:(id)header columnItems:(id)items;
- (id)_assembleNutritionLabelLayoutWithRows:(id)rows;
- (id)_assembleReceipt:(id)receipt;
- (id)documentWithTextFeatures:(id)features canvasSize:(struct CGSize { double x0; double x1; })size preferredLocales:(id)locales applySemanticAnalysis:(BOOL)analysis error:(id *)error;
- (id)envelopeWithTextFeatures:(id)features canvasSize:(struct CGSize { double x0; double x1; })size preferredLocales:(id)locales applySemanticAnalysis:(BOOL)analysis error:(id *)error;
- (id)extractDataFromEnvelopeWithFeatures:(id)features preferredLocales:(id)locales canvasSize:(struct CGSize { double x0; double x1; })size;
@end

#endif /* AXMTextLayoutManager_h */
