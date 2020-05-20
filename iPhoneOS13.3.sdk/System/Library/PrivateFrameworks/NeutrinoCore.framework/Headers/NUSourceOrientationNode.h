//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NUOrientationNode.h>

@interface NUSourceOrientationNode : NUOrientationNode
{
    BOOL _skipOrientation;
}

+ (long long)originalOrientationToApplyToSource:(id)arg1 skipOrientation:(BOOL)arg2 error:(out id )arg3;
@property(readonly, nonatomic) BOOL skipOrientation; // @synthesize skipOrientation=_skipOrientation;
- (id)nodeByReplayingAgainstCache:(id)arg1 pipelineState:(id)arg2 error:(out id )arg3;
- (id)initWithInput:(id)arg1 source:(id)arg2 settings:(id)arg3 orientation:(long long)arg4;
- (id)initWithOrientation:(long long)arg1 input:(id)arg2;

@end

