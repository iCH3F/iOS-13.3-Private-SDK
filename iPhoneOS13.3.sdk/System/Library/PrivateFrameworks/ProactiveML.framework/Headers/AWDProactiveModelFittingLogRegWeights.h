//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class AWDProactiveModelFittingEvalMetrics, AWDProactiveModelFittingMinibatchStats, AWDProactiveModelFittingModelInfo, AWDProactiveModelFittingQuantizedDenseVector, AWDProactiveModelFittingQuantizedSparseVector, AWDProactiveModelFittingSparseFloatVector;

@interface AWDProactiveModelFittingLogRegWeights : PBCodable <NSCopying>
{
    NSUInteger _timestamp;
    AWDProactiveModelFittingQuantizedDenseVector *_denseQuantizedWeights;
    AWDProactiveModelFittingEvalMetrics *_evaluationMetrics;
    AWDProactiveModelFittingMinibatchStats *_minibatchStats;
    AWDProactiveModelFittingModelInfo *_modelInfo;
    AWDProactiveModelFittingSparseFloatVector *_sparseFloatWeights;
    AWDProactiveModelFittingQuantizedSparseVector *_sparseQuantizedWeights;
    float _weightsL2norm;
    float _weightsScaleFactor;
    struct {
        unsigned int timestamp:1;
        unsigned int weightsL2norm:1;
        unsigned int weightsScaleFactor:1;
    } _has;
}

@property(retain, nonatomic) AWDProactiveModelFittingQuantizedDenseVector *denseQuantizedWeights; // @synthesize denseQuantizedWeights=_denseQuantizedWeights;
@property(nonatomic) float weightsL2norm; // @synthesize weightsL2norm=_weightsL2norm;
@property(nonatomic) float weightsScaleFactor; // @synthesize weightsScaleFactor=_weightsScaleFactor;
@property(retain, nonatomic) AWDProactiveModelFittingQuantizedSparseVector *sparseQuantizedWeights; // @synthesize sparseQuantizedWeights=_sparseQuantizedWeights;
@property(retain, nonatomic) AWDProactiveModelFittingEvalMetrics *evaluationMetrics; // @synthesize evaluationMetrics=_evaluationMetrics;
@property(retain, nonatomic) AWDProactiveModelFittingMinibatchStats *minibatchStats; // @synthesize minibatchStats=_minibatchStats;
@property(retain, nonatomic) AWDProactiveModelFittingSparseFloatVector *sparseFloatWeights; // @synthesize sparseFloatWeights=_sparseFloatWeights;
@property(retain, nonatomic) AWDProactiveModelFittingModelInfo *modelInfo; // @synthesize modelInfo=_modelInfo;
@property(nonatomic) NSUInteger timestamp; // @synthesize timestamp=_timestamp;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasDenseQuantizedWeights;
@property(nonatomic) BOOL hasWeightsL2norm;
@property(nonatomic) BOOL hasWeightsScaleFactor;
@property(readonly, nonatomic) BOOL hasSparseQuantizedWeights;
@property(readonly, nonatomic) BOOL hasEvaluationMetrics;
@property(readonly, nonatomic) BOOL hasMinibatchStats;
@property(readonly, nonatomic) BOOL hasSparseFloatWeights;
@property(readonly, nonatomic) BOOL hasModelInfo;
@property(nonatomic) BOOL hasTimestamp;
- (BOOL)hasWeights;

@end

