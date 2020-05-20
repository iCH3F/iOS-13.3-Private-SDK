//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ProactiveML/PMLEvaluationTrackerProtocol-Protocol.h>
#import <ProactiveML/PMLLinRegTrackerProtocol-Protocol.h>
#import <ProactiveML/PMLLogRegTrackerProtocol-Protocol.h>
#import <ProactiveML/PMLMultiLabelEvaluationTrackerProtocol-Protocol.h>

@class AWDProactiveModelFittingModelInfo;
@protocol PMLTrackerAdapterProtocol;

@interface PMLProtoBufTracker : NSObject <PMLLogRegTrackerProtocol, PMLLinRegTrackerProtocol, PMLEvaluationTrackerProtocol, PMLMultiLabelEvaluationTrackerProtocol>
{
    AWDProactiveModelFittingModelInfo *_modelInfo;
    NSUInteger _quantizationNumberOfBuckets;
    id <PMLTrackerAdapterProtocol> _adapter;
}

+ (id)messageForGradient:(id)arg1 scaleFactor:(float)arg2 minibatchStats:(id)arg3 evaluationMetrics:(id)arg4 serverIteration:(NSUInteger)arg5 modelInfo:(id)arg6 numberOfBuckets:(NSUInteger)arg7;
+ (id)messageForWeights:(id)arg1 scaleFactor:(float)arg2 minibatchStats:(id)arg3 evaluationMetrics:(id)arg4 modelInfo:(id)arg5 numberOfBuckets:(NSUInteger)arg6;
+ (id)parsecTrackerForPlanId:(NSString )arg1;
+ (id)awdTrackerForPlanId:(NSString )arg1;
+ (id)trackerForPlanId:(NSString )arg1;
@property(readonly) NSUInteger quantizationNumberOfBuckets; // @synthesize quantizationNumberOfBuckets=_quantizationNumberOfBuckets;
@property(readonly) AWDProactiveModelFittingModelInfo *modelInfo; // @synthesize modelInfo=_modelInfo;
@property(readonly) id <PMLTrackerAdapterProtocol> adapter; // @synthesize adapter=_adapter;
// - (void).cxx_destruct;
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;
- (id)toPlistWithChunks:(id)arg1;
- (id)trackPrecisionAtK:(id)arg1 minibatchStats:(id)arg2;
- (id)trackPrecisionAtK:(id)arg1;
- (id)trackEvaluationMetrics:(id)arg1 minibatchStats:(id)arg2;
- (void)trackObjectiveFeatures:(id)arg1 featureMatrix:(id)arg2 minibatchSize:(NSUInteger)arg3 support:(float)arg4;
- (id)trackGradient:(id)arg1 scaleFactor:(float)arg2 minibatchStats:(id)arg3 evaluationMetrics:(id)arg4 serverIteration:(NSUInteger)arg5;
- (id)trackWeights:(id)arg1 scaleFactor:(float)arg2 minibatchStats:(id)arg3 evaluationMetrics:(id)arg4;
- (id)init;
- (id)initWithAdapter:(id)arg1 modelInfo:(id)arg2 quantizationBuckets:(NSUInteger)arg3;
- (id)initWithAdapter:(id)arg1 modelInfo:(id)arg2;

@end

